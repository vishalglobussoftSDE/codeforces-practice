/* codeforce div 3 round 1037 questions a
   solve in 19.9.55
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int smallestNo = INT_MAX;
        while(n!=0){
            int rem = n % 10;
            // cout<<"rem :" << rem <<" " <<endl;
            if(rem < smallestNo){
                smallestNo = rem;
            }
            // smallestNo = max(smallestNo , rem);
            n/=10;
        }
        cout<<smallestNo<<endl;
    }
    return 0;
}