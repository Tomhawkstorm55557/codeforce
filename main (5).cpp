/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int main()

{
    int tc;
    cin>>tc;
    while(tc--){
       int n;
       cin>>n;
       long long arr[n];
       set<long long>s;
       for(int i =0;i<n;i++){
          cin>>arr[i];
          s.insert(arr[i]);
          
       }
       
       if(s.size()==1){
          cout<<n<<endl;
       }
       else{
           cout<<1<<endl;
       }

        }
          return 0;
    }


  

