#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int caseInsensitiveCompare(const string&a,const string&b){
    for(int i=0;i<a.size();i++){
        char ca=tolower(a[i]);
        char cb=tolower(b[i]);
        if(ca>cb)return 1;
        if(ca<cb)return -1;
    }
    return 0;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int result=caseInsensitiveCompare(s1,s2);
    cout<<result<<endl;
    return 0;
}
    