#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    string year;
    cin>>year;
    int numyear=stoi(year);
    for(int i=numyear+1;i<=9012;i++){//9012 is considered for the edge case for 9012...
        string j=to_string(i);
        set<char> s(j.begin(),j.end());
        if(s.size()==j.size()){
            cout<<j;
            return 0;
        }
    }
    return 0;
}
