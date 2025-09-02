#include <iostream>
using namespace std;
int main() {
    int lam,bob;
    cin>>lam>>bob;
    int years=0;
    while(lam<=bob) {
        lam*=3;
        bob*=2;
        years++;
    }
    cout<<years;
    return 0;
}