/*Create variables for item price and discount percentage. 
Calculate and display the final price. */
public class Q30 
{
    public static void main(String[] args) 
    {
        double itemPrice = 150.0;
        double discountPercentage = 20.0;
        double discountAmount = (discountPercentage / 100) * itemPrice;
        double finalPrice = itemPrice - discountAmount;

        System.out.printf("Item Price: $%.2f%n", itemPrice);
        System.out.printf("Discount Percentage: %.2f%%%n", discountPercentage);
        System.out.printf("Final Price: $%.2f%n", finalPrice);
    }
}
