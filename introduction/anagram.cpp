#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    int n=s.length();
    int m=t.length();

   sort(s.begin(),s.end());
   sort(t.begin(),t.end());

    if(s==t){
        cout<<true;
    }
    else{
     cout<<false;
    }

    }
