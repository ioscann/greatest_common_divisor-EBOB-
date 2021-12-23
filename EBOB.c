#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int check_variable = 0;
int EBOB=1;
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
            EBOB *= arr1[i];
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

    setlocale(LC_ALL,"Turkish");

	int n1, n2;

    int sonuc1,sonuc2;;

    int zero = 0;

	printf("EBOB'u bulunacak ilk sayýyý giriniz --> ");
	scanf("%d", &n1);
	printf("EBOB'u bulunacak ikinci sayýyý giriniz --> ");
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
                sonuc1 = n1 / i;
                n1 = sonuc1;
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
                sonuc2 = n2 / j;
                n2 = sonuc2;
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
        EBOB=1;
        goto end;
    }

    lineerSearch_multiplication(arr1,arr2);
    end:
    printf("Bu iki sayýnýn EBOBU -> %d",EBOB);

    system("pause");

	return 0;
}