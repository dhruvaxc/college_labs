/*Q4.) Create a class called date that include three instance variable a) month(type int) b)day (type int) and c) year
(type int) . provide a constructer that initialize a three instance variable and assume the value provided are
correct. Provide a set and a get method for each instance variable.Provide a method DisplayDate that display the
month year and day separated by forward slashand write a test application named DateTest that demonstrate
date capabilities. */
import java.util.Scanner;
class Date
{
    private int day;
    private int month;
    private int year;
    public Date(int day, int month, int year) 
    {
        this.day = day;
        this.month = month;
        this.year = year;
    }
    public int getDay() 
    {
        return day;
    }
    public int getMonth() 
    {
        return month;
    }
    public int getYear() 
    {
        return year;
    }
    public void setDay(int day) 
    {
        this.day = day;
    }
    public void setMonth(int month) 
    {
        this.month = month;
    }
    public void setYear(int year) 
    {
        this.year = year;
    }
    public void displaydate () 
    {
        System.out.println(day + "/" + month + "/" + year);
    }
}

public class Q4datetest 
{
    public static void main(String[] args) 
    {
        System.out.println("initializing date object with day=15, month=8, year=2023");
        Date date = new Date(15, 8, 2023);
        date.displaydate();
        System.out.println("updating date");
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter day: ");
        int day=sc.nextInt();
        System.out.print("Enter month: ");
        int month=sc.nextInt();
        System.out.print("Enter year: ");
        int year=sc.nextInt();
        date.setDay(day);
        date.setMonth(month);
        date.setYear(year);
        System.out.println("updated date is:");
        date.displaydate();
        sc.close();
    }
}