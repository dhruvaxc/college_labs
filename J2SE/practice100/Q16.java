/*Design a Mobile class with brand, model, and price. Create objects for two different
mobiles. */
class Mobile 
{
    private String brand;
    private String model;
    private double price;
    public Mobile(String brand, String model, double price) 
    {
        this.brand = brand;
        this.model = model;
        this.price = price;
    }
    public String getBrand() 
    {
        return brand;
    }
    public String getModel() 
    {
        return model;
    }
    public double getPrice() 
    {
        return price;
    }
}
public class Q16 
{
    public static void main(String[] args) 
    {
        Mobile mobile1 = new Mobile("Apple", "iPhone 13", 999.99);
        Mobile mobile2 = new Mobile("Samsung", "Galaxy S21", 799.99);
        
        System.out.println("Mobile 1: " + mobile1.getBrand() + " " + mobile1.getModel() + ", Price: $" + mobile1.getPrice());
        System.out.println("Mobile 2: " + mobile2.getBrand() + " " + mobile2.getModel() + ", Price: $" + mobile2.getPrice());
        
    }
}
