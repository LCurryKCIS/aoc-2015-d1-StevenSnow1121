#include<bits/stdc++.h>



using namespace std;



int total = 0;



int main(){

  while(true){

    vector<char> visited;

    string s1,s2,s3;

    cin >> s1 >> s2 >> s3;

    if(s1 == "exit"){

      break;

    }

    for(int i = 0; i < s1.length(); i++){

      for(int j = 0; j < s2.length(); j++){

        for(int k = 0; k < s3.length(); k++){

          if(s1[i] == s2[j] && s1[i] == s3[k] && std::find(visited.begin(), visited.end(), s1[i]) == visited.end()){

            if(s1[i] >= 97){

              total += s1[i] - 96;

            } else {

              total += s1[i] - 38;

            }

            visited.push_back(s1[i]);

          }

        }



      }

    }

  }



  cout << total;

}

