#include<iostream>
#include<map>
using namespace std;

int mostFrequentInArray(int *arr,int size){
    map<int,int> countmap;
    int max = 0;
    int element;
    for(int i = 0;i<size;i++){
        if(countmap.find(arr[i])!=countmap.end()){
            countmap[arr[i]]+=1;
            if(countmap[arr[i]]>max){
                max = countmap[arr[i]];
                element = arr[i];
            }
        }
        else
            countmap.insert(make_pair(arr[i],1));
    }
    map<int,int>::iterator it = countmap.begin();
    for(it;it!=countmap.end();it++)
        cout<<it->first<<" : "<<it->second<<endl;

    return element;

}


int main(){
    int arr[] = {1,2,5,3,7,1,2,7,9,0,1};
    int element = mostFrequentInArray(arr,sizeof(arr)/sizeof(int));
    cout<<"most frequent element is: "<<element<<endl;
}
