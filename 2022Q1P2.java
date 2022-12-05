import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        ArrayList<Integer> list = new ArrayList<>();
        int now = 0;
        Scanner s = new Scanner(System.in);
        while(true){
            String a = s.nextLine();
            if(a.equals("-1")){
                break;
            }
            if(a.equals("")){
                list.add(now);
                now = 0;
                continue;
            }
            int n = Integer.parseInt(a);
            now += n;
        }
        list.sort(Comparator.reverseOrder());
        System.out.println(list.get(0) + list.get(1) + list.get(2) );
    }
}
