/*Create a Car class with color, model, and year. 
Add a method to display car information. */
class Car 
{
    private String color;
    private String model;
    private int year;
    public Car(String color, String model, int year) 
    {
        this.color = color;
        this.model = model;
        this.year = year;
    }
    public void displayInfo() 
    {
        System.out.println("Car Model: " + model + ", Color: " + color + ", Year: " + year);
    }
}
public class Q17 
{
    public static void main(String[] args) 
    {
        Car car = new Car("Red", "Toyota Camry", 2020);
        car.displayInfo();
    }
}
