#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore(); 
    while(n--) {
        string s;
        getline(cin, s);
        cout << (char)(s[0]);
        for (int i=1;i<s.size();i++) {
            if (s[i-1]== ' ' && s[i]!= ' ') {
                cout << (char)(s[i]);
            }
        }
        cout << endl;
    }
    return 0;
}