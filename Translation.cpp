#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        int n1=s1.length();
        int n2=s2.length();
        if(n1==n2){
                reverse(s1.begin(),s1.end());
                cout<<(s1==s2?"YES":"NO");
        }
        else{
                cout<<"NO";
        }
        return 0;
        
}