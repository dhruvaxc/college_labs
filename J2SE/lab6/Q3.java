import java.util.Scanner;

public class Q3
{
    static class WashingMachine
    {
        private boolean on;
        private int clothes;
        private double detergent;

        public WashingMachine()
        {
            this.on = false;
            this.clothes = 0;
            this.detergent = 0.0;
        }

        public void switchOn()
        {
            on = true;
        }

        public int acceptClothes(int noOfClothes)
        {
            clothes = noOfClothes;
            return clothes;
        }

        public void acceptDetergent()
        {
            detergent = 100.0;
        }

        public void switchOff()
        {
            on = false;
        }

        public boolean isOn()
        {
            return on;
        }

        public int getClothes()
        {
            return clothes;
        }

        public double getDetergent()
        {
            return detergent;
        }
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        WashingMachine wm = new WashingMachine();

        System.out.println("Switching on the washing machine...");
        wm.switchOn();

        System.out.println("Enter number of clothes:");
        int clothes = sc.nextInt();
        wm.acceptClothes(clothes);

        System.out.println("Adding detergent...");
        wm.acceptDetergent();

        System.out.println("Switching off the washing machine...");
        wm.switchOff();

        System.out.println("Number of clothes washed = " + wm.getClothes());
        System.out.println("Detergent used = " + wm.getDetergent());

        sc.close();
    }
}