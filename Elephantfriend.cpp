#include <iostream>
using namespace std;
 
int main() {
    int dis;
    cin>>dis;
    int steps=0;
    int currsteps=0;
    int i=5;
 
    while(dis>0) {
        currsteps=dis/i;
        steps+=currsteps;
        dis%=i;
        i--;
    }
 
    cout <<steps;
    return 0;
}