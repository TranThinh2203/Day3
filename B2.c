#include <stdio.h>

void plus10(int* pl){
    *pl = *pl * 10;
}

int main(int argc, char const *argv[])
{
    int a = 15;

    printf("Gia tri ban dau cua a la: %d", a);
    pl10(&a);
    printf("Gia tri sau khi tang len 10 la: %d", a);

    return 0;
}
