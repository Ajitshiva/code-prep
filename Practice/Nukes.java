import java.io.*;
class Nukes
{
    public static void main(String args[]) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().split(" ");
        long a =Long.parseLong(input[0]);
        int n = Integer.parseInt(input[1]);
        int k = Integer.parseInt(input[2]);
        int chamber[] = new int[k];
        for(int i=0;i<a;i++)
        {
            int start=0;
            chamber[start]++;
            while(chamber[start]>n && start<k)
            {
                chamber[start]--;
                chamber[start]--;
                if(start==k-1)
                {

                }
                else
                {
                chamber[start+1]++;
                }
                start++;
                
            }
        }
        for(int i=0;i<chamber.length;i++)
        {
            System.out.print(chamber[i]+" ");
        }
    }
}
/*

PS C:\Users\Anonymous\code-prep> java Nukes
4 1 4
0 0 1 0
*/