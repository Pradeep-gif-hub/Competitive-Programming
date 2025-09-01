#include<iostream>
#include<string>
using namespace std;
int stone(string &s){
    int cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){   
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int num;
    cin >> num;   
    string s;
    cin >> s;    
    cout << stone(s);
    return 0;
}