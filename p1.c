#include<stdio.h>

void main()
{
	int size;
	
	printf("Enter Number Of Elements : ");
	scanf("%d",&size);
	
	int a[size];
	int * ptr[size];
	int i;
	
	for(i=0;i<5;i++)
	{
		ptr[i] = &a[i];
		
		printf("\n\n Array Input \n\n");
		for(i=0;i<size;i++){
		printf("Enter Of Element %d : ",i+1);
		scanf("%d",&a[i]);
		}
	}
}
