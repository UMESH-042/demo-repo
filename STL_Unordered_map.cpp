#include<bits/stdc++.h>

using namespace std;
// Imp Note : maps are always arranged in Ascending order
// Maps always contains unique element;

void print(unordered_map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr:m){
            cout<<pr.first<<" "<<pr.second<<endl;
    }
}
void prints(unordered_map<string,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr:m){
            cout<<pr.first<<" "<<pr.second<<endl;
    }
}
     int main() {

 
unordered_map<int ,string> m;

//1. inbuilt implementation
//2. Time Complexity
//3. valid key datatype



m[1]="abc";//O(1)
m[5]="efg";
m[2]="bcd";
m[2]="bc";

m[4]="def";
m[3]="cde";
print(m);
// auto it =m.find(3);//O(1)
auto it =m.find(7);//O(1)

// if(it==m.end()){
//     cout<<"NO Value"<<endl;
// }else{
// cout<<(*it).first<<" "<<(*it).second<<endl;
// }
m.erase(3); //O(1)
m.clear();
print(m);


unordered_map<string,string> mp;
mp["abcd"]="abcd";// s.size() * log(n) --> time Complexity 
prints(mp);
return 0;
}