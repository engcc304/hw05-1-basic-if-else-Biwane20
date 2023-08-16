/*
    รับตัวอักขระมาทั้งหมด 4 ค่า แล้วนำมาแสดงผลย้อนกลับ เช่น กรอกค่า L M X Y ต้องแสดงเป็น Y X M L เป็นต้น

    Test case:
        L M Y K
    Output:
        Result: K Y M L

    Test case:
        A B C D
    Output:
        Result: D C B A
*/
#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 0;
    printf("Input[1] ");
    scanf("%d", &a);
    printf("Input[2] ");
    scanf("%d", &b);
    printf("Input[3] ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d ", a);
        if (b > c)
            printf("%d %d ", b, c);
        else
            printf("%d %d ", c, b);
    }

    else if (b > a && b > c)
    {
        printf("%d ", b);
        if (a > c)
            printf("%d %d ", a, c);
        else
            printf("%d %d ", c, a);
    }

    else if (c > b && c > a)
    {
        printf("%d ", c);
        if (b > a)
            printf("%d %d ", b, a);
        else
            printf("%d %d ", a, b);
    }

    return 0;
}