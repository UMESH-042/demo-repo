#include<bits/stdc++.h>

using namespace std;

     int main() {
        map<int,multiset<string>>m;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int marks;
            string name;
            cin>>name>>marks;
            m[-1*marks].insert(name);
        }
    //     auto cur_it= --m.end();
    // while(true){
    //     auto &students=(*cur_it).second;
    //     int marks=(*cur_it).first;
    //     for(auto student:students){
    //         cout<<student<<" "<<marks<<endl;
    //     }
    //     if(cur_it==m.begin()){
    //         break;
    //     }else{
    //         cur_it--;
             
    //     }
    // }

    for(auto &pr:m){
        auto &students=pr.second;
        int marks=pr.first;
        for(auto student: students){
            cout<<student<<" "<<-1*marks<<endl;
        }

    }
        
return 0;
}