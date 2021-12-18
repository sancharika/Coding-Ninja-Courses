/*
Number Pattern 2
Print the following pattern
Pattern for N = 4
...1
..23
.34
4567
The dots represent spaces.
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input :
5
Sample Output :
....1
...23
..34
.4567
56789
The dots represent spaces.
*/
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=(n-1);
        while(j>=i)
        {
            cout<<' ';
            j--;
        }
        int k=0;
        while(k<i)
        {
            cout<<k+i;
            k++;
        }
        
        cout<<endl;
        i++;
    }
    
    return 0;
}


