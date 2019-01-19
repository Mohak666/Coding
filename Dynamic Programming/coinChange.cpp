#include<iostream>

using namespace std;

void coinChange(int change, int s[],int m){
  //change => change to be created
  //m => number of coins,s[] => list of coin values
  int mat[change+1][m];
  // if change = 0, 1 soultion possible using each coin
  for(int i=0;i<m;i++)
    mat[0][i] = 1;
  for(int i=1;i<change+1;i++)
    for(int j=0;j<m;j++){
      int x,y;

      //number of changes possible by including coin j with value s[j]
      if(i-s[j]>=0)//if coin s[j] can be included to make a change of value i
        x = mat[i-s[j]][j];
      else        // coin cannot be include since it'svalue exceeds i
        x = 0;

     //number of coin changes possible by excluding coin with value s[j]
     if(j>=1)//check if it is not the 1st coin (0th coin)
        y = mat[i][j-1];
     else //it is the first coin,therefore, excluding it
        y = 0;// 0 changes with value i can be formed

    mat[i][j] = x+y;//total changes possible for value i using j coins(in order)
    }
    for(int i=0;i<change+1;i++){
      cout<<endl;for(int j=0;j<m;j++)
                    cout<<" "<<mat[i][j];
    }
    cout<<endl<<"total changes possible :"<<mat[change][m-1];
}

int main(){
  int n = 3;
  int s[] = {1,3,2};
  int change = 4;
  coinChange(change,s,n);
}
