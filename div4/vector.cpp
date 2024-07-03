#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<int>v;
 v.push_back(5);   // 0
  v.push_back(1); //1
   v.push_back(99); //2==99
    v.push_back(1);   //3
     v.push_back(37); //4
     
    
     cout<<v.at(2)<<endl; // ........99
     cout<<v[2]<<endl; //...........99
    cout<<v.size()<<endl; //.........5
     
     if(v.empty()) cout<<"emprjh"<<endl;
     else cout<<"no"<<endl;
     for(int i=0;i<v.size();i++){
         cout<<v[i]<<endl;
     }
     // 5 11 99 1 37
     
     cout<<"after vector operationnnnnnnnnnnnnnnnnnnn"<<endl;
     cout<<v.front()<<endl;
cout<<v.back()<<endl;

v.pop_back(); // to delete last element
for(int i=0;i<v.size();i++){
         cout<<v[i]<<endl;
     }
     
     v.erase(v.begin()+2);
     for(int i=0;i<v.size();i++){
         cout<<v[i]<<endl;
     }
     v.erase(v.begin()+2,v.end());
     for(int i=0;i<v.size();i++){
         cout<<v[i]<<endl;
     }
    return 0;
}










