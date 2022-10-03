/*
Given N strings ,print Unique strings in lexicographical order with their frequency
N<=10^5 
| S |<=100 

*/


#include<bits/stdc++.h>

using namespace std;

     int main() {

//         map<string,int> m;
//         int n;
//         cin>>n;
//         for(int i=0;i<n;i++){
// string s;
// cin>>s;
// m[s]++;
//         }
// for(auto it:m){
//     cout<<it.first<<" "<<it.second<<endl;
// }
      map<int ,int> m;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){

cin>>a[i];
m[a[i]]++;
        }
for(auto it:m){
    cout<<it.first<<" "<<it.second<<endl;
}
return 0;
}