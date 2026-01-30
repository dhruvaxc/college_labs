/*Define an abstract class called Figure having following attribute pi 
of the data type double. The attribute pi
have a value equal to 3.1420.It must have the following abstract methods .
public abstract void calcArea();public abstract void calcVol();
public abstract void DispArea();public abstract void Dispvol();
Design three classes cone , sphere and cylinder. Each of these 
\classes must extend the Figure class

class name    Attribute
Cone          r,s of type double
Sphere        R
cylinder      h of type double

Define the inherited abstract methods in the subclass by using the
given formulae and set the value of the inherited attribute a and v 
for area and volume, rspe. Define any constructor /method that may be necessary.
Write a main method in a class called Demo and invoke the methods of each subclass. */

import java.util.Scanner;
abstract class Figure
{
    double pi = 3.1420,a,v;
    public abstract void calcArea();
    public abstract void calcVol();
    public abstract void dispArea();
    public abstract void dispVol();
}
class cone extends Figure 
{
    double r,h,s;
    public cone()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter radius, height and slant height of the cone:");
        r = sc.nextDouble();
        h = sc.nextDouble();
        s = sc.nextDouble();
        if(r <= 0 || h <= 0 || s <= 0)
        {
            System.out.println("Invalid Input");
            System.exit(0);
        }
        if(s*s != (h*h + r*r))
        {
            System.out.println("Invalid Input as the given dimensions do not form a cone");
            System.exit(0);
        }
        calcArea();
        calcVol();
        dispArea();
        dispVol();
        sc.close();
    }
    public void calcArea()
    {
        a = (pi* r * s) + (pi* r * r);
    }
    public void calcVol()
    {
        v = (pi* r * r * h) / 3;
    }
    public void dispArea()
    {
        System.out.println("Area of Cone: " + a);
    }
    public void dispVol()
    {
        System.out.println("Volume of Cone: " + v);
    }
}
class sphere extends Figure 
{
    double R;
    public sphere()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter radius of the sphere:");
        R = sc.nextDouble();
        if(R <= 0)
        {
            System.out.println("Invalid Input");
            System.exit(0);
        }
        calcArea();
        calcVol();
        dispArea();
        dispVol();
        sc.close();
    }
    public void calcArea()
    {
        a = 4 * pi* R * R;
    }
    public void calcVol()
    {
        v = (4/3) * pi* R * R * R;
    }
    public void dispArea()
    {
        System.out.println("Area of Sphere: " + a);
    }
    public void dispVol()
    {
        System.out.println("Volume of Sphere: " + v);
    }  
}
class cylinder extends Figure 
{
    double r,h;
    public cylinder()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter radius and height of the cylinder:");
        r = sc.nextDouble();
        h = sc.nextDouble();
        if(r <= 0 || h <= 0)
        {
            System.out.println("Invalid Input");
            System.exit(0);
        }
        calcArea();
        calcVol();
        dispArea();
        dispVol();
        sc.close();
    }
    public void calcArea()
    {
        a = 2 * pi* r * (h + r);
    }
    public void calcVol()
    {
        v = pi* r * r * h;
    }
    public void dispArea()
    {
        System.out.println("Area of Cylinder: " + a);
    }
    public void dispVol()
    {
        System.out.println("Volume of Cylinder: " + v);
    }  
}
public class Q2 
{
    public static void main(String[] args) 
    {
        int i;
        Scanner sc = new Scanner(System.in);
        System.out.println("Choose the figure to calculate area and volume:");
        System.out.println("1. Cone");
        System.out.println("2. Sphere");
        System.out.println("3. Cylinder");
        i = sc.nextInt();
        switch(i)
        {
            case 1:
                new cone();
                break;
            case 2:
                new sphere();
                break;
            case 3:
                new cylinder();
                break;
            default:
                System.out.println("Invalid Choice");
        }
        sc.close();
    }
}
