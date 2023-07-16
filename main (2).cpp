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
int n,k,x;
	cin>>n>>k>>x;
	if(x!=1){
		cout<<"Yes\n"<<n<<"\n";
		for(int i = 0;i < n;i ++)cout<<"1 ";
		puts("");
	}
	else if(k==1||(k==2&&n%2==1)) cout<<"No\n";
	else {
		cout<<"Yes\n"<<n/2<<"\n";
		if(n%2==0){
			for(int i = 0;i < n/2;i ++)cout<<"2 ";
		}
		else{
			cout<<"3 ";
			for(int i = 0;i < n/2-1;i++)cout<<"2 ";
		}
	}
     }
     
      
    }

