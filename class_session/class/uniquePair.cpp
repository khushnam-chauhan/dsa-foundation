// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
int countUnique(int arr[], int n)
{

	set<pair<int, int> > s;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			s.insert(make_pair(arr[i], arr[j]));

	return s.size();
}

int main()
{
	int arr[] = { 1, 2, 2, 4, 2, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << countUnique(arr, n);
	return 0;
}
