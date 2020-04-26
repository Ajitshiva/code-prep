/*
https://www.codechef.com/problems/CNOTE
*/
import java.util.Scanner;
class CNOTE
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        while(t-->0)
        {
            int Total = sc.nextInt();
            int Done = sc.nextInt();
            int Rubels = sc.nextInt();
            int N = sc.nextInt();
            int Pages[] = new int[N];
            int Prices[] = new int[N];
            int flag=0;
            for(int i=0;i<N;i++)
            {
                Pages[i] =sc.nextInt();
                Prices[i] = sc.nextInt(); 
            }
            for(int i=0;i<N;i++)
            {
                if(Rubels>=Prices[i] && (Total-Done)<=Pages[i])
                    flag=1;
            }
            if(flag==1)
                System.out.println("LUCKYCHEF");
            else
                System.out.println("UNLUCKYCHEF");
        }
    }
}
/*
3 1 2 2
3 4
2 2
LUCKYCHEF
3 1 2 2
2 3
2 3
UNLUCKYCHEF
3 1 2 2
1 1
1 2
UNLUCKYCHEF
*/