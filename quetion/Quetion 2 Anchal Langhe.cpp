
#include<iostream>
#include<algorithm>

using namespace std;

// Function to find the longest common prefix
string longestCommonPrefix(string ar[], int n)
{

	// If size is 0, return empty string
	if (n == 0)
		return "";

	if (n == 1)
		return ar[0];

	// Sort the given array
	sort(ar, ar + n);

	
	int en = min(ar[0].size(),
				ar[n - 1].size());

	
	string first = ar[0], last = ar[n - 1];
	int i = 0;
	while (i < en && first[i] == last[i])
		i++;

	string pre = first.substr(0, i);
	return pre;
}


int main()
{

	
	string P[3];
	int n = sizeof(P) / sizeof(P[0]);
	 for (int i = 0; i < 3; i++)
	 {
	 	cin>>P[i];
	 }
        
	
	cout << longestCommonPrefix(P, n);
	return 0;
}

