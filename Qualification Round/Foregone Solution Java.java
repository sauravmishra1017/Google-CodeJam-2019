import java.util.*;
import java.lang.*;

class Solution
{
    static boolean check_four(int n)
    {
        while(n>0)
        {
            if(n%10==4)
                return true;
            n/=10;
        }
        return false;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int c=0;c<t;c++)
        {
            System.out.print("Case #"+(c+1)+": ");
            int n=sc.nextInt();
            for(int i=n/2;i>=0;i++)
            {
                if(!check_four(i) && !(check_four(n-i)))
                {
                    System.out.println(i+" "+(n-i));
                    break;
                }
                else
                    continue;
            }
        }
    }
}