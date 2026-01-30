package Q4FigPackage;
/*create a package named FigPackage. Define an abstract class
 called figure having the following attribute
r,a,v and pi of the datatype double.the attribute pi must have a 
value equal to 3.1428.must have the following abstract method-
public abstract void calcArea(); public abstract void calcVolume();
public abstract void dispArea();public abstract void dispVolume();
design three classes cone,sphere,cylinder. each of these class
\ must extends the Figure class
class name      Attribute
Cone            r,s of type double
Sphere
Cylinder         r of the type double

the formulae for the area and volume of the cone,cylinder and sphere are as follows:
Class       Formal
cone        area=(pi*r*s)+(pi*r*r)
            volume=(pi*r*v*h)/3
Sphere      area=(4*pi*r*r)
            volume=(4*pi*r*r*r)/3
Cylinder    area=(2*pi*r*r)+(2*pi*r*h)
            volume=pi*r*r*h

define the inherited abstract method in the subclass by using the given formulae and set values of inherited
attribute a and v for the rea and volume ,respectively define any constructor /method that may be necessary.
write a main method in a class called Demo and invoke the method of each subclass. all the created class must be
put in the fig Package compile and execute program at command prompt. */
public class Q4 
{
    public static void main(String[] args) 
    {
        Cone cone = new Cone(3, 5, 4);
        cone.calcArea();
        cone.calcVolume();
        cone.dispArea();
        cone.dispVolume();

        Sphere sphere = new Sphere(3);
        sphere.calcArea();
        sphere.calcVolume();
        sphere.dispArea();
        sphere.dispVolume();

        Cylinder cylinder = new Cylinder(3, 5);
        cylinder.calcArea();
        cylinder.calcVolume();
        cylinder.dispArea();
        cylinder.dispVolume();
        
    }
}
