/*Write a function to give demostrate the functionality of 3D matrix
in 1D matirx. Function prototye:
void set (int value,int indexX,int indexY,int indexZ, int [] 1dArray);
void get (int indexX,int indexY,int indexZ, int [] 1dArray). */
import java.util.Scanner;
public class Q1 
{ 
    static int X,Y,Z;
    public static void main(String[] args) 
    { 
        int a=0,b=0,c=0,v;
        Scanner sc= new Scanner(System.in);
        System.out.println("enter the dimensions of the matrix");
        X=sc.nextInt();
        Y= sc.nextInt();
        Z= sc.nextInt();
        int n= X*Y*Z;
        int[] arr= new int[n];
        System.out.println("enter the value of the array");
        for (int i=0;i<n;i++)
        {
            if(b>=Y)
            {
                b=0;
                c++;
            }
            if(c>=Z)
            {
                c=0;
                a++;
                b=0;
            }
            System.out.println("enter value for index ["+a+"]["+b+"]["+c+"] :");
            v=sc.nextInt();
            set(v,a,b,c,arr);
            b++;
        }
        System.out.println("enter the index you want to check the value at :");
        a=sc.nextInt();
        b= sc.nextInt();
        c= sc.nextInt();
        get(a,b,c,arr);
        sc.close();
    }
    static void set(int value,int x,int y,int z, int arr[] )
    {
        int n= (x*Y*Z)+y*Z+z;
        arr[n]=value;
    }
    static void get(int x,int y,int z, int arr[] )
    {
        int n= (x*Y*Z)+y*Z+z;
        System.out.println("the number at index ["+x+"]["+y+"]["+z+"] is :" +arr[n]);
    }
}
