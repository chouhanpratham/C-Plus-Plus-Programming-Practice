#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

//if and else are two of the most frequently used conditionals in C/C++, and they enable you to execute zero or one conditional statement among many such dependent conditional statements. 

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    switch(n)
    {
        case 1: cout<<"one";
        break;
        case 2: cout<<"two";
        break;
        case 3: cout<<"three";
        break;
        case 4: cout<<"four";
        break;
        case 5: cout<<"five";
        break;
        case 6: cout<<"six";
        break;
        case 7: cout<<"seven";
        break;
        case 8: cout<<"eight";
        break;
        case 9: cout<<"nine";
        break;
        default: cout<<"Greater than 9";
    }
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
