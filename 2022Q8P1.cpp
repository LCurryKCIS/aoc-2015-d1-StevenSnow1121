#include<bits/stdc++.h>



using namespace std;



vector<vector<int>> trees;

int total = 0;



int main(){

  while(true){

    string in;

    cin >> in;

    if(in == "exit"){

      break;

    }

    vector<int> temp;

    for(int i = 0; i < in.length();i++){

      temp.push_back(stoi(in.substr(i,1)));

    }

    trees.push_back(temp);

  }

  for(int i = 1; i < trees.size() - 1;i++){

    for(int j = 1; j < trees[i].size() - 1; j++){

      int isV = false;

      //point trees[i][j];

      //left

      int c = 0;

      for(int k = 0; k < i;k++){

        if(trees[k][j] < trees[i][j]){

          c++;

        }

      }

      if(c == i){

        isV = true;

      }

      //right

      c = 0;

      for(int k = i+1; k < trees[i].size();k++){

        if(trees[k][j] < trees[i][j]){

          c++;

        }

      }

      if(c == trees[i].size() - (i+1)){

        isV = true;

      }

      //top

      c = 0;

      for(int k = 0; k < j;k++){

        if(trees[i][k] < trees[i][j]){

          c++;

        }

      }

      if(c == j){

        isV = true;

      }

      //bottom

      c = 0;

      for(int k = j + 1; k < trees.size();k++){

        if(trees[i][k] < trees[i][j]){

          c++;

        }

      }

      if(c == trees.size() - (j+1)){

        isV = true;

      }



      if(isV){

        total++;

      }

    }

  }

  total += 2 * (trees.size() - 2) + 2 * trees[0].size();

  cout << total;

}

