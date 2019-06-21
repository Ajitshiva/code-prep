import java.util.Scanner;
class Proxy
{
    static Boolean check(char[] str,int n)
    {
        int total = n;
        int p=0;
        float avg;
        for(int i=0;i<total;i++)
        {
            
            if(str[i]=='P')
                p++;
        }
        avg = (float)p/total;

        System.out.println(avg);
        if(avg>=0.75)
        {
            return true;
        }
        return false;
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt();
            String s = sc.next();
            char []temp = s.toCharArray();
            char []str = temp;
            Boolean flag;
            int fla=0;
            int count=0;
            for(int i=0;i<s.length();i++)
            {
                flag = check(str,n);
                if(flag==true)
                {
                    fla=1;
                    break;
                }
                if(i>1 && i<n-2)
                {
                    if(temp[i]=='A')
                    {
                    if((temp[i+1] == 'P' || temp[i+2] =='P') && (temp[i-1] == 'P' || temp[i-2] == 'P') )
                    {
                        str[i] = 'P';
                        count++;
                    }
                    }
                }
            }
            if(fla == 1)
            {
            System.out.println(count);
            }
            else
            {
                System.out.println(-1);
            }

        }
    }
}
/*
1
9
PAAPPAPPP
0.6666667
0.6666667
0.6666667
0.7777778
1
*/