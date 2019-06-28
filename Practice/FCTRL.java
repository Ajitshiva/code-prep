import java.util.Scanner;
class FCTRL
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t=  sc.nextInt();
        while(t-->0)
        {
            int num = sc.nextInt();
            int rem = num;
            int div = 5;
            int count=0;
            while(rem>0)
            {
                rem = num/div;
                div=div*5;
                count +=rem;
                System.out.println("rem:"+rem+"div:"+div+"count"+count);
            }
            System.out.println(count);
        }
    }
}