// Write a menu driven program in C to create a structure to represent complex numbers and perform the following operations
// using user defined function:
// i> addition of two complex numbers using call-by mechanism
// ii>multiplication of two complex numbers (use call by address)
#include <stdio.h>

struct Complex
{
    float real;
    float imag;
};

// Function to add two complex numbers (call by value)
struct Complex addComplex(struct Complex c1, struct Complex c2)
{
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to multiply two complex numbers (call by address)
void multiplyComplex(struct Complex *c1, struct Complex *c2, struct Complex *result)
{
    result->real = (c1->real * c2->real) - (c1->imag * c2->imag);
    result->imag = (c1->real * c2->imag) + (c1->imag * c2->real);
}

int main()
{
    struct Complex c1, c2, result;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Add two complex numbers\n");
        printf("2. Multiply two complex numbers\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter first complex number (real and imaginary parts): ");
                scanf("%f %f", &c1.real, &c1.imag);
                printf("Enter second complex number (real and imaginary parts): ");
                scanf("%f %f", &c2.real, &c2.imag);

                result = addComplex(c1, c2);
                printf("Sum: %.2f + %.2fi\n", result.real, result.imag);
                break;

            case 2:
                printf("Enter first complex number (real and imaginary parts): ");
                scanf("%f %f", &c1.real, &c1.imag);
                printf("Enter second complex number (real and imaginary parts): ");
                scanf("%f %f", &c2.real, &c2.imag);

                multiplyComplex(&c1, &c2, &result);
                printf("Product: %.2f + %.2fi\n", result.real, result.imag);
                break;

            case 3:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    while (choice != 3);

    return 0;
}
