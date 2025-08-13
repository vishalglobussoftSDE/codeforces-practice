/*
    codeforces round 1029 (div 3)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        int index = 0;
        int flag = 0;
        while(index < n){
            if(arr[index] == 1 && flag == 0){
                index = index + x;
                flag = 1;
            }
            else if(arr[index] == 0) {
                index++;
            }
            else{
               break;
            }

        }
        if(index>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}