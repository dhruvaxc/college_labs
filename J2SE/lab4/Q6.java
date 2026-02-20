/*Q.6)Declare an interface called Function that has a method named evaluate 
that takes an int parameter and returns an int value.Create a class Half 
that implements Function. Make the implementation of the method
evaluate() return the value obtained by dividing the int argument by
2.In a client, create a method that takes an arbitrary array of int 
values as parameter and returns an array that has the same length, but the value of an
element in the new array is half that of the value in the corresponding
element in the array passed as parameter. Let the implementation of this 
method create an instance of Half and use this instance to calculate the values in
the array to be returned. */
interface Function
{
    int evaluate(int x);
}

class Half implements Function
{
    public int evaluate(int x)
    {
        return x / 2;
    }
}

public class Q6
{
    public static int[] processArray(int[] arr)
    {
        Function f = new Half();
        int[] result = new int[arr.length];
        for (int i = 0; i < arr.length; i++)
        {
            result[i] = f.evaluate(arr[i]);
        }
        return result;
    }

    public static void main(String[] args)
    {
        int[] input = {10, 25, 40, 99};
        int[] output = processArray(input);
        System.out.println("Original array:");
        for (int x : input)
        {
            System.out.print(x + " ");
        }
        System.out.println("\nProcessed array:");
        for (int x : output)
        {
            System.out.print(x + " ");
        }
    }
}