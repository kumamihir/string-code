#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    //if you want to reverse only same;
    cout<<s<<endl;
    
    // cout<<s<<endl;
    
    //if you want to revrse tfrom idx 2 to 4
   reverse(s.begin()+n/2,s.end());
    cout<<s; r

}