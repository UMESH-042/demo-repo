#include<bits/stdc++.h>

using namespace std;

     int main() {
string s;
int n;
cin>>n;
for(int i=0;i<n;i++){
    s.push_back('a');// Time Complexity O(1)  //better method for adding character at the end
}

for(int i=0;i<n;i++){
    s=s+'a';//// Time Complexity O(s.size())
}
return 0;
}