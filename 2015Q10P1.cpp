#include<bits/stdc++.h>



using namespace std;



int cycle = 0;

int x = 1;

long long int sum = 0;

int posNow = 0;





int main(){

  string in;

  while(true){

    cin >> in;

    if(in == "exit"){

      break;

    }

    if(in == "addx"){

      int a;

      cin >> a;

      cycle++;

      if(cycle % 40 == 20 && cycle <= 220){

        sum += x * cycle;

        cout << x * cycle << endl;

      }

      cycle++;

      if(cycle % 40 == 20 && cycle <= 220){

        sum += x * cycle;

        cout << x * cycle << endl;

      }

      x += a;

    } else {

      cycle++;

      if(cycle % 40 == 20 && cycle <=220){

        sum += x * cycle;

        cout << x * cycle << endl;

      }

    }



  }

  cout << sum;

}

