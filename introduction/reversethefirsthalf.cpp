#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    int n=s.length();
    for(int i=0;i<n;i++){
        reverse(s.begin()+0,s.begin()+n/2);
    }
    cout<<s;

}