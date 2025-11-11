#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int* p;

    printf("Nhap vao mot so a: ");
    scanf("%d", &a);

    p = &a;
    printf("Gia tri cua p (dia chi duoc tro den cua p) la: %p\n", (void*)p);
    printf("Gia tri cua dia chi p duoc cho den (*p) la: %d\n", *p);
    printf("Gia tri cua a la: %p\n", (void*)&a);
    printf("Gia tri cua p va dia chi cua a la Giong Nhau.");

    a = 25;
    printf("Sau khi tha doi a - 25 thi a se la: \n");
    printf("Gia tri hien tại cua p khi duoc tro toi la: %d\n", *p);
    printf("Gia tri cua *p se Thay Doi theo a.");

    *p = 35;

    printf("Sau khi thay doi *p = 200: ");
    printf("Gia tri cua a hien tai la: %d", a);
    printf("Gia tri cua a se Thay Doi theo *p");

    return 0;
}
