#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> opinion(n);
    for(int i=0;i<n;i++){
        cin>>opinion[i];
    }
    for(int x:opinion){
        if(x==1){
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
    return 0;
}
