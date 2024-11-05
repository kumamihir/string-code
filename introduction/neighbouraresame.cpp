#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    int count=0;
   
   
    for(int i=0;i<n;i++){
        if(n==1) break;
        if(s[i]!=s[i+1] || s[i-1]!=s[i]){
            continue;
        }
        else{
            count++;
        }
    }
    cout<<count;
    

}