/*
Inverted Number Pattern
Print the following pattern for the given N number of rows.
Pattern for N = 4

4444
333
22
1

Input format :

Integer N (Total no. of rows)

Output format :

Pattern in N lines

Constraints :

0 <= N <= 50

Sample Input 1:

5

Sample Output 1:

55555 
4444
333
22
1

Sample Input 2:

6

Sample Output 2:

666666
55555 
4444
333
22
1

*/

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int n;
    cin>>n;
for (int i = 0; i < n; i++)
{
    for(int j=0;j<(n-i);j++) {
        cout<<n-i;
    }
    cout<<endl;
}

     return 0;
}


