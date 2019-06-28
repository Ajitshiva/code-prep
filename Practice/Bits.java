import java.util.Scanner;

import javax.lang.model.util.ElementScanner6;
class Bits
{
    public static void main(String args[])
    {
        Scanner sc  = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        int max=0;
        
        for(int i=0;i<n;i++)
        {
            arr[i]= sc.nextInt();
        }
        for(int i=0;i<n;i++)
        {
            int count=0;
            int flag=0;
            int flag1=0;
            int flag2=1;
            if(arr[i]==1 )
            {
                count ++;
                
            }
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]==1 && arr[j-1]==1)
                {                       
                     count++;
                }
                else if(arr[j]==1 && flag==0)
                {
                    flag=1;
                    count++;
                }
                else if(arr[j]==0 && flag1==0)
                {
                    flag1=1;
                    
                    count++;
                    if(count==1)
                    {
                        flag3=1;
                    }
                    
                }
                else
                {
                    break;
                }
                
            
            }
            
            
            max = max>count?max:count;
            
                

            

            
        }
        
        
        if(flag3==1)
        {
            System.out.println(0);
        }
        else
        {
        System.out.println(max);
        }
    }
}