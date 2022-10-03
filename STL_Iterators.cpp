#include <bits/stdc++.h>

using namespace std;

int main()
{
     vector<int> v = {1, 6, 7, 8, 3, 9};
     for (int i = 0; i < v.size(); ++i)
     {
          cout << v[i] << " ";
     }
     cout << endl;
     // vector<int>::iterator it = v.begin();
     // for (it = v.begin(); it != v.end(); ++it)
     // {
     //      cout << (*it) << endl;
     // }

     vector<pair<int, int>> v_p = {{1, 2}, {3, 4}, {5, 6}};
     vector<pair<int, int>>::iterator it;
     for (it = v_p.begin(); it != v_p.end(); ++it)
     {
          cout << (*it).first << " " << (*it).second << endl;
     }

     cout << "Using New Method" << endl;
     for (it = v_p.begin(); it != v_p.end(); ++it)
     {
          cout << it->first << " " << it->second << endl;
     }

     cout << "Using short Method" << endl;
     for (int value : v)
     {
          cout << value << " ";
     }
     cout << endl;
     cout << "Using Reference :-" << endl;
     for (int &value : v)
     {
          value++;
          cout << value << " ";
     }
     cout << endl;

     // for (int value : v)
     //      {
     //           cout << value << " ";
     //      }
     //      cout << endl;

     vector<pair<int, int>> vp = {{1, 2}, {2, 3}};
     for (pair<int, int> value : vp)
     {
          cout << value.first << " " << value.second << " ";
          cout << endl;
     }

     for (pair<int, int> &value : vp)
     {

          cout << value.first << " " << value.second << " ";
          cout << endl;
     }

     cout << "Auto Keyword" << endl;
     for (auto value : vp)
     {

          cout << value.first << " " << value.second << " ";
          cout << endl;
     }

     return 0;
}

// Imp Note :-
//  it->first <==> (*it).first
