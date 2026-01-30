/*Drivers are concerned with the mileage theit automobiles get. One driver has kept track of
several trips by recording the miles driven and gallons used for each tankful.Develop a java application that will
input the miles driven and gallons used(both as in) for each trip.The program should calculate and display the
miles per gallon obtained for each trip and print the combined miles per gallon obtained for all trips up to this
point. All averaging calculate should produce floating point results. Use class scanner and sentinel-controlled
repetition to obtain the data from the user.*/
import java.util.Scanner;
public class Q5 
{
    public static void main(String[] args) 
    {
        System.out.println("enter miles as -1 to end");
        float miles=0, gallons;
        float totalMiles = 0;
        float totalGallons = 0;
        Scanner sc=new Scanner(System.in);
        int i=1;
        while(miles>=0)
        {
            System.out.println("Trip "+i+":");
            System.out.print("Enter miles driven: ");
            miles=sc.nextFloat();
            if(miles<0)
            {
                break;
            }
            System.out.print("Enter gallons used: ");
            gallons=sc.nextFloat();
            totalMiles += miles;
            totalGallons += gallons;
            i++;
        }
        sc.close();
        float tripMpg = (float)totalMiles / totalGallons;
        System.out.printf("Overall miles per gallon:"+ tripMpg);
    }
}
