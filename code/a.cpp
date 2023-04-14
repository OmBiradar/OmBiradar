#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n;
		cin >> k;
		int count;
		if(n-k==0) count==1;
		else count =(k+1)**(n-k) % 1000000007;
		cout << count << endl;
	}
	return 0;
}