import java.util.Scanner;

public class Q6
{
    static class Point3D
    {
        private int x;
        private int y;
        private int z;

        public Point3D()
        {
            this.x = 0;
            this.y = 0;
            this.z = 0;
        }

        public Point3D(int x, int y, int z)
        {
            this.x = x;
            this.y = y;
            this.z = z;
        }

        public void input(int x, int y, int z)
        {
            this.x = x;
            this.y = y;
            this.z = z;
        }

        public String output()
        {
            return "(" + x + "," + y + "," + z + ")";
        }

        public double distance(Point3D other)
        {
            int dx = this.x - other.x;
            int dy = this.y - other.y;
            int dz = this.z - other.z;
            return Math.sqrt((dx * dx) + (dy * dy) + (dz * dz));
        }
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter coordinates for Point 1 (x y z):");
        int x1 = sc.nextInt();
        int y1 = sc.nextInt();
        int z1 = sc.nextInt();
        Point3D p1 = new Point3D(x1, y1, z1);

        System.out.println("Enter coordinates for Point 2 (x y z):");
        int x2 = sc.nextInt();
        int y2 = sc.nextInt();
        int z2 = sc.nextInt();
        Point3D p2 = new Point3D(x2, y2, z2);

        System.out.println("Point 1 = " + p1.output());
        System.out.println("Point 2 = " + p2.output());
        System.out.println("Distance between points = " + p1.distance(p2));

        sc.close();
    }
}