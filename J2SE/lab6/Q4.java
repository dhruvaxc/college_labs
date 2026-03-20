public class Q4
{
    static abstract class Car
    {
        protected int[] values;

        public void setValues(int[] values)
        {
            this.values = values;
        }

        public String info()
        {
            return "CarInfo";
        }

        public abstract double avg();

        public abstract int mode();
    }

    static class Maruti extends Car
    {
        public double avg()
        {
            if (values == null || values.length == 0)
            {
                return 0.0;
            }
            double sum = 0.0;
            for (int v : values)
            {
                sum = sum + v;
            }
            return sum / values.length;
        }

        public int mode()
        {
            if (values == null || values.length == 0)
            {
                return 0;
            }
            java.util.HashMap<Integer, Integer> freq = new java.util.HashMap<>();
            for (int v : values)
            {
                freq.put(v, freq.getOrDefault(v, 0) + 1);
            }
            int mode = values[0];
            int best = freq.get(mode);
            for (java.util.Map.Entry<Integer, Integer> e : freq.entrySet())
            {
                int key = e.getKey();
                int count = e.getValue();
                if (count > best)
                {
                    best = count;
                    mode = key;
                }
            }
            return mode;
        }
    }

    static class Santro extends Car
    {
        public double avg()
        {
            if (values == null || values.length == 0)
            {
                return 0.0;
            }
            double sum = 0.0;
            for (int v : values)
            {
                sum = sum + v;
            }
            return sum / values.length;
        }

        public int mode()
        {
            if (values == null || values.length == 0)
            {
                return 0;
            }
            java.util.HashMap<Integer, Integer> freq = new java.util.HashMap<>();
            for (int v : values)
            {
                freq.put(v, freq.getOrDefault(v, 0) + 1);
            }
            int mode = values[0];
            int best = freq.get(mode);
            for (java.util.Map.Entry<Integer, Integer> e : freq.entrySet())
            {
                int key = e.getKey();
                int count = e.getValue();
                if (count > best)
                {
                    best = count;
                    mode = key;
                }
            }
            return mode;
        }
    }

    static class Car1
    {
        public static void use()
        {
            int[] arr = new int[]
            {
                1,
                2,
                2,
                3,
                3,
                3
            };

            Car c1 = new Maruti();
            c1.setValues(arr);
            System.out.println(c1.info());
            System.out.println("Average (Maruti): " + c1.avg());
            System.out.println("Mode (Maruti): " + c1.mode());

            Car c2 = new Santro();
            c2.setValues(arr);
            System.out.println(c2.info());
            System.out.println("Average (Santro): " + c2.avg());
            System.out.println("Mode (Santro): " + c2.mode());
        }
    }

    public static void main(String[] args)
    {
        Car1.use();
    }
}