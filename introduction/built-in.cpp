#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    // int n=s.size();
    cout<<s<<endl;

    // cout<<n;
    // s.push_back('e');
    // cout<<s;
    string t;
    getline(cin,t);
    s=s+t;
    cout<<s;
    
}