import java.util.Scanner;
class Invoice
{
    private String partNumber;
    private String partDescription;
    private int quantity;
    private double pricePerItem;
    public Invoice(String partNumber, String partDescription, int quantity, double pricePerItem)
    {
        this.partNumber = partNumber;
        this.partDescription = partDescription;
        this.quantity = quantity > 0 ? quantity : 0;
        this.pricePerItem = pricePerItem > 0 ? pricePerItem : 0.0;
    }
    public String getPartNumber()
    {
        return partNumber;
    }
    public String getPartDescription()
    {
        return partDescription;
    }
    public int getQuantity()
    {
        return quantity;
    }
    public double getPricePerItem()
    {
        return pricePerItem;
    }
    public void setPartNumber(String partNumber)
    {
        this.partNumber = partNumber;
    }
    public void setPartDescription(String partDescription)
    {
        this.partDescription = partDescription;
    }
    public void setQuantity(int quantity)
    {
        this.quantity = quantity > 0 ? quantity : 0;
    }
    public void setPricePerItem(double pricePerItem)
    {
        this.pricePerItem = pricePerItem > 0 ? pricePerItem : 0.0;
    }
    public double getInvoiceAmount()
    {
        return quantity * pricePerItem;
    }
    public void displayInvoice()
    {
        System.out.println("\n*** INVOICE DETAILS ***");
        System.out.println("Part Number: " + partNumber);
        System.out.println("Part Description: " + partDescription);
        System.out.println("Quantity: " + quantity);
        System.out.printf("Price per Item: $%.2f%n", pricePerItem);
        System.out.printf("Total Invoice Amount: $%.2f%n", getInvoiceAmount());
    }
}
public class Q2
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter part number: ");
        String partNumber = sc.nextLine();
        System.out.print("Enter part description: ");
        String partDescription = sc.nextLine();
        System.out.print("Enter quantity: ");
        int quantity = sc.nextInt();
        System.out.print("Enter price per item: ");
        double pricePerItem = sc.nextDouble();
        sc.close();
        Invoice inv = new Invoice(partNumber, partDescription, quantity, pricePerItem);
        inv.displayInvoice();
    }
}