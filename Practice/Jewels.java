//https://leetcode.com/problems/jewels-and-stones/
import java.util.Scanner;
class Jewels
{
    static int findJewels(String Jewel,String Stones)
    {
        int jew=Jewel.length();
        int ston = Stones.length();
        char jew1[] = Jewel.toCharArray();
        char ston1[] = Stones.toCharArray();
        int count=0;
        for(int i=0;i<ston;i++)
        {
            int flag=0;
            for(int j=0;j<jew;j++)
            {
                if(jew1[j]==ston1[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                count++;
            }

        }

        return count;
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        
        int result = findJewels("z", "ZZ");
        System.out.println(result);
    }
}