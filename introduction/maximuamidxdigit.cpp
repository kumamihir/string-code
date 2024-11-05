#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    

    


   string arr[]={"0123","0023","456","00182","2901"};
   
   int mx=stoi(arr[0]);
   for(int i=0;i<5;i++){
    int x=stoi(arr[i]);
    if(x>mx) mx=x;
   }
   cout<<mx;
    

}