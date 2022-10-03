#include<bits/stdc++.h>

using namespace std;

// In Multi set Duplicates are allowed
void print(multiset<string> &s){
    for(auto value:s){
        cout<<value<<endl;
    }
}
     int main() {

multiset<string> s;
s.insert("Dhamu");
s.insert("abcd");
s.insert("umesh");//O(logn)
s.insert("Tanu");
s.insert("Manu");
s.insert("umesh"); // O(logn)
s.insert("umesh");
s.insert("umesh"); // O(logn)




// s.erase("umesh");  --> this removes all the elements equal to the given element
 auto it=s.find("umesh");
if(it!=s.end()){
    s.erase(it);  //This removes only the value at the given iterator
}
// print(s);
//set arranges everything in lexicographical order 
// auto it=s.find("abc");//O(log(n)) //O(1)
  
// if(it!=s.end()){
//     cout<<(*it)<<endl;
// }

//uses Red black trees

// s.erase("abcd");
print(s);
return 0;
}