#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=5,m=5;
    vector<vector<int>> arr(m, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==1){
                cnt+=abs(i-2) + abs(j-2);
 
 
            }
        }
    }
    cout<<cnt;
    return 0;
 
 
}
