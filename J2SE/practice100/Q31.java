/*Write a program to perform all arithmetic operations 
(+, -, *, /, %) on two numbers. */
public class Q31 
{
    public static void main(String[] args) 
    {
        int num1 = 25;
        int num2 = 4;
        int sum = num1 + num2;
        int difference = num1 - num2;
        int product = num1 * num2;
        double quotient = (double) num1 / num2;
        int remainder = num1 % num2;
        System.out.printf("Numbers: %d and %d%n", num1, num2);
        System.out.printf("Sum: %d%n", sum);    
        System.out.printf("Difference: %d%n", difference);
        System.out.printf("Product: %d%n", product);
        System.out.printf("Quotient: %.2f%n", quotient);
        System.out.printf("Remainder: %d%n", remainder);
    }
}
