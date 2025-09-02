#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        int number;
        cin>>number;
        string doms;
        int cnt=0;
        for(int i=0;i<number;i++){
                for(int i=0;i<2;i++){
                cin>>doms[i];
                }
        }
        for(int i=0;i<doms.length();i++){
            if(doms[i+i]-doms[i]>=2){
                cnt+=1;
            }
        }
        cout<<cnt;
        return 0;
}