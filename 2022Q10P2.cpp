#include<bits/stdc++.h>



using namespace std;



int cycle = 0;

int x = 1;

long long int sum = 0;

int posNow = 0;

string ans = "";



void draw(){

  if(posNow == x || posNow == x - 1 || posNow == x + 1 ){

    ans +=  "#";

  } else {

    ans += ".";

  }

  posNow++;

}



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

      draw();

      if(cycle % 40 == 0 && cycle <= 240){

        ans += '\n';

        posNow = 0;

      }

      cycle++;

      draw();

      if(cycle % 40 == 0 && cycle <= 240){

        ans += '\n';

        posNow = 0;

      }

      x += a;

    } else {

      cycle++;

      draw();

      if(cycle % 40 == 0 && cycle <= 240){

        ans += '\n';

        posNow = 0;

      }

    }



  }

  cout << ans;

}

