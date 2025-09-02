#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;
int main(){
    string team;
    cin>>team;
    int n=team.length();
    int i=0;
    int cnt=0;
    while(i!=(n-6)){
        int j=0;
        while(j!=7){
            if(team[j]==team[j+1]){
                j++;
            }
        }
        i++;
        cnt+=1;
}
if(cnt>0){
    cout<<"YES";
}
else{
    cout<<"NO";
}
return 0;
}
