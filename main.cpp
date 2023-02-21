#include <stdio.h>

int main() 
{
	int mas[100];
	int n;
	
	printf("Kolichestvo elementov: ");
	scanf("%i",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("Element[%i]: ",i+1);
		scanf("%i",&mas[i]);
	}

	bool fl=true;
	while(fl)
	{
		fl=false;
		for(int i=0;i<n-1;i++)
		{
			if(mas[i]>mas[i+1])
			{
				int z=mas[i];
				mas[i]=mas[i+1];
				mas[i+1]=z;
				fl=true;
			}
		}	
	}
	
	printf("\nResult: ");
	for(int i=0;i<n;i++)
	{
		printf("%4i",mas[i]);
	}
	return 0;
}
