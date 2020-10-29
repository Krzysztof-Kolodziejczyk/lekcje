package agh.cs;


public class World {
    public static void main(String[] args)
    {
        String[] moves = {"f", "b", "r", "l", "f", "f", "r", "r", "f", "f", "f", "f", "f", "f", "f", "f"};
        MoveDirection[] directions = new OptionParser().parse(moves);
        IWorldMap map = new RactangularMap(10,5);
        map.place(new Animal(map, new Vector2d(1,1)));
        map.place(new Animal(map, new Vector2d(1,4)));
        map.draw();
        map.run(directions);
    }
}
