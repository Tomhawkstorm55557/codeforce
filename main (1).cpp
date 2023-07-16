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
    int t;
    cin>>t;
    while(t--){
      int a1,a2,b1,b2,c1,c2;
      cin>>a1,a2,b1,b2,c1,c2;
     cout<<(abs(a1-b1) +abs(a2-b2)  + abs(a1-c1)+abs(a2-c2)+1-abs(b1-c1)-abs(b2-c2))/2 << endl;
      
    }
   return 0;
}