#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{	
	int i=atoi(*argv);
	//int j= atoi(argv[1]);
	int i=100;
	int j=1000;
	int z=i;
	int nmax=0;
	while (z<=j)
	{
		if (z<=0)
		{
			printf("%d\n",0);
			return 0;
		}
		//printf("%d\n",z);
		int n=0;
		int rem=z;
		while (rem!=1)
		{
			n++;
			if (rem%2==0)
			{
				rem=rem/2;
			}
			else
			{
				rem=3*rem+1;
			}
			//printf("%d\n",rem);
		}
		//printf("%d\n",n);
		n++; //metrame kai to 1
		if (n>nmax)
		{
			nmax=n;
		}
		z++;	
	}
	printf("%d\n",nmax);
	return 0;	
}


