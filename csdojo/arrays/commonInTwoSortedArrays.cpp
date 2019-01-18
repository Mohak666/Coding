#include<iostream>
#include<vector>
using namespace std;

vector<int> commonInTwoSortedArrays(int *arr1, int *arr2,int size1,int size2){
    vector<int> commonArray;
    int i =0,j=0;
    while(i<size1 && j<size2){
        if(arr1[i] == arr2[j]){
            commonArray.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]>arr2[j])
            j++;
        else
            i++;
    }
    return commonArray;
}

int main(){
    int arr1[] = {1,1,1,1,1,1,1,1,1,1,1,1,3,4,5,7,9,10,11};
    int arr2[] = {1,2,4,5,6,8,10,12};
    vector<int> commonArray = commonInTwoSortedArrays(arr1,arr2,sizeof(arr1)/sizeof(int),sizeof(arr2)/sizeof(int));
    vector<int> :: iterator it;
    for(it = commonArray.begin();it!= commonArray.end();it++)
        cout<<" "<<*it;
    cout<<endl;
}
