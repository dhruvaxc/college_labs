public class temp 
{
    public static void main(String[] args) 
    {
        int a[][]={{1,2,3},{4,5,6},{7,8,9}};
        int b[][]={{10,20,30},{40,50,60},{70,80,90}};
        int c[][]=new int[3][3];
        System.out.println("Matrix A:");
        System.out.println();
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                System.out.print(a[i][j]+" ");
            }
            System.out.println();   
        }
        System.out.println();
        System.out.println("Matrix B:");
        System.out.println();
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                System.out.print(b[i][j]+" ");
            }
            System.out.println();   
        }
        System.out.println();
        System.out.println("Sum of the matrices is :-");
        System.out.println();
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                System.out.print(c[i][j]+" ");
            }
            System.out.println();   
        }
        System.out.println();
        System.out.println("The product of the matrices is :-");
        System.out.println();
        int m[][]=new int[3][3];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    m[i][j]+=a[i][k]*b[k][j];
                }
                System.out.print(m[i][j]+" ");
            }
            System.out.println();   
        }
    }    
}