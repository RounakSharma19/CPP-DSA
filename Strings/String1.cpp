// plaindrom or not
#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.size();
    // string reverse_str = str;
    // int n = str.size();
    // for(int i =0; i<n/2; i++){
    //     swap(reverse_str[i], reverse_str[n-i-1]);
    // }
    // if(reverse_str == str){
    //     cout<<"Yes it;s a palindrom"<<endl;
    // } else{
    //     cout<<"No it's not"<<endl;
    // }
    int flag = 1;
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "Yes it's palindrom" << endl;
    }
    else
    {
        cout << "No it's not" << endl;
    }
    return 0;
}