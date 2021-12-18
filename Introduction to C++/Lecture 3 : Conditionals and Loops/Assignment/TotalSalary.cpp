/*
Total Salary
Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
    totalSalary = basic + hra + da + allow – pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.
Round off the total salary and then print the integral part only.
Note: Try finding out a function on the internet to do so
Input format :
Basic salary & Grade (separated by space)
Output Format :
Total Salary
Constraints :
0 <= Basic Salary <= 7,500,000
Sample Input 1 :
10000 A
Sample Output 1 :
17600
Sample Input 2 :
4567 B
Sample Output 2 :
8762
Explanation of Input 2:
We have been given the basic salary as Rs. 4567. We need to calculate the hra, da and pf. 
Now when we calculate each of the, it turns out to be:
hra =  20% of Rs. 4567 = Rs. 913.4
da = 50% od Rs. 4567 = Rs. 2283.5
pf = 11% of Rs. 4567 = Rs. 502.37
Since, the grade is 'B', we take allowance as Rs. 1500.
On substituting these values to the formula of totalSalary, we get Rs. 8761.53 and now rounding it off will result in Rs. 8762 and hence the Answer.
*/
#include<iostream>
using namespace std;
int salary(double b,char g);
int main() {
	

    double ba;
    char grd;
    cin>>ba>>grd;
    int sa = salary(ba,grd);
    cout<<sa;

    
    return 0;
}

int salary(double b,char g){
    double hra,da,pf,s=0;
    hra=0.2*b;
    da = 0.5*b;
    pf=0.11*b;
    s=b+hra+da-pf;
    if (g==65)
    s=s+1700;
    else if(g==66)
    s=s+1500;
    else
    s=s+1300;
    int x= int(s);
    if (s-x>0.5)
        s= x+1;
    else
    	s= x;
    return s;
}

	

