#include<bits/stdc++.h>

using namespace std;

int total = 0;


int main(){
  while(true){
    vector<char> visited;
    string in;
    cin >> in;
    if(in == "exit"){
      break;
    }
    string f = in.substr(0,in.length() / 2);
    string s = in.substr(in.length() / 2, in.length());
    int c = 0;
    for(int i = 0; i < f.length(); i++){
      for(int j = 0; j < s.length(); j++){
        if(f[i] == s[j] && std::find(visited.begin(), visited.end(), f[i]) == visited.end()){
          if(f[i] >= 97){
            total += f[i] - 96;
          } else {
            total += f[i] - 38;
          }
          visited.push_back(f[i]);
        }
        
      }
    }
    
  }
  cout << total;
}

