//WAP in C to create an array of n elements using dynamic memory allocation, calculate sum of all prime elements of the array
// using user defined function and de allocate the memory of the array after its use

#include <stdio.h>
int isPrime(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i*i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int sumPrimes(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        if (isPrime(arr[i]))
            sum += arr[i];
    return sum;
}

int main()
{
    int n;
    printf("Enter the size of thew Array: ");
    scanf("%d", &n);
    int arr[1000];
    printf("Enter the elements of the Array: \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Sum = %d\n", sumPrimes(arr, n));
    return 0;
}
