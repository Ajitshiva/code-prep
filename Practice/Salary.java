import java.util.Scanner;
import java.util.Random;
class Salary
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        Random ra = new Random();
        int t= sc.nextInt();
        
        while(t-->0)
        {
            int n=sc.nextInt();
            int arr[]=new int[n];
            int count=0;
            for(int i=0;i<n;i++)
            {
                arr[i]=sc.nextInt();
            }
            int flag=0;
            int l=20;
            while(flag==0)
            {
                int same=0;
                int num=arr[0];
                int max=0;
                for(int j=0;j<n;j++)
                {
                    if(num==arr[j])
                    {
                        same++;
                    }
                    if(arr[j]>arr[max])
                    {
                        max=j;
                    }                      
                }
                if(same==n)
                {
                    flag=1;
                    break;
                }
                if(flag == 0)
                {
                    int k = max;
                    System.out.println("Random"+k);
                    for(int j=0;j<n;j++)
                    {
                        if(j!=max)
                        {
                        arr[j]++;
                        }
                    }
                    count++;
                }
                for(int j=0;j<n;j++)
                {
                    System.out.print(arr[j]);
                }
            }
            System.out.println(count);

        }
    }
}
/*
PS C:\Users\Anonymous\code-prep> java Salary
1
4
1 2 3 4
Random3
2 3 4 4
Random2
3 4 4 5
Random3
4 5 5 5
Random1
5 5 6 6
Random2
6 6 6 7
Random3
7 7 7 7
6
*/
