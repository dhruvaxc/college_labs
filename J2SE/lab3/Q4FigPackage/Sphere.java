package Q4FigPackage;

class Sphere extends Figure 
{
    public Sphere(double r)
    {
        if(r > 0)
        {
            this.r = r;
        }
        else
        {
            System.out.println("Invalid Input");
            System.exit(0);
        }
    }
    public void calcArea()
    {
        a = 4 * pi* r * r;
    }
    public void calcVolume()
    {
        v = (4/3) * pi* r * r * r;
    }
    public void dispArea()
    {
        System.out.println("Area of Sphere: " + a);
    }
    public void dispVolume()
    {
        System.out.println("Volume of Sphere: " + v);
    }  
}