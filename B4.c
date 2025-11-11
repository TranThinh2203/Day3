#include <stdio.h>
#include <math.h>

#define MAX_SIZE 100

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void input(int a[], int *n)
{
    printf("Nhap vao mot cum so ma ban muon: ");
    scanf("%d", n);
    if (*n > MAX_SIZE)
    {
        printf("SO luong phan tu qua lon, dat n = %d", MAX_SIZE);
        *n = MAX_SIZE;
    }
}

void output(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", i);
        scanf("%d", a[i]);
    }
}

int findMax(int a[], int n)
{
    if (n <= 0)
        return -1;
    int maxVal = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > maxVal)
        {
            maxVal = a[i];
        }
    }
    return maxVal;
}

int findMin(int a[], int n)
{
    if (n <= 0)
        return -1;
    int minVal = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < minVal)
        {
            minVal = a
                [i];
        }
    }
    return minVal;
}

float average(int a[],int n)
{
    if (n <= 0)
        return 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return (float)sum / n;
}

int isPrime(int num)
{
    if (num < 2)
        return 0;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void lietKeSoNguyenTo(int a[],int n)
{
    printf("Cac so nguyen to trong mang: ");
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
        {
            printf("%d ", a[i]);
            count++;
        }
    }
    printf("\nTong so nguyen to: %d\n", count);
}

void arrange(int a[],int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a
                    [i] > a[j])
            {
                hoanDoi(&a[i],&a[j]);
            }
        }
    }
}

void addNumber(int a[],int *n, int v, int k)
{
    if (k < 0 || k > *n || *n >= MAX_SIZE)
    {
        printf("Vi tri them khong hop le hoac mang day!\n");
        return;
    }
    for (int i = *n; i > k; i--)
    {
        a
            [i] = a[i - 1];
    }
    a[k] = v;
    (*n)++;
}

void delete(int a[],int *n, int k)
{
    if (k < 0 || k >= *n)
    {
        printf("Vi tri xoa khong hop le!\n");
        return;
    }
    for (int i = k; i < *n - 1; i++)
    {
        a
            [i] = a[i + 1];
    }
    (*n)--;
}

int main()
{
    int a[MAX_SIZE];
    int n = 0;

    printf("--- Bai Tap Mang ---\n");
    input(a, &n);
    printf("Mang vua nhap: ");
    output(a, n);

    printf("1. Max: %d\n", findMax(a, n));

    printf("2. Min: %d\n", findMin(a, n));

    printf("3. Trung binh cong: %.2f\n", average(a, n));

    printf("4. ");
    lietKeSoNguyenTo(a, n);

    arrange(a, n);
    printf("5. Mang sau khi sap xep tang dan: ");
    output(a, n);

    addNumber(a, &n, 999, 2);
    printf("6. Mang sau khi them 999 vao vi tri 2: ");
    output(a, n);

    delete(a, &n, 1);
    printf("7. Mang sau khi xoa phan tu tai vi tri 1: ");
    output(a, n);

    return 0;
}