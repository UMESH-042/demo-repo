#include<bits/stdc++.h>

using namespace std;


void print(set<string> &s){
    for(auto value:s){
        cout<<value<<endl;
    }
}
     int main() {

set<string> s;
s.insert("Umesh");//O(log(n))
s.insert("Dhamu");
s.insert("abcd");
s.insert("Tanu");
s.insert("Manu");
// print(s);
//set arranges everything in lexicographical order 
// auto it=s.find("abc");//O(log(n)) //O(log(n))
  
// if(it!=s.end()){
//     cout<<(*it)<<endl;
// }
cout<<s.size()<<endl;


s.erase("abcd");
print(s);


return 0;
}