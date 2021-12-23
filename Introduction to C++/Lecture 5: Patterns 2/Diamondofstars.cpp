/*
Diamond of stars
Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 5


The dots represent spaces.

  *
 ***
*****
 ***
  *

Input format :

N (Total no. of rows and can only be odd)

Output format :

Pattern in N lines

Constraints :

1 <= N <= 49

Sample Input 1:

5

Sample Output 1:

  *
 ***
*****
 ***
  *

Sample Input 2:

3

Sample Output 2:

  *
 ***
  *

*/
#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    for (int i = 1; i <=(n/2+1) ; i++)
    {
        for(int j=1;j<=(n/2+1-i);j++)
        cout<<" ";
        
        for(int k=0;k<(2*i-1);k++)
        cout<<"*";
        
        cout<<endl;
    }
    for (int i = 1; i <=(n/2) ; i++)
    {
        for(int m=0;m<i;m++)
        cout<<" ";
        for(int k=0;k<(n-2*i);k++)
        cout<<"*";
        
        cout<<endl;
    }

     return 0;
}
