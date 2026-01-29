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
        Employee emp1 = new Employee("John", "Doe", 3000);
        Employee emp2 = new Employee("Jane", "Smith", 4000);
        System.out.println("Yearly salary of " + emp1.getName() + " " + emp1.getLastName() + ": $" + emp1.getYearlySalary());
        System.out.println("Yearly salary of " + emp2.getName() + " " + emp2.getLastName() + ": $" + emp2.getYearlySalary());
        emp1.giveRaise(10);
        emp2.giveRaise(10);
        System.out.println("\nAfter 10% raise:");
        System.out.println("Yearly salary of " + emp1.getName() + " " 
        + emp1.getLastName() + ": $" + emp1.getYearlySalary());
        System.out.println("Yearly salary of " + emp2.getName() + " " 
        + emp2.getLastName() + ": $" + emp2.getYearlySalary());
    }
}