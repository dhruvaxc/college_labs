/*Q3.)Create a class called employee that include three instance variable a)name(type string) b) last name (type
string) and c) monthly salary(double). Provide a constructor that initialize the three instance variable. Provide a
set and a get method of instance variable. if the monthly salary is not positive do not set its value. Write a test
aplication named employeetest that demonstrate class employee capabilities.create two employee object and
display each object yearly salary. Then give each employee a 10% hike and display each employee yearly salary
again. */
import java.util.Scanner;
class Employee
{
    private String name;
    private String lastName;
    private double monthlySalary;
    public Employee(String name, String lastName, double monthlySalary)
    {
        this.name = name;
        this.lastName = lastName;
        if (monthlySalary > 0)
        {
            this.monthlySalary = monthlySalary;
        }
        else
        {
            this.monthlySalary = 0.0;
        }
    }
    public String getName()
    {
        return name;
    }
    public String getLastName()
    {
        return lastName;
    }
    public double getMonthlySalary()
    {
        return monthlySalary;
    }
    public void setName(String name)
    {
        this.name = name;
    }
    public void setLastName(String lastName)
    {
        this.lastName = lastName;
    }
    public void setMonthlySalary(double monthlySalary)
    {
        if (monthlySalary > 0)
        {
            this.monthlySalary = monthlySalary;
        }
    }
    public double getYearlySalary()
    {
        return monthlySalary * 12;
    }
    public void giveRaise(double percentage)
    {
        if (percentage > 0)
        {
            monthlySalary = monthlySalary + (monthlySalary * percentage / 100);
        }
    }
}
public class Q3employeeTest
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first employee's name: ");
        String name1 = sc.nextLine();
        System.out.print("Enter first employee's last name: ");
        String lastName1 = sc.nextLine();
        System.out.print("Enter first employee's monthly salary: ");
        double salary1 = sc.nextDouble();
        sc.nextLine();
        System.out.print("Enter second employee's name: ");
        String name2 = sc.nextLine();
        System.out.print("Enter second employee's last name: ");
        String lastName2 = sc.nextLine();
        System.out.print("Enter second employee's monthly salary: ");
        double salary2 = sc.nextDouble();
        Employee emp1 = new Employee(name1, lastName1, salary1);
        Employee emp2 = new Employee(name2, lastName2, salary2);
        System.out.println("Yearly salary of " + emp1.getName() + " " + emp1.getLastName() + ": $" + emp1.getYearlySalary());
        System.out.println("Yearly salary of " + emp2.getName() + " " + emp2.getLastName() + ": $" + emp2.getYearlySalary());
        emp1.giveRaise(10);
        emp2.giveRaise(10);
        System.out.println("After 10% raise:");
        System.out.println("Yearly salary of " + emp1.getName() + " " + emp1.getLastName() + ": $" + emp1.getYearlySalary());
        System.out.println("Yearly salary of " + emp2.getName() + " " + emp2.getLastName() + ": $" + emp2.getYearlySalary());
        sc.close();
    }
}