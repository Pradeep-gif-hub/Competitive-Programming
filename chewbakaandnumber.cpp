#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    string ans="";
    for(int i=0;i<n;i++){
        int digit=s[i]-'0';//into the int coenversion
        if(digit>=5){
            digit=9-digit;
        }
        if(i==0 && digit==0){
            digit=s[i]-'0';//edge case for 9
        }
        ans+=(digit+'0');//back to string 
    }
    cout<<ans;
    return 0;
}
