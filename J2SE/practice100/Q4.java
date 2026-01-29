public class Q4
{
    public static void main(String[] args)
    {
        String message = "Welcome to Java Programming";
        int length = message.length();
        for (int i = 0; i < length + 4; i++)
        {
            System.out.print("*");
        }
        System.out.println();
        System.out.println("* " + message + " *");
        for (int i = 0; i < length + 4; i++)
        {
            System.out.print("*");
        }
    }
}