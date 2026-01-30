/*Design a Product class with productId, name, and price. 
Create multiple product objects. */
class Product 
{
    private String productId;
    private String name;
    private double price;
    public Product(String productId, String name, double price) 
    {
        this.productId = productId;
        this.name = name;
        this.price = price;
    }
    public String getProductId() 
    {
        return productId;
    }
    public String getName() 
    {
       return name;
    }
    public double getPrice() 
    {
        return price;
    }
}
public class Q20 
{
    public static void main(String[] args) 
    {
        Product product1 = new Product("P001", "Laptop", 1200.00);
        Product product2 = new Product("P002", "Smartphone", 800.00);
        Product product3 = new Product("P003", "Tablet", 400.00);
        System.out.println("Product 1: " + product1.getProductId() + ", " + product1.getName() + ", Price: $" + product1.getPrice());
        System.out.println("Product 2: " + product2.getProductId() + ", " + product2.getName() + ", Price: $" + product2.getPrice());
        System.out.println("Product 3: " + product3.getProductId() + ", " + product3.getName() + ", Price: $" + product3.getPrice());
        
    }
}
