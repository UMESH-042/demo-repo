#include<bits/stdc++.h>

using namespace std;

     int main() {

string s;
getline(cin,s);
string str_rev;
// for(int i=s.size();i>=0;i--){
//     cout<<s[i];
// }
// cout<<endl;

for(int i=s.size()-1;i>=0;--i){
    str_rev.push_back(s[i]);
}
cout<<str_rev<<endl;
// palindrome 

if(s==str_rev){
    cout<<"Yes"<<endl;
}else{
    cout<<"No"<<endl;
}


string s1;
cin>>s1;
int last_digit=s1[s1.size()-1] - '0';
cout<<last_digit<<endl; 
return 0;
}