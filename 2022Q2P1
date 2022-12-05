import java.util.*;



class Main {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int total = 0;

        while(true){

            String in = input.nextLine();

            if(in.equals("exit")){

                break;

            }

            char oppo = in.charAt(0);

            char now = in.charAt(2);

            if(now == 'X'){

                total++;

            } else if(now == 'Y'){

                total+= 2;

            } else if(now == 'Z'){

                total += 3;

            }



            //draw

            if((oppo == 'A' && now == 'X') || (oppo == 'B' && now == 'Y') || (oppo == 'C' && now == 'Z')){

                total += 3;

            } else if(oppo == 'A' && now == 'Y'){

                total += 6;//win

            } else if(oppo == 'B' && now == 'Z'){

                total += 6;

            } else if(oppo == 'C' && now == 'X'){

                total += 6;

            }

        }

        System.out.println(total);

    }



}

