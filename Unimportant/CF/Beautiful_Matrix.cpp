#include<iostream>
#include<vector>
using namespace std;
int main(){
 int rows = 5;
 int i = 1;
 int temp1 = 0;
 bool flag = false;
 int pos_i,pos_j;
 pos_i = pos_j = 0;
 vector<int> temp;
 int k = 0;
 while(i<=rows&&flag==false){
  for(int j = 0;j<5;j++){
   cin>>temp1;
   temp.push_back(temp1);
  }
  for(k = 0;k<5;k++){
   if(temp[k]==1){
    pos_i = i;
    pos_j = k;
   }
  }
  temp.clear();
  ++i;
 }
 int x_moves,y_moves;
 x_moves = abs(pos_i-3);
 y_moves = abs(pos_j-2);
 int sum = x_moves + y_moves;
 cout<<sum;
return 0;
}
