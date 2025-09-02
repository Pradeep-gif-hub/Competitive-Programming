#include<iostream>
#include<string>
using namespace std;
int main(){ 
    int total,time;
    cin>>total>>time;
    string format;
    cin>>format;
    while(time--){
        for(int i=0;i<total-1;i++){
            if(format[i]=='B' && format[i+1]=='G'){
                swap(format[i],format[i+1]);
                i++; 
            }
        }
    }
    cout<<format;
    return 0;
}
