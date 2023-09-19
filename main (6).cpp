/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ans = 0;
    
    string s = "QWERTYUIOPASDFGHJKLZXCVBNM";
    int n = s.length();
    unordered_map<string, int> mp;

    for (int i = 0; i < n - 1; i++) {
        // Making substring
        string str = s.substr(i, 2);
        mp[str]++;
    }

    // Using hashing to get the maximum occurring 2-gram substring
    string sh;
    int cnt = 0;
    
    for (auto i : mp) {
        if (i.second > cnt) {
            cnt = i.second;
            sh = i.first;
        }
    }

    cout << "Maximum 2-gram substring: " << sh << " with count " << cnt << endl;

    return 0;
}
