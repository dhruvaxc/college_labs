/*Q1)Create an application that calculate your daily driving cost , so that you can estimate how much money could
be saved by car pooling which also has other advantages such as reducing carbon emission and traffic congestion
. The application should input the following informationand display the user's cost per day of driving to work.

 a)total miles driven per day
 b)cost per gallon of gasoline
 c)average fees per day
 d)tolls per day */
import java.util.Scanner;

public class Q1
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        double milesPerDay;
        double costPerGallon;
        double milesPerGallon;
        double feesPerDay;
        double tollsPerDay;
        double dailyCost;

        System.out.print("Enter total miles driven per day: ");
        milesPerDay = sc.nextDouble();

        System.out.print("Enter cost per gallon of gasoline: ");
        costPerGallon = sc.nextDouble();

        System.out.print("Enter average miles per gallon: ");
        milesPerGallon = sc.nextDouble();

        System.out.print("Enter average fees per day: ");
        feesPerDay = sc.nextDouble();

        System.out.print("Enter tolls per day: ");
        tollsPerDay = sc.nextDouble();

        dailyCost = (milesPerDay / milesPerGallon) * costPerGallon + feesPerDay + tollsPerDay;

        System.out.printf("Your daily driving cost is: $%.2f%n", dailyCost);

        sc.close();
    }
}