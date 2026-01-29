import java.util.Scanner;
public class temp 
{
      public static void main(String[] args)
      {
        Scanner sc= new Scanner(System.in);
        System.out.println("enter number of elements");
        int n= sc.nextInt();
        int a=0,b=1,s;
        System.out.println(a);
        System.out.println(b);
        while(n>0)
        {
            s=a+b;
            a=b;
            System.out.println(s);
            b=s;
            n--;
        }
        sc.close();
      } 
}
