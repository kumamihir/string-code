#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    // getline(cin,s);
   
   string s2;
   getline(cin,s2);
   int n=s2.length();
//    s2=s.substr(0,4);
//    cout<<s2;

for(int i=0;i<n;i++){
    cout<<s2.substr(0,i+1)<<" "<<endl;
}

}