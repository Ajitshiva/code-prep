//https://leetcode.com/problems/to-lower-case/
class ToLower
{
    static void toLower(String s)
    {
        char str[] = s.toCharArray();
        int n = str.length;
        
        for(int i=0;i<str.length;i++)
        {
            int ascii = (int)str[i];
            if(ascii<97 && ascii >=65)
            {
                ascii +=32;
                str[i]=(char)ascii;
            }
        }
        String result = new String(str);
        System.out.println(result);
    }
    public static void main(String args[])
    {
        toLower("GGG678@#$ello");
    }
}