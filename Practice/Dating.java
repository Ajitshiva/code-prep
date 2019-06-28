import java.util.Scanner;
class Dating
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        long t = sc.nextLong();
        while(t-->0)
        {
            long n = sc.nextLong();
            long num = n;
            long add =0;
            while(num>0)
            {
                add += num%10;
                num /=10;
            }
            long val=0;
            if(add>=10)
            {
                val = (long)((add/10.0))*10;
                val = val-add;
            }
            else
            {
                val = 10- add;
            }
            System.out.print(n);
            System.out.println(val);
        }
    }
}
/*
5
43
433
53
532
*/