// prefix sum using pre-computation Techniques
//for prefix sum calculating 
#include<bits/stdc++.h>
#define c(o) cout<<x<<endl
#define loop(i,m,n) for(ll i=m;i<n;i++)
#define ll long long
#define nl cout<<endl
#define countDig(n) floor(log10(n))+1
const int N=1e7+10;
long long prefixsum[N];
using namespace std;

     int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
int a[n];
for(int i=1;i<=n;i++){
    cin>>a[i];
}
int sum=0;
for(int i=1;i<=n;i++){
    sum+=a[i];
    prefixsum[i]=sum;
}

// for(int i=0;i<n;i++){
//     cout<<prefixsum[i]<<endl;
// }
int q;
cin>>q;
while(q--){
    int l,r;
    cin>>l>>r;
    cout<<prefixsum[r]-prefixsum[l]+a[l]<<endl;

}
// Time complexity= O(N) + O(N) + O(Q) == O(N)

return 0;
}