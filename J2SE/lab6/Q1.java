import java.util.Scanner;

public class Q1 
{
    static class SuperClass 
    {
        protected int superValue;

        public SuperClass(int superValue) 
        {
            this.superValue = superValue;
        }

        public int getSuperValue() 
        {
            return superValue;
        }
    }

    static class SubClass extends SuperClass 
    {
        private int subValue;

        public SubClass(int superValue, int subValue)
        {
            super(superValue);
            this.subValue = subValue;
        }

        public SubClass(int subValue) 
        {
            this(10, subValue);
        }

        public int getUsingSuperField()
        {
            return super.superValue;
        }

        public void printValues() 
        {
            System.out.println(getSuperValue());
            System.out.println(getUsingSuperField());
            System.out.println(subValue);
        }
    }

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter superValue for obj1:");
        int superVal1 = sc.nextInt();
        System.out.println("Enter subValue for obj1:");
        int subVal1 = sc.nextInt();

        SubClass obj1 = new SubClass(superVal1, subVal1);
        obj1.printValues();

        System.out.println("Enter subValue for obj2:");
        int subVal2 = sc.nextInt();

        SubClass obj2 = new SubClass(subVal2);
        System.out.println(obj2.getSuperValue());
        System.out.println(obj2.getUsingSuperField());

        sc.close();
    }
}