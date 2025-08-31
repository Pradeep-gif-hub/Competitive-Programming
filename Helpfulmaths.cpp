#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string exp;cin>>exp;
    int n=exp.length();
    vector<int> arr((n+1)/2);
    string ans;
    int k=0;
    for(int i=0;i<n;i+=2) arr[k++]=exp[i]-'0';
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        ans+=to_string(arr[i]);
        ans+="+";
    }
    ans.pop_back();
    cout<<ans;
    return 0;
}
