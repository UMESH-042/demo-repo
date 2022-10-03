#include<iostream>

using namespace std;

     int main() {
int x;
int sum=0;
sum=x+x;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int y;
    y=5;
    y++;

}
return 0;
}

// Time Complexity 
// n < 100000
// O(5) + O(3*n)
// Approximately  equal to O(n)


// for Example
// O(n) + O(n) = O(n)

// and O(k*n) = O(n) (if k << n)


// and O(1) = constant time Iteration


// Number of iteration in online programming websites in 1 sec = 10^7 - 10^8

            // 10^7 - 1 sec
            // 10^8 - 10 sec
            // 10^9 - 100 sec
            // 10^10 - 1000 sec
            // 10^11 - 10000 sec


#include<iostream>

using namespace std;
// N < 10^5
     int main() {
int n;
cin>>n;

int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

//Time Complexity = O(1) + O(1) + O(1) + O(n) = O(n)
return 0;
}





#include<iostream>
using namespace std;

// N < 10^5
     int main() {

int n;
cin>>n;
int ct=0;
while(n>0){
    n=n/2;
    ct++;
}
    //  2^a = n
    //  Taking Log on both side 
    // a x log(2)=log(n) 
    // a = log(n)  ( bcoz log(2) to the base 2 is 1)
// Time Complexity = O(1) + O(1) + O(1) + O(log(n)) = O(log(n)) 

return 0;
}


#include<bits/stdc++.h>

using namespace std;

     int main() {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<a[i]<<endl;
    }

}
// Time Complexity = O(1)+ O(1) + O(1) + O(n^2) = O(n^2)
return 0;
}

#include<iostream>

using namespace std;
//  n < 10^5
     int main() {
int n;
cin>>n;
int ct=0;
for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        ct++;
    }
}

// Time Complexity = 0 + 1 + 2 + 3 + 4 + 5 ... + n = n*(n+1)/2 = n^2/2 + n/2 = n^2

// Therfore Time Complexity = O(n^2) 
return 0;
}


#include<bits/stdc++.h>

using namespace std;

/* Constraints :
1 <= T <= 1000
1 <= N <= 1000
1 <= a[i] <= 1000

Sum of N over all test cases is 10^7

*/
     int main() {
int t;
cin>>t;
while(t--){
    int n,cnt=0;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
         int x;
         cin>>x;
         sum=sum+x;
         cnt++;

    }
    cout<<sum<<endl;
}

// Time Complexity = O(T*N) = O(N^2) If (Sum of N over all test cases is 10^7 ) this line is not given then .

return 0;
}