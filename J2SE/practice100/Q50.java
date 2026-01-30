/*Write a program to convert a String to an 
integer and perform arithmetic operations. */
public class Q50 
{
    public static void main(String[] args) 
    {
        String strNumber1 = "25";
        String strNumber2 = "75";
        int number1 = Integer.parseInt(strNumber1);
        int number2 = Integer.parseInt(strNumber2);
        int sum = number1 + number2;
        int difference = number2 - number1;
        int product = number1 * number2;
        int quotient = number2 / number1;
        System.out.println("First Number: " + number1);
        System.out.println("Second Number: " + number2);
        System.out.println("Sum: " + sum);
        System.out.println("Difference: " + difference);
        System.out.println("Product: " + product);
        System.out.println("Quotient: " + quotient);
    }
}
