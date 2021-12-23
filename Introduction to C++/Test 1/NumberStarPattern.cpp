/*
Number Star Pattern 
Print the following pattern for given number of rows.

Input format :

Line 1 : N (Total number of rows)
Sample Input :

   5

Sample Output :

1234554321
1234**4321
123****321
12******21
1********1

*/
#include <iostream>
using namespace std;
int main() 
{    
   int n;
   cin>>n;
  for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=i;k<n;k++){
            cout<<"**";

        }
        for(int l=i;l>=1;l--)
        {
            cout <<l;
        }


      cout<<endl;
  }
}
