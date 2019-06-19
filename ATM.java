/*
ATM Problem Code: HS08TEST
https://www.codechef.com/problems/HS08TEST
*/
import java.util.Scanner;
class ATM
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int amt = sc.nextInt();
        double total = sc.nextDouble();
        double rem;
        if(amt%5==0)
        {
         rem = (total-amt)-0.50;
        }
        else
        {
         rem = total;
        }
        System.out.printf("%.2f",rem);
    
    }
}
/*
PS C:\Users\Anonymous\code-prep> java ATM
30 120.00
89.50
*/
