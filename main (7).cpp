/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int i,n,k,a[200005];
int main() {
    cin>>n>>k;
	for(a[0]=1;cin>>a[++i];);
	sort(a,a+n+1);
	cout<<(a[k]!=a[k+1]?a[k]:-1);
}
 	  