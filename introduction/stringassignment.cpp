// q1
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);
//     int n = s.length();
//     for (int i = 0; i < n; i++)
//     {

//         if (s[i] % 2 == 0)
//         {
//             s[i] = '#';
//         }
//     }
//     cout << s;
// }
// Q2;
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);
//     int n = s.length();
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
//         {
//             continue;
//         }
//         else
//         {
//             count++;
//         }
//     }
//     cout << count;
// }

// Q3;
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);
//     int n = s.length();
//     int i=0;
//     int j=n-1;
//     while(i<=j){
//         if(s[i]==s[j]){
//             cout<<"yes";
//             break;
//         }
//         else{
//             cout<<"no";
//             break;
//         }
//     }


// }
// Q4
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int n = s.length();
    reverse(s.begin()+n/2,s.end());
    cout<<s; 

    
}