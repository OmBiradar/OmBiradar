{
	if(n==0)
	return 1;
	int res = 1;
	for (int i = 2; i <= n; i++)
		res = res * i;
	return res;
}