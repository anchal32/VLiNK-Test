
#include <bits/stdc++.h>
using namespace std;

// Function to count factors in O(N)
int numberOfDivisors(int num)
{
	int c = 0;

	// iterate and check if factor or not
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			c += 1;
		}
	}
	return c;
}

// Function to count numbers having
// exactly 3 divisors
int countNumbers(int n)
{
	int c = 0;

	// check for all numbers <=N
	for (int i = 1; i <= n; i++) {
		// check if exactly 3 factors or not
		if (numberOfDivisors(i) > 3)
			c += 1;
	}
	return c;
}

// Driver Code
int main()
{
	int n ;
	cin>>n;
if(n<0)
{
cout<<"Please provide a valid positive integer";
}
else	

	cout << countNumbers(n);

return 0;
}

