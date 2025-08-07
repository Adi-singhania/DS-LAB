#include<stdio.h>
int main ()
{
    int n, pos, element, arr[50];
    printf("Enter the no of elements of an Array:");
    scanf("%d",&n);
    printf("Enter the %d elements of the array: \n",n);
    for(int i=1;i<=n;i++)
    {
        scanf("\n %d",&arr[i]);
    }
    printf("\n\nEntered Array:\n");
    for (int j=1;j<=n;j++)
    {
        printf("\n %d",arr[j]);
    }
    printf("\n\nEnter any postion of Array from 0 to %d :",n);
    scanf("%d", &pos);
    printf("Enter the updated element of that position:");
    scanf("%d",&element);
    arr[pos]= element;
    printf("\n\nHence, Element- %d & Position- %d\n", element, pos);
    printf("\nTherefore, the updated Array is:");
    for (int z=1; z<=n; z++)
    {
        printf("\n %d",arr[z]);
    }
    printf("\n\n THANK YOU");
}

