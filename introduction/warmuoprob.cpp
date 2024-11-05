// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     cout<<endl;
//     int count=0;
//     for(int i=0;str[i]!=0;i++){
//         if(str[i]==str[i+1]){
//             count++;

//         }
//     }
    
//     cout<<count;
// }


// different form each other

#include<iostream>
using namespace std;
int main(){
    // string str;
    // getline(cin,str);
//     int n=str.length();
//     cout<<endl;
//     int count=0;
//     for(int i=0;str[i]!=0;i++){
//         if(n==1){
//             break;
//         }
//         if(str[i]==str[i+1] || str[i-1]==str[i]){
//             continue;

//         }
//         else{
//             count++;
//         }
//     }
    
//     cout<<count;
int n;
cout<<"enter the array size";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
  cin>>arr[i];
}
   int max=arr[0];
   for(int i=0;i<n;i++){
    if(arr[i]>max){
      max=arr[i];
    }

    }
      int sl=0;
    for(int i=0;i<n;i++){
      if(arr[i]>sl && arr[i]!=max){
        cout<<sl;
      }
   }
}
     
 