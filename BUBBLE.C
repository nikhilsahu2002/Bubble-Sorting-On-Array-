#include<stdio.h>
#include<conio.h>
void bubble(int arr[], int num)
{
	int i,temp,j;

	for(i=0;i<num;i++)
	{
		for(j=0;j<num -i - 1;j++)
		{
			if(arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void main()
{
int arr[50],n=10,x,i;

printf("Enter The Eliments");
for(i=0;i<10;i++)
	scanf("%d",&arr[i]);

bubble(arr,n);

for(i=0;i<10;i++)
	{
	printf("%d",arr[i]);
	}
getch();

}
