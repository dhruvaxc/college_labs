/*write a complete java program to test whether a given number is a hexadecimal 
number or not .if it is not ,anexception should be throwns and processed 
by the program .the exception must be userdefined .the numbere must be assigned 
to string variable.String function must be used to processing.irrespective of whether 
the number is a hexadecimal number or not the string Endingthe program must be printed 
on the screen. */
import java.util.*;

class NotHexadecimalException extends Exception {
    public NotHexadecimalException(String msg) { super(msg); }
}

public class Q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number string: ");
        String num = sc.nextLine();
        try {
            if (!num.matches("[0-9A-Fa-f]+"))
                throw new NotHexadecimalException("Not a Hexadecimal Number");
            System.out.println(num + " is Hexadecimal");
        } catch (NotHexadecimalException e) {
            System.out.println(e.getMessage());
        } finally {
            System.out.println("Ending the program");
            sc.close();
        }
    }
}