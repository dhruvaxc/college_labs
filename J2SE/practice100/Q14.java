/*Design a BankAccount class with accountNumber and balance. Create an object and
display the details. */
class BankAccount 
{
    private String accountNumber;
    private double balance;
    
    public BankAccount(String accountNumber, double balance) 
    {
        this.accountNumber = accountNumber;
        this.balance = balance;
    }
    
    public String getAccountNumber() 
    {
        return accountNumber;
    }
    
    public double getBalance() 
    {
        return balance;
    }
}
public class Q14 
{
    public static void main(String[] args) 
    {
        BankAccount account = new BankAccount("123456789", 1000.50);
        System.out.println("Account Number: " + account.getAccountNumber());
        System.out.println("Balance: $" + account.getBalance());
    }
}
