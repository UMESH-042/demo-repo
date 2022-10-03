// Monk and Magical candy bags

#include<bits/stdc++.h>

using namespace std;

     int main() {
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
multiset<long long> bags;
for(int i=0;i<n;i++){
    long long candy_cnt;
    cin>>candy_cnt;
    bags.insert(candy_cnt);
}
long long total_candies=0;
for(int i=0;i<k;i++){
        auto last_it=(--bags.end());
        long long    candy_cnt=*last_it;
        total_candies+=candy_cnt;
        bags.erase(last_it);
        bags.insert(candy_cnt/2);

}
cout<<total_candies<<endl;
}
return 0;
}




// Casual Method
// #include<bits/stdc++.h>

// using namespace std;

//      int main() {
// int t;
// cin>>t;
// while(t--){
//     int n,k;
//     cin>>n>>k;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     sort(a,a+n);
// int sum=0;
//     for(int j=0;j<k;j++){
//     sum=sum+a[n-1];
//     a[n-1]=a[n-1]/2;
//     sort(a,a+n);

//     }
//     cout<<sum<<endl;
// }
// return 0;
// }