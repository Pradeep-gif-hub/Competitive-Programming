#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the total number of elements in the array:";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=-1 && arr[i]<=1){
            cnt++;
        }
    }
    int ne=count(arr.begin(),arr.end(),-1);
    if(ne%2==0){
        cout<<"Even number of -1s in the array."<<endl;
    }else{
        cout<<"Odd number of -1s in the array."<<endl;
    }
    cout<<"Count of elements between -1 and 1:"<<cnt<<endl;
    return 0;
}
