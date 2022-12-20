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

            char round = in.charAt(2); //now

            char now = 'd';

            if(round == 'X'){

                if(oppo == 'A'){

                    now = 'Z';

                } else if(oppo == 'B'){

                    now = 'X';

                } else if(oppo == 'C'){

                    now = 'Y';

                }

            } else if (round == 'Y'){

                if(oppo == 'A'){

                    now = 'X';

                } else if(oppo == 'B'){

                    now = 'Y';

                } else if(oppo == 'C'){

                    now = 'Z';

                }

            } else {

                if(oppo == 'A'){

                    now = 'Y';

                } else if(oppo == 'B'){

                    now = 'Z';

                } else if(oppo == 'C'){

                    now = 'X';

                }

            }

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

