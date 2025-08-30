#include<iostream>
using namespace std;
int main() {
    int numofstop;
    cin >> numofstop;
    int cap=0,maxCap=0;
    for(int i=0;i<numofstop;i++) {
        int exit, enter;
        cin >> exit >> enter;
        cap-=exit;
        cap+=enter;
        maxCap=max(maxCap, cap);
    }
    cout << maxCap;
    return 0;
}
