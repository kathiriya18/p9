#include<stdio.h>

enum day

{
	 sunday,monday,tuseday,wednesday,thursday,friday,saturday
};

main()
{
	int a,n,i;
	for(i=sunday;i<=saturday;i++)
	{
		printf("%d  ",i);
	}
}