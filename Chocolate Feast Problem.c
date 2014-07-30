#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
	int n,c,m,choc=0,upchoc=0;
	int testc,*pint=&upchoc,wrappers;
	scanf("%d", &testc);
	while(testc--)
	{
		choc=0;
		scanf("%d%d%d", &n,&c,&m);
		choc=n/c;
		upchoc=choc;
		wrappers=upchoc;
		while(wrappers>=m)
		{
			upchoc=wrappers/m;
			wrappers-=(upchoc)*m;
			wrappers+=upchoc;
			choc+=upchoc;
		}
		printf("%d\n", choc);
	}
	return 0;
}