#include<stdio.h>
void insert(int a[],int x, int i, int n)
{
	int k;
	if (n==50)
	{
		printf("Array is empty");
	}
	else
	{ 
		for(k=n;k>i;k--)
		{
			a[k]=a[k-1];
			a[i]=x;
			n++;
		}
	}
}
int main()
{
	int m,j,y,i;
	int b[]={1,2,3,4,5,6};
	printf("the default array is");
	for(i=0;i<6;i++)
	{
    printf("%d",b[i]);
    }
	printf("enter the the number of elemrents ");
	scanf("%d",&m);
	printf("enter where u have to insert");
	scanf("%d",&j);
	printf("enter the element u have to insert ");
	scanf("%d",&y);
	insert(b,y,j,m);
	printf(" the default array is =");
	for(i=0;i<6;i++)
	{
	printf("%d",b[i]);
    }
    return 0;
}

