#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int n=s.length();
    cout << "your name: ";
    cout << s << endl;

   
    // int i = 0;
    // int j = n - 1;
    // while (i < j)
    // {
    //     swap(s[i], s[j]);
    //     i++;
    //     j--;
    // }

    reverse(s.begin(),s.end());
    cout<<"your name is "<< s;
}
