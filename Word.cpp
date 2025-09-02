#include<iostream>
#include<cctype>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string word;
    cin>>word;
    int uppercase=0,lowercase=0;
    for(char ch:word){
        if(isupper(ch)) uppercase++;
        else lowercase++;
    }
    string ans=word;
    (lowercase>=uppercase)
        ? transform(word.begin(),word.end(),ans.begin(),::tolower)
        : transform(word.begin(),word.end(),ans.begin(),::toupper);
    cout<<ans;
    return 0;
}
