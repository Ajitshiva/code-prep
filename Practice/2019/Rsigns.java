import java.util.Scanner;
class Rsigns
{
    static Boolean checkTwoDistinct(int first,int last)
    {
        int Fcount = (int)Math.floor(Math.log10(first)+1);
        int Scount = (int)Math.floor(Math.log10(last)+1);
        int arr[] = new int[20];
        int hash[] = new int[10];
        int i=0;
        Boolean flag=false;
        if(first ==0)
        {
            hash[0]++;
            arr[i++]=0;
        }
        while(first>0)
        {
            int dig = first%10;     
            if(hash[dig]==0)
            {
            arr[i++]=dig;
            hash[dig]++;
            
            }
            first /=10;
        }
        if(last == 0)
        {
            hash[0]++;
            arr[i++]=0;
        }
        while(last>0)
        {
            int dig = last%10;

            if(hash[dig]==0)
            {
            arr[i++]=dig;
            hash[dig]++;
            }
            last /=10;
        }
        if(i==2)
        {
            flag = true;
        }
        return flag;
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt();   
            int count = (int)Math.floor(Math.log10(n)+1);
            int end = (int)Math.floor(Math.pow(10,n))-1;
            int ans=0;
            
            for(int i=0;i<=end;i++)
            {
            int first = i;
            int last = end-first;
            if(checkTwoDistinct(first,last))
            {
                ans++;
            }
            }
            System.out.println(ans);        
        }
    }
}