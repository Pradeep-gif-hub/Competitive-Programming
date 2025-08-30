        #include<iostream>
        #include<vector>
        #include<algorithm>
        using namespace std;
        int main(){
                int n;
                cin>>n;
                int guess1,guess2,guess3;
                int ans=0;
                for(int i=0;i<n;i++){
                        cin>>guess1>>guess2>>guess3;
                        if(guess1+guess2+guess3>=2){
                                ans++;
                        }
                }
                cout<<ans;
                return 0;
        }