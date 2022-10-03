// #include<bits/stdc++.h>

// using namespace std;
// // next greater element
// // My code :-
//      int main() {

// int n;
// cin>>n;
// vector<int> v(n);
// for(int i=0;i<n;i++){
//     cin>>v[i];
// }

// stack<int> st;
// st.push(v[0]);
// vector<int> v1;
// for(int i=1;i<n;i++){
//     if(v[i]>v[i-1] && !st.empty()){
//         st.pop();
//         st.push(v[i]);
//         v1.push_back(v[i]);
//     }else{

//     }
// }

// for(auto k:v1){
//     cout<<k<<" ";
// }cout<<endl;



// return 0;
// }

#include<bits/stdc++.h>

using namespace std;

vector<int> NGE(vector<int> v){
    vector<int> nge(v.size());
    stack<int> st;
    for(int i=0;i<v.size();i++){
        while(!st.empty()  && v[i]>v[st.top()]){
            nge[st.top()]=i;
st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        nge[st.top()]=-1;
        st.pop();

    }
    return nge;
}

     int main() {
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
vector<int> nge=NGE(v);
for(int i=0;i<n;i++){
    cout<<v[i]<<" "<<(nge[i]==-1 ? -1: v[nge[i]])<<endl;
}
return 0;
}