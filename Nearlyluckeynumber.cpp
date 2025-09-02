#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
    string number;
    cin>>number;
    int n=number.length();
    int cnt=0;
    for(int i=0;i<n;i++){
        if(number[i]=='4' || number[i]=='7'){
            cnt+=1;
        }
    }
    if(cnt==7 || cnt==4){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}

