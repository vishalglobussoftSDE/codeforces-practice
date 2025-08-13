/*
codeforces round 1032 (div-3)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int arr[n];
        int maxi = 0;
        int mini = INT_MAX;
        for(int i =0;i<n;i++){
            cin>>arr[i];
            maxi = max(maxi, arr[i]);
            mini = min(mini , arr[i]);
        }

        if(s >= mini && s <= maxi){
            cout<<maxi - mini + min(s- mini , maxi - s)<<endl;
        }
        else if(s < mini){
            cout<<maxi-s<<endl;
        }
        else{
            cout<<s-mini<<endl;
        }
    }
    return 0;
}