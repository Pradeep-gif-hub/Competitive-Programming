#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
        string s;
        cin>>s;
        char ch=s[0];
        if(!isupper(ch)){
                ch=toupper(ch);
        }
        s[0]=ch;
        cout<<s;
        return 0;
}