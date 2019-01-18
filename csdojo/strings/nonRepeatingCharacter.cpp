#include<iostream>
#include<map>

using namespace std;

char nonRepeatingCharacter(string str1){
    map<char,int> countMap;
    char element = '\0';
    for(int i=0; i<str1.length(); i++){
        if(countMap.find(str1[i])!=countMap.end())
            countMap[str1[i]] = -1;
        else
            countMap.insert(make_pair(str1[i],1));
    }
    map<char,int> :: iterator it = countMap.begin();
    for(it; it!=countMap.end(); it++){
        if(it->second == 1){
            element = it->first;
            break;
        }
    }
    return element;
}

char firstNonRepeatingCharacter(string str1){
    map<char,int> countMap;
    char element = '\0';
    for(int i=0; i<str1.length(); i++){
        if(countMap.find(str1[i])!=countMap.end())
            countMap[str1[i]] = -1;
        else
            countMap.insert(make_pair(str1[i],i));
    }
    long int min = 9999999;
    map<char,int> :: iterator it = countMap.begin();
    // for(it;it!=countMap.end();it++){
    //     cout<<it->first<<" : "<<it->second<<endl;
    // }
    //cout<<endl;
    for(it=countMap.begin(); it!=countMap.end(); it++){
        if(it->second > -1){
            //cout<<"min: "<<min<<"\t checking with:"<<it->first<<"\telement: "<<element<<"\t count: "<<it->second<<endl;
            if(min > it->second){
                element = it->first;
                min = it->second;
            }
        }
    }
    return element;
}

int main(){
    string str1 = "abcabceabcabcdabcabcfabczabc";
    char ch = nonRepeatingCharacter(str1);
    char ch1 = firstNonRepeatingCharacter(str1);
    if(ch == '\0')
        cout<<"No non repeating character exists";
    else
        cout<<"non repeating character is : "<<ch;
    cout<<endl;

    if(ch1 == '\0')
        cout<<"No non repeating character exists";
    else
        cout<<"first non repeating character is : "<<ch1;
    cout<<endl;
}
