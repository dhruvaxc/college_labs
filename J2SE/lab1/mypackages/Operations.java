package mypackages;
public class Operations 
{
    public int add(int a, int b) 
    {
        return a + b;
    }

    public int multiply(int a, int b) 
    {
        return a * b;
    }

    public int subtract(int a, int b) 
    {
        return a - b;
    }

    public double quotient(int a, int b) 
    {
        if (b == 0) 
        {
           System.out.println("Error: Division by zero");
           return 0;
        }
        else 
        {
        return (double) a / b;
        }
    }
}