#include<iostream>
using namespace std;

void knapsack(int val[],int wt[],int n,int cap){
  int mat[n+1][cap+1];
  for(int i = 0;i<n+1;i++)
    for(int j=0;j<cap+1;j++){
      if(i==0 || j==0)
        mat[i][j] = 0;
      else if(wt[i-1]<=j)
        mat[i][j] = max(mat[i-1][j],val[i-1]+mat[i-1][j-wt[i-1]]);
      else
        mat[i][j] = mat[i-1][j];
    }
    for(int i=0;i<n+1;i++){
      cout<<endl;
      for(int j=0;j<cap+1;j++)
        cout<<mat[i][j]<<"  ";
    }
    cout<<endl;
    cout<<"max value possible = "<<mat[n][cap] <<endl;
}

int main(){
  int val[] = { 100, 20, 60, 40};  //value of the items
  int wt[] = { 3, 2, 4, 1};        //weight of the items

  int n = 4;  //total items
  int cap = 5;  //capacity of knapsack
  knapsack(val,wt,n,cap);

}
