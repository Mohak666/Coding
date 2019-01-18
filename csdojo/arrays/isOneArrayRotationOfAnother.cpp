#include<iostream>

using namespace std;

bool isOneArrayRoataionOfAnother(int *arr1, int *arr2,int size1,int size2){
    //cout<<size1<<"  "<<size2;

    if(size1 != size2 )
        return false;

    if(size1 == 0 && size2 == 0)
        return true;

    bool isPossible = false, isIt = true;
    int first = arr1[0], j;
    for(j = 0;j<size1;j++)
        if(arr2[j] == first){
            isPossible = true;
            break;
        }
    //cout<<j<<endl;
    if(isPossible){
        int i = 0;
        for(i,j;i<size1;i++,j=(j+1)%(size1)){
            //cout<<"i: "<<i<<"    j:"<<j<<endl;
            if(arr1[i]!=arr2[j])
                return false;
            }
    }
    else
        return false;
    return true;
}

int main(){
    int arr1[] = {1,2,3,4,5,6,7,8};
    int arr2[] = {5,6,7,8,1,2,3,4};
    // int arr1[] = {};
    // int arr2[] = {};
    bool isIt = isOneArrayRoataionOfAnother(arr1,arr2,sizeof(arr1)/sizeof(int),sizeof(arr2)/sizeof(int));
    if(isIt)
        cout<<"yes";
    else
        cout<<"no";
    cout<<endl;
}
