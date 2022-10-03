/*
Given a Number  N. Print its Factorial 

Constraints :
 1<= N <= 100

 print Answer Modulo M
where  M= 47
*/

#include<bits/stdc++.h>

using namespace std;
// In Most of the Question The Calue of Modulo M = 10^9 +7 

     int main() {
int n;
cin>>n;
int M= 47;

long long int fact = 1;
for(int i=2;i<=n;i++){
     fact=(fact * i)%M;
}

cout<<fact<<endl;

return 0;
}