#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
        int games;
        cin>>games;
        string result;
        cin>>result;
        int n=result.length();
        int A=0;
        int D=0;
        for(int i=0;i<n;i++){
                if(result[i]=='A')A+=1;
                else D+=1;
        }
        if(A>D){
                cout<<"Anton";
        }
        else if(A<D){
                cout<<"Danik";
        }
        else{
                cout<<"Friendship";
        }
        return 0;
}