package Q4FigPackage;

class Cylinder extends Figure 
{
    double h;
    public Cylinder(int r, int h)
    {
        if(r > 0 && h > 0)
        {
            this.r = r;
            this.h = h;
        }
        else
        {
            System.out.println("Invalid Input");
            System.exit(0);
        }
    }
    public void calcArea()
    {
        a = 2 * pi* r * (h + r);
    }
    public void calcVolume()
    {
        v = pi* r * r * h;
    }
    public void dispArea()
    {
        System.out.println("Area of Cylinder: " + a);
    }
    public void dispVolume()
    {
        System.out.println("Volume of Cylinder: " + v);
    }  
}
