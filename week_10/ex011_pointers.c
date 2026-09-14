#include <stdio.h>
int main()
{
    // บรรทัดที่ 5-7 ให้ใส่ค่า x
    int x;
    printf("x: ");
    scanf("%d", &x);

    int *ptr = &x; // ptr เก็บแอดเดสของ x
    printf("x = %d\n", x);

    // บรรทัด 10 - 11 ที่ออกมาเป็นค่าแปลก ๆ คือ เป็นชื่อที่เก็บข้อมูลข้างในมันเหมือนกันแต่ค่าแปลก ๆ มันคือชื่อ แอดเดส
    printf("&x = %p\n", (void *)&x); // &x แอดเดสของ x พวกตัวเลขแปกๆ
    printf("ptr = %p\n", (void *)ptr);

    printf("*ptr = %d\n", *ptr);

    *ptr = 100; // บรรทัดนี้คือเข้าไปเปลี่ยนค่าของptr ตรง ๆ เลยไม่ได้ชี้
    printf("x after modifying via pointer = %d\n", x);

    return 0;
}