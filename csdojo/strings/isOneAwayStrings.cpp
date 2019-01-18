#include<iostream>
#include<math.h>

using namespace std;

int min(int l1,int l2){
    return (l1<l2 ?  l1: l2 );
}
int computeDifferences(string small,string big,int l1,int l2){
    int differences = 0;
    int i = 0, j = 0;
    while(i<l1 && j<l2){
        if(small[i]==big[j]){
            i++;
            j++;
        }
        else{
            j++;
            differences++;
        }
    }
    return differences;
}
bool isOneAwayStrings(string str1, string str2){
    int len1 = str1.length();
    int len2 = str2.length();
    int differences = 0;
    if(fabs( len1 - len2) > 1)
        return false;
    else if(len1 == len2){
        for(int i = 0,j = 0; i < len1; i++,j++){
            if(str1[i] != str2[j])
                differences++;
        }
    }
    else{
        int minLen = min(len1,len2);
        if(minLen == len1)
            differences = computeDifferences(str1,str2,len1,len2);
        else
            differences = computeDifferences(str2,str1,len2,len1);
    }
    if(differences > 1)
        return false;
    else
        return true;
}

int main(){
    string str1 = "abcde";
    string str2 = "bcde";
    if(isOneAwayStrings(str1,str2))
        cout<<"they are";
    else
        cout<<"they are not";
    cout<<endl;
}
