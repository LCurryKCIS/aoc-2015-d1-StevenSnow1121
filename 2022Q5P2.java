import java.util.*;


class Main {

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        String[] input = new String[8];

        ArrayList<Stack<Character>> storage  = new ArrayList<Stack<Character>>();

        for(int i = 0; i < 8; i++){

            input[i] = s.nextLine();

        }

        int p = 0;

        for(int i = 1; i < input[0].length(); i+= 4){

            Stack<Character> line = new Stack<Character>();

            for(int j = 7; j >= 0; j--){

                if(input[j].charAt(i) != ' ')

                    line.push(input[j].charAt(i));



            }

            storage.add(line);

            p++;

        }

        for(int i = 0; i < storage.size(); i++){

            System.out.println(storage.get(i).toString());

        }

        while(true){

            String action = s.nextLine();

            if(action.equals("exit")){

                break;

            }

            int num, from, to;

            if(action.length() == 18){

                num = Integer.parseInt(action.substring(5,6));

                from = Integer.parseInt(action.substring(12,13)) - 1;

                to = Integer.parseInt(action.substring(17,18)) - 1;

            } else {

                num = Integer.parseInt(action.substring(5,7));

                from = Integer.parseInt(action.substring(13,14)) - 1;

                to = Integer.parseInt(action.substring(18,19)) - 1;

            }

            Stack<Character> tem = new Stack<Character>();

            for(int i = 0; i < num;i++){

                char temp = storage.get(from).pop();

                tem.push(temp);

            }

            for(int i = 0; i < num;i++){

                char temp = tem.pop();

                storage.get(to).push(temp);

            }

            System.out.println(num + " " + from + " " + to);

        }

        for(int i = 0; i < storage.size(); i++){

            System.out.print(storage.get(i).peek());

        }

    }



}

