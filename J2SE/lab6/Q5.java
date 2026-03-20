import java.util.Scanner;

public class Q5
{
    static class Bank
    {
        public int deposit(int amount, int balance)
        {
            return balance + amount;
        }

        public int withdraw(int amount, int balance)
        {
            if (balance >= amount)
            {
                return balance - amount;
            }
            System.out.println("Insufficient balance for withdrawal!");
            return balance;
        }
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Bank b = new Bank();

        int balance = 1000;
        System.out.println("Initial Balance = " + balance);

        System.out.println("Enter deposit amount:");
        int depositAmount = sc.nextInt();
        balance = b.deposit(depositAmount, balance);
        System.out.println("Balance after deposit = " + balance);

        System.out.println("Enter withdrawal amount:");
        int withdrawAmount = sc.nextInt();
        balance = b.withdraw(withdrawAmount, balance);
        System.out.println("Balance after withdrawal = " + balance);

        sc.close();
    }
}