#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
string findgender(string &s) {
    vector<char> ans;  
    for(int i=0;i<s.length();i++){
        auto it=find(ans.begin(),ans.end(),s[i]);
        if(it==ans.end()){   
            ans.push_back(s[i]);
        }
    }
    if(ans.size()%2== 0){
        return "CHAT WITH HER!";
    }
    else{
        return "IGNORE HIM!";
    }
}
int main() {
    string s;
    cin >> s;
    cout << findgender(s);
    return 0;
}
