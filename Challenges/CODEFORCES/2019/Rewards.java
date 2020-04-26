import java.io.*;
public class Rewards
{
    public static void main(String args[]) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String inputs[] = br.readLine().split(" ");
        if((Integer.parseInt(inputs[1]) >= Integer.parseInt(inputs[0]) && Integer.parseInt(inputs[2]) >=Integer.parseInt(inputs[0])))
            System.out.println("Yes");
        else
            System.out.println("No");
        
    }
}