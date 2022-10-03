#include<bits/stdc++.h>

using namespace std;
// Imp Note : maps are always arranged in Ascending order
// Maps always contains unique element;

void print(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr:m){
            cout<<pr.first<<" "<<pr.second<<endl;
    }
}
void prints(map<string,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr:m){
            cout<<pr.first<<" "<<pr.second<<endl;
    }
}
     int main() {

 
map<int ,string> m;
m[1]="abc";//O(log(n))
m[5]="efg";
m[2]="bcd";
m[2]="bc";

m[4]="def";
m[3]="cde";
print(m);
// auto it =m.find(3);//O(log(n))
auto it =m.find(7);//O(log(n))

// if(it==m.end()){
//     cout<<"NO Value"<<endl;
// }else{
// cout<<(*it).first<<" "<<(*it).second<<endl;
// }
m.erase(3); //O(log(n))
m.clear();
print(m);


map<string,string> mp;
mp["abcd"]="abcd";// s.size() * log(n) --> time Complexity 
prints(mp);
return 0;
}