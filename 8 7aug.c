//wap in c to represent triplet format of the sparse matrix.
#include<stdio.h>
void sparse(int x[][4])
{
	printf("Rows\tColumns\tvalue\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(x[i][j]!=0)
			{
				printf("%d\t%d\t%d\n",i,j,x[i][j]);
			}
		}
	}
}
int main()
{
	int x,y,z;
	int arr[4][4]={2,3,0,0,6,3,0,4,0,4,0,6,0,3,4,1};
	sparse(arr);
}
