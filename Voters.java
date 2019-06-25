import java.util.Scanner;
import java.io.BufferedReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.io.InputStreamReader;
class Voters
{
    public static void main(String args[]) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().split(" ");
        int N1 = Integer.parseInt(input[0]);
        int N2 = Integer.parseInt(input[1]);
        int N3 = Integer.parseInt(input[2]);
        int hash[] = new int[500000];
        ArrayList<Integer> li = new ArrayList();
        for(int i =0;i<(N1+N2+N3);i++)
        {
            int x = Integer.parseInt(br.readLine().trim());
            hash[x]++;
            if(hash[x]==2)
            {
                li.add(x);
            }
        }
        Collections.sort(li);
        System.out.println(li.size());
        for(int i=0;i<li.size();i++)
        {
            System.out.println(li.get(i));
        }
            
    } 
}