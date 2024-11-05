#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> s;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-2;j++){
            if(arr[i]==arr[j]){
                s.push_back(i);
            }
        }
        for(int i=0;i<n;i++){
            cout<<s[i];
        }
    }
  
}
     
 