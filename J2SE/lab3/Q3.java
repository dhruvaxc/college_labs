/*Design a class named 'x' having two attributes i and j of the type int.
Let it have a constructor that takes in two argument of type int and assign 
them to i and j.Let it also have a method name final sum that compute the
sum of i and j that return it.Let a class 'y' extend class x,lets it have 
its own constructer and method name find product that compute and return 
i*j. lets a class Z extend a class Y.Design a class name multilevel inheritance
demo it must have the main method in which the object of class Z is constructed 
and all the methods(its own and the inherited one ) are invokeand the sum 
difference and the product are display. */

import java.util.Scanner;
class x
{
    int i,j;
    public x(int a, int b)
    {
        i = a;
        j = b;
    }
    public final int finalSum()
    {
        return i + j;
    }
}
class y extends x
{
    public y(int a, int b)
    {
        super(a, b);
    }
    public int findProduct()
    {
        return i * j;
    }
}
class z extends y
{
    public z(int a, int b)
    {
        super(a, b);
    }
    public int findDifference()
    {
        return i - j;
    }
}
public class Q3 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two integers:");
        int a = sc.nextInt();
        int b = sc.nextInt();
        z obj = new z(a, b);
        int sum = obj.finalSum();
        int product = obj.findProduct();
        int difference = obj.findDifference();
        System.out.println("Sum: " + sum);
        System.out.println("Product: " + product);
        System.out.println("Difference: " + difference);
        sc.close();
    }
}
