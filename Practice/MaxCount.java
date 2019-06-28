import java.io.*;
import java.util.Scanner;
class MaxCount
{
    public static void main(String args[]) throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int t =sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt();
            int arr[]=new int[n];
            int count[]=new int[n];
            for(int i=0;i<n;i++)
            {
                arr[i]=sc.nextInt();
            }
            for(int i=0;i<n;i++)
            {   
                for(int j=i+1;j<n;j++)
                {
                    if(arr[i]==arr[j])
                    {
                        count[i]++;
                    }
                }
            }
            int max=count[0];
            int num = arr[0];
            for(int i=1;i<n;i++)
            {
               if(count[i]>max)
               {
                max=count[i];
                num=arr[i];
               }
            }
            System.out.println(num+" "+(max+1));
        }
    }
}