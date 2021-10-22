#include <stdio.h>


int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n, k;
	    scanf("%d %d",&n,&k);
	    int res = (2*n-k-1)/2;
	    printf("%d\n",2*res);
	    
	}
	return 0;
}