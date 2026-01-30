/*Write a program to demonstrate overflow in data types. */
public class Q48 
{
    public static void main(String[] args) 
    {
        byte byteMax = Byte.MAX_VALUE;
        System.out.println("Byte Max Value: " + byteMax);
        byteMax++;
        System.out.println("Byte Value after Overflow: " + byteMax);

        short shortMax = Short.MAX_VALUE;
        System.out.println("Short Max Value: " + shortMax);
        shortMax++;
        System.out.println("Short Value after Overflow: " + shortMax);

        int intMax = Integer.MAX_VALUE;
        System.out.println("Integer Max Value: " + intMax);
        intMax++;
        System.out.println("Integer Value after Overflow: " + intMax);

        long longMax = Long.MAX_VALUE;
        System.out.println("Long Max Value: " + longMax);
        longMax++;
        System.out.println("Long Value after Overflow: " + longMax);
        
    }
}
