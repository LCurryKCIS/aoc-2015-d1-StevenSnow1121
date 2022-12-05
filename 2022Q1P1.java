import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        int max = 0;
        int now = 0;
        Scanner s = new Scanner(System.in);
        while(true){
            String a = s.nextLine();
            if(a.equals("-1")){
                break;
            }

            if(a.equals("")){
                if(now > max){
                    max = now;
                }
                now = 0;
                continue;

            }
            int n = Integer.parseInt(a);
            now += n;
        }
        System.out.println(max);
    }
}

