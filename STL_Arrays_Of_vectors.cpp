#include<bits/stdc++.h>

using namespace std;
void printvec(vector<int> &v){
    cout<<"SIZE : " <<v.size()<<endl;
    for(int i=0;i<v.size();i++){
cout<<v[i]<<" ";   
    }cout<<endl;
}
//      int main() {
// int N;
// cin>>N;
// vector<int> v[N];
// for(int i=0;i<N;i++){
//     int n;
//     cin>>n;
//     for(int j=0;j<n;j++){
//         int x;
//         cin>>x;
//         v[i].push_back(x);
//     }
// }
// for(int i=0;i<N;i++)
// printvec(v[i]);

// cout<<v[0][0]<<endl;// Behave as 2D vector who has same fixed no. of rows but different no. of columns
// return 0;
// }

//vectors of vectors

// #include<bits/stdc++.h>

// using namespace std;

     int main() {
         int N;
         cin>>N;
vector<vector<int>> v;
for(int i=0;i<N;i++){
    int n;
    cin>>n;
    vector<int> temp;
    for(int j=0;j<n;j++){
        int x;
        cin>>x;
        temp.push_back(x);
    }
    v.push_back(temp);
}
for(int i=0;i<v.size();i++){
    printvec(v[i]);
}
return 0;
}