#include<bits/stdc++.h>

using namespace std;

int main(){

  int total = 0;

  while(true){

    int l1, r1, l2, r2;

    char m;

    cin >> l1 >> m >> r1;

    if(m == 'd'){

      break;

    }

    cin >> m;

    cin >> l2 >> m >> r2;

    if((l2 <= r1 && l2 >= l1) || (l1 <= r2 && l1 >= l2)){

      total++;

    }

  }

  cout << total;

}

