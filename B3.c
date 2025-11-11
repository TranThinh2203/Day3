#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    int b =  20;

    printf("Gia tri ban dau cua a va b la: a = %d, b = %d", a, b);

    swap(&a, &b);
    printf("Gia tri sau khi doi cho cho nhau la: a = %d, b = %d", a, b);
    
    return 0;
}
