package agh.cs;

import java.util.ArrayList;

public class RactangularMap implements IWorldMap{

    public int height,width;
    public Animal[][] arrayMap;
    public ArrayList<Animal> animals = new ArrayList<>();
    public Vector2d lowerLeft, upperRight;

    public RactangularMap(int height, int width)
    {
        this.height = height;
        this.width = width;
        arrayMap = new Animal[height][width];
        for(int i=0; i<height; i++)
        {
            for(int j=0; j<width; j++)
            {
                arrayMap[i][j] = null;
            }
        }

        lowerLeft = new Vector2d(0,0);
        upperRight = new Vector2d(width-1,height-1);
    }


    @Override
    public boolean canMoveTo(Vector2d position) {
        if(!(0 <= position.x &&  position.x <= width && position.y <= height && 0 <= position.y)) return false;
        return !isOccupied(position);
    }

    @Override
    public boolean place(Animal animal) {
        if(isOccupied(animal.getPosition()))
        {
            return false;
        }
        else
        {
            arrayMap[animal.getPosition().y][animal.getPosition().x] = animal;
            animals.add(animal);
            return true;
        }
    }

    @Override
    public void run(MoveDirection[] directions){
       try
       {
           int i = 0;
           for(MoveDirection dir: directions)
           {

               Animal animal = animals.get(i);
               i++;
               int tmpx = animal.getPosition().x;
               int tmpy = animal.getPosition().y;
               animal.move(dir);
               if(dir == MoveDirection.BACKWARD || dir == MoveDirection.FORWARD) {
                   if(!place(animal))
                   {
                       animal.initialPosition = new Vector2d(tmpx, tmpy);
                   }
                   else {
                       arrayMap[tmpy][tmpx] = null;
                       arrayMap[animal.getPosition().y][animal.getPosition().x] = animal;
                       animals.remove(animals.size()-1);
                   }
               }
               else {
                   arrayMap[animal.getPosition().y][animal.getPosition().x] = animal;
               }
               if(i == animals.size()) i = 0;
               draw();
           }
           Thread.sleep(1000);
       }
       catch(InterruptedException exception)
       {
            exception.printStackTrace();
       }
    }

    @Override
    public boolean isOccupied(Vector2d position)
    {
        if(arrayMap[position.y][position.x] == null) return false;
        return true;
    }

    @Override
    public Object objectAt(Vector2d position) {
        return arrayMap[position.y][position.x];
    }

    public void draw()
    {
        MapVisualizer mapVisualizer = new MapVisualizer(this);
        System.out.print(mapVisualizer.draw(lowerLeft, upperRight));
    }
}
