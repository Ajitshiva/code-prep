import java.io.InputStreamReader;
import java.io.*;
import java.util.Scanner;
class Frgtnlang
{
    public static void main(String args[]) throws IOException
    {
        Scanner sc = new Scanner(System.in);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = sc.nextInt();
        while(t-->0)
        {
            int total=sc.nextInt();
            int N = sc.nextInt();
            String[] dict = br.readLine().split(" ");
            int flag[] = new int[dict.length];
            String sentence= " ";
            for(int i=0;i<N;i++)
            {
                
                
                String word = br.readLine();
                sentence  = sentence + word +" ";
                
                if(i==N-1)
                {
                System.out.println(sentence);
                String words[] = sentence.split(" "); 
                
                for(int j=0;j<dict.length;j++)
                {
                    for(int k=1;k<words.length;k++)
                    {       
                        if(dict[j].equals(words[k]))
                        {      
                        flag[j]++;
                        }
                    }
                }
                for(int j=0;j<dict.length;j++)
                {
                    
                     if(flag[j]>=1)
                     {
                        System.out.print("YES"+" ");
                     }
                     else
                     {
                         System.out.print("NO"+" ");
                     }
                }
                System.out.println();
            }


            }
            

        }
    }
}
/*
PS C:\Users\Anonymous\code-prep> java Frgtnlang
1
3 2
qwert uiop asdf
1 qwert
  1 qwert
YES NO NO
*/