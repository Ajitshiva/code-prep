import java.util.Scanner;
class Rotation
{
    public static void main(String args[])
    {
        Scanner sc  = new Scanner(System.in);
        int n = sc.nextInt();
        String S = new String(sc.next());
        char s[] = S.toCharArray();
        String T = new String(sc.next());
        char t[] = T.toCharArray();
        int count=0;
        char temp;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!=t[i])
            {
                for(int j=0;j<n;j++)
                {
                    if(s[j]==t[i])
                    {
                        temp = s[j];
                        s[i]=temp;
                    }
                }
                
                count++;
            }
            else
            {
                continue;
            }
            
        }
        System.out.println(count);
    } 
}