#include <stdio.h>
#include <stdlib.h>


int check_variable = 0;
int GCD=1;
int count1=0;
int count2=0;

int primeNumberChech(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            check_variable = 1;
            break;
        }
    }


    if (check_variable == 0)
    {
        check_variable = 0;
    }

    return 1;
}

void lineerSearch_multiplication(int arr1[],int arr2[])
{
    int a = (sizeof(arr1) / sizeof * arr2);

    for (int i=0;i<a;i++)
    {
        if (arr1[i]==arr2[i])
        {
            GCD *= arr1[i];
        }
    }
}


void printArray(int arr[])
{
    int a = sizeof(arr)/sizeof(*arr);

    for (int i=0; i<a;i++)
    {
        printf("%d ",arr[i]);
    }
}


int main()
{

    int n1, n2;

    int conculusion1,conculusion2;;

    int zero = 0;

    printf("first number --> ");
    scanf("%d", &n1);
    printf("second number --> ");
    scanf("%d", &n2);

    int number1 = n1;
    int number2 = n2;


    for (int i = 2; i <= n1; i++)
    {
        primeNumberChech(i);

        if (check_variable == 0)
        {
            if (n1 % i == 0)
            {
                conculusion1 = n1 / i;
                n1 = conculusion1;
                count1++;
            }
        }
    }

    for (int j = 2; j <= n2; j++)
    {
        primeNumberChech(j);

        if (check_variable == 0)
        {
            if (n2 % j == 0)
            {
                conculusion2 = n2 / j;
                n2 = conculusion2;
                count2++;
            }
        }
    }

    int arr1[count1];
    int arr2[count2];

    for (int i = 2; i <= number1 && i<=number2; i++)
    {
        primeNumberChech(i);

        if (check_variable == 1)
        {
            if (n1 % i == 0 && n2 % i ==0)
            {
                arr1[zero] = i;
                arr2[zero]=i;
                zero++;
            }
        }
    }

    if (zero==0)
    {
        GCD=1;
        goto end;
    }

    lineerSearch_multiplication(arr1,arr2);
    end:
    printf("greatest common divisor of two number -> %d",GCD);
    
    printf("\n);
	   
    system("pause");

    return 0;
}
