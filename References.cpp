#include<bits/stdc++.h>

using namespace std;

int increment(int &n,int n1){
    n++;
    n1++;
}

int swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void func(string &s){
    s="";
}
void funcho(int a[],int n){
    a[0]=5;
}
     int main() {

// int a,b;
// cin>>a>>b;
// increment(a,b);
// cout<<a<<" "<<b<<endl;
// swap(a,b);
// cout<<a<<" "<<b<<endl;
string s="jbjnjsd";
func(s);
cout<<s<<endl; 
int a[10];
a[0]=7;
cout<<a[0]<<endl;
funcho(a,10);
cout<<a[0]<<endl;

//arrays always pass by refernce
return 0;
}