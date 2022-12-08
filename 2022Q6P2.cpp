#include<bits/stdc++.h>

using namespace std;

  string s;

int find(){

  for(int i = 0; i < s.length() - 13; i++){

    vector<char> list;

    for(int j = i; j < i + 14; j++){

      list.push_back(s[j]);

    }

    bool flag = false;

    while(!list.empty()){

      char findN = list[0];

      list.erase(list.begin());

      if(find(list.begin(), list.end(), findN) != list.end()){

        flag = true;

        break;

      }

    }

    if(!flag){

      return i + 14;

    }

  }

}



int main(){

  cin >> s;

  cout << find();

}

