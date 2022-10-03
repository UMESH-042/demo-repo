#include<bits/stdc++.h>

using namespace std;


void print(unordered_set<string> &s){
    for(auto value:s){
        cout<<value<<endl;
    }
}
     int main() {

unordered_set<string> s;
s.insert("Umesh");//O(1)
s.insert("Dhamu");
s.insert("abcd");
s.insert("Tanu");
s.insert("Manu");
// print(s);
//set arranges everything in lexicographical order 
// auto it=s.find("abc");//O(log(n)) //O(1)
  
// if(it!=s.end()){
//     cout<<(*it)<<endl;
// }



s.erase("abcd");
print(s);
return 0;
}