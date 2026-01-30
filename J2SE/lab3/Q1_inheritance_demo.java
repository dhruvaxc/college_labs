/*Q1.)Design a class called figure . It must have three attributes r,aand v of the data type douoble.It must have the
following methods:
public void dispArea(); public void dispVolume();
The method dispArea must have a statement to print the volume of a. The method dispVolume();
must have a statement to print the value of v.Design a class cone . It must extends class figure class .It must also
have the following attributes h,s of type double.It must have following methods:
public void calcArea();public void calcVolume();
The formulae for the area and volume of the cone are as follows:
Area of a cone(p*r*s)+(p*r*s)
volume of a con=(p*r*s)/3
Write a main method in a class called inheritance demo to demonstrate inheritance. */

import java.util.Scanner;
class figure
{
    double r,a,v;
    public void dispArea()
    {
        System.out.println("Area: " + a);
    }
    public void dispVolume()
    {
        System.out.println("Volume: " + v);
    }
}
class cone extends figure 
{
    double h,s;
    public void calcArea()
    {
        a = (Math.PI * r * s) + (Math.PI * r * r);
    }
    public void calcVolume()
    {
        v = (Math.PI * r * r * h) / 3;
    }
}
public class Q1_inheritance_demo 
{
    public static void main(String[] args) 
    {
        cone c1= new cone();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the radius, height and slant height of the cone:");
        c1.r = sc.nextDouble();
        c1.h = sc.nextDouble();
        c1.s = sc.nextDouble();
        if(c1.r <= 0 || c1.h <= 0 || c1.s <= 0)
        {
            System.out.println("Invalid Input");
            System.exit(0);
        }
        if(c1.s*c1.s != (c1.h*c1.h + c1.r*c1.r))
        {
            System.out.println("Invalid Input as the given dimensions do not form a cone");
            System.exit(0);
        }
        c1.calcArea();
        c1.calcVolume();
        c1.dispArea();
        c1.dispVolume();
        sc.close();
    }
}
