#include<iostream>
#include<string>
using namespace std;
int main(){
    // char str[5]={'a','b','c','d','e'};
    // for(int i=0;i<5;i++){
    //     cout<<str[i]<<" ";
    // }
char str[]={'a','b','c','d','e','f'};
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
    }
}
