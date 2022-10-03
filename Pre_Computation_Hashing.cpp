#include<bits/stdc++.h>

using namespace std;

/*
constraints :
1 <= T <= 10^5
1 <= N <= 10^5
*/
const int M= 1e9 + 7;
const int N=1e5 +10;
long long int fact[N];
     int main() {
         fact[0] = fact[1] = 1;
         for(int i=2;i<N;i++){
             fact[i] =fact[i-1] * i;

         }
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    // long long fact =1;
     
    cout<<fact[n]<<endl;

}
return 0;
     }
     //Time Complexity = O(T*N) = 10^10  OLD
     //Time Complexity = O(T) + O(N) = 10^5 + 10^5 = 10^5  NEW
