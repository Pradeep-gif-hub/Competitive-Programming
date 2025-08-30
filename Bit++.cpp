#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int x=0;
    for(int i=0;i<num;i++){
        string y;
        cin>>y;
        if(y=="++x"||y=="x++"){
            x++;
        }
        else if(y=="--x"||y=="x--")
        x--;
    }
    cout<<x;
    return 0;
}
