package Q4FigPackage;

public class Cone extends Figure
{
    double s,h;
    public Cone(double r, double s, double h)
    {
        if((r>0 && s>0 && h>0) && (s*s == (h*h + r*r)))
        {
            this.r = r;
            this.s = s;
            this.h = h;
        }
        else
        {
            System.out.println("Invalid dimensions for Cone.");
            System.exit(0);
        }
    }
    public void calcArea() 
    {
        a = (pi * r * s) + (pi * r * r);
    }
    public void calcVolume() 
    {
        v = (pi * r * r * h) / 3;
    }
    public void dispArea() 
    {
        System.out.println("Area of Cone: " + a);
    }
    public void dispVolume() 
    {
        System.out.println("Volume of Cone: " + v);
    }
}
