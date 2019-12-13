LCM
Take the following as input.

A number (N1)
A number (N2)
Write a function which returns the LCM of N1 and N2. Print the value returned.

Input Format:
Constraints:
0 < N1 < 1000000000 0 < N2 < 1000000000

Output Format
Sample Input
4 
6
Sample Output
12
#include<iostream>
using namespace std;

int gcd(int n1,int n2){
    if(n2==0){
        return n1;
    }
    return gcd(n2,n1%n2);
}

int lcm(int n1,int n2){
    return n1*n2/gcd(n1,n2);
}
int main() {
    int n1,n2;
    cin>>n1>>n2;
    cout << lcm(n1,n2) << endl;
	return 0;
}