/*
Start Pattern
Print the following pattern
Pattern for N = 4
    *
   *** 
  *****
 *******
The dots represent spaces.
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******
*/
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n,k=0;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=(n-i);j++)
        cout<<" ";
        while (k!= (2*i-1))
        {
            cout<<"*";
            k++;
        }
        k=0;
        cout<<endl;
    }
    
    return 0;
  
}


