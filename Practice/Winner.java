import java.util.Scanner;
import java.math.BigInteger;
import java.io.*;
class Winner 
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(br.readLine());
        
        while(t-->0)
        {
            BigInteger N = new BigInteger(sc.next());
            BigInteger K = new BigInteger(sc.next());
            BigInteger one = new BigInteger("1");
            BigInteger zero = new BigInteger("0");
            int winner=0;
            
            while(N.compareTo(zero)>0)
            {
                if(K.compareTo(N)<0)
                {
                    N = N.subtract(K);
                    
                    winner++;
                    System.out.println("If statement"+N+"winner"+winner);
                }
                else
                {
                    BigInteger temp = K;  
                while(temp.compareTo(N)<0)
                {
                    temp.subtract(one);
                }
                N = N.subtract(temp);
                
                winner++;
                System.out.println("ELse statement"+N+"winner"+winner);
            }

            }
            
            if(winner%2!=0)
            {
                System.out.println("Arpa");
            }
            else
            {
                System.out.println("Dishant");
            }
        }

    }
}