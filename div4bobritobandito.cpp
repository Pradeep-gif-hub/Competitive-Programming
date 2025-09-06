#include <iostream>
using namespace std;
void solve(){
    int n,m,l,r;
    cin>>n>>m>>l>>r;
    int diff=n-m;
    if(l<0) l=-l;
    if(l>=diff){
        l-=diff;
        diff=0;
    }else{
        diff-=l;
        l=0;
    }
    cout<<-l<<" "<<r-diff<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}