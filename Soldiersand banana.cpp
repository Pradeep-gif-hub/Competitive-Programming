#include<iostream>
using namespace std;
int main(){
        int cost,pocket,quantity;
        cin>>cost>>pocket>>quantity;
        int totalcost=0;
        int i=1;
        int tempcost=0;
        while(quantity>=i){
                tempcost=cost*i;
                totalcost+=tempcost;
                i+=1;
        }
        int ans=totalcost-pocket;
        if (ans<0)ans=0;
        cout<<ans;
        return 0;
}