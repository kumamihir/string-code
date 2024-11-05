#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
 
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++){
    sort(s[i].begin(),s[i].end());
  }
  cout<<s;
}
