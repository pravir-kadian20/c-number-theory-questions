// GCD
// Take the following as input.

// A number (N1)
// A number (N2)
// Write a function which returns the GCD of N1 and N2. Print the value returned.

// Input Format:
// Constraints:
// 0 < N1 < 1000000000 0 < N2 < 1000000000

// Output Format
// Sample Input
// 16 
// 24
// Sample Output
// 8
#include<iostream>
using namespace std;

int gcd(int n1,int n2){
    if(n2==0){
        return n1;
    }
    return gcd(n2,n1%n2);
}
int main() {
    int n1,n2;
    cin>>n1>>n2;
    cout << gcd(n1,n2) << endl;
	return 0;
}