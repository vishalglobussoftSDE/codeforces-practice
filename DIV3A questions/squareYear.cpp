/*
Codeforces Round 1027 (Div. 3)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int num = stoi(str);
        int sq = sqrt(num);
        if(sq * sq == num){
            if(sq%2==0){
                cout<<sq/2 <<" "<< sq/2 <<endl;
            }
            else{
                cout<<sq/2 <<" " << sq/2+1 <<endl;
            }
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}