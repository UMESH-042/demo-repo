#include<bits/stdc++.h>

using namespace std;
void printVec(vector<string> &v){
    cout<<"size :" <<v.size()<<endl;//  v.size() --> O(1)
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    // v.push_back(2);
}

     int main() {
int a[10];
    // vector<int> v;
    vector<double> v1;
//     vector<pair<int,int>> v_1;
//     // int n;
//     // cin>>n;
//     // for(int i=0;i<n;i++){
//     //     int x;
//     //     cin>>x;
//     //     v.push_back(x); // O(1)

//     // }
//     // vector<int> v(10);
//     // vector<int> v(10,3);
// vector<int> v;
//     v.push_back(5);

//     v.push_back(7);
//     printVec(v);
//     v.pop_back();
//     printVec(v);

// vector<int> &v2=v; // O(n)
// v2.push_back(9);
// printVec(v2);

vector<string> v__1;
int n;
cin>>n;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
v__1.push_back(s);

}
printVec(v__1);


return 0;
}