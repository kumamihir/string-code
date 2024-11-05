#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter the word : ";
    getline(cin,s);
    
    reverse(s.begin(),s.end());
    // for(int i=0;i<s.size();i++){
    //     reverse(s.begin(),s.begin());
    // }
    cout<<s;

}