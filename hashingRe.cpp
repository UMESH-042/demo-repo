// counting frequency of the element in the array
// pre-computation Technique
#include<bits/stdc++.h>
#define c(o) cout<<x<<endl
#define loop(i,m,n) for(ll i=m;i<n;i++)
#define ll long long
#define nl cout<<endl
#define countDig(n) floor(log10(n))+1
using namespace std;

const int N=1e7+10;
int hsh[N];

     int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    hsh[a[i]]++;
}

int q;
cin>>q;
while(q--){

    int x;
    cin>>x;
    cout<<hsh[x]<<endl;
}

return 0;
}