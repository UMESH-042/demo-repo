// /*
// Given an array a of N Integers. Given Q Queries
// and in each query given a number X , print count of that number in array.
// Constraints :
// 1<= N <= 10^5
// 1<= a[i] <= 10^7
// 1<= Q <= 10^5

// */
// #include<bits/stdc++.h>

// using namespace std;

//      int main() {
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++){
//     cin>>a[i];
// } 

// int q;
// cin>>q;
// while(q--){
//     int x;
//     cin>>x;
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(a[i]==x){
//             count++;
//         }
//     }
//     cout<<count<<endl;
// }
// // Time Complexity = O(N) + O(Q*N) = O(N^2) = 10^10 (And it will Give TLE)
// return 0;
// }
//More Optimized Code using Pre Computation Technique
#include<iostream>

using namespace std;
const int  N =1e7+10;
int hsh[N];

     int main() {
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

// New Time Complexity = O(N) + O(Q) = 2*10^5 = 10^5        
return 0;
}