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
    char string1[50], string2[50], string3[50], string4[50], s4[50];
    int a = 0, b = 1, c = 2, d = 3, e = 4;
    printf("Please Enter your string : ");
    scanf("%s %s %s %s", string1, string2, string3, string4);
    if (e > d)
    {
        printf("Result: %s", string4);
        if (e > c)
        {
            printf(" %s", string3);
            if (e > b)
            {
                printf(" %s", string2);
                if (e > a)
                {
                    printf(" %s", string1);
                }
            }
        }
    }
    else
    {
        printf("Error");
    }

    return 0;
}