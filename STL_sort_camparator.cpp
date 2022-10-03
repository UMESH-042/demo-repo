#include<bits/stdc++.h>

using namespace std;

bool  should_i_swap(int a,int b){
    if(a>b) return true;
     return false;
}
     int main() {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

// sort(a,a+n);
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(should_i_swap(a[i],a[j])){
            swap(a[i],a[j]);
        }
    }
}
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}cout<<endl;

// vector<int> v(n);
// for(int i=0;i<n;i++){
//     cin>>v[i];
// }

// sort(v.begin(),v.end());

// for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
// }cout<<endl;

return 0;
}