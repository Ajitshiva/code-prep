import java.util.Scanner;

import javax.lang.model.util.ElementScanner6;
class Dischar
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            String s =sc.next();
            int count1=0;
            for(int i=0;i<s.length();i++)
            {
                int freq[]=new int[26];
                int flag[]=new int [26];
                for(int k=0;k<s.length();k++)
                {
                    int c = (int)s.charAt(k)-97;
                    freq[c]++; 
                    flag[c]=0;
                } 
                 int count=0;
                 for(int k=0;k<s.length();k++)
                    {
                        int c = (int)s.charAt(k)-97;
                    } 
                for(int j=i;j<s.length();j++)
                {
                int c = (int)s.charAt(j)-97;              
                if(freq[c]>1 && flag[c]==0)
                {
                    freq[c]--;
                    flag[c]=1;
                    count++;
                    continue;   
                }
                else if(freq[c]==1 && flag[c]==0)
                {
                    count++;
                }
                else
                {
                    break;
                }
                
                 }
                 
            if(count>count1)
                {
                    count1=count;
                }

            }
            
            
            System.out.println(count1);
        }

    }
}
/*
PS C:\Users\Anonymous\code-prep> java Dischar
6
laptop
5
anonymous
6
*/