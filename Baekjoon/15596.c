//link : https://www.acmicpc.net/problem/15596
long long sum(int *a, int n) {
	long long ans = 0;
    
    for(int i=0;i<n;i++) ans+=a[i];
    
	return ans;
}
