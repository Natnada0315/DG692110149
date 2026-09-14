#include <stdio.h>
#define MAX_LEN 200

int wordCount(const char *str)
{
    int count = 0, inWord = 0;
    while (*str)
    {
        if (*str == ' ' || *str == '\t' || *str == '\n')
        {
            inWord = 0;
        }
        else if (!inWord)
        {
            inWord = 1;
            count++;
        }
        str++;
    }
    return count;
}
int main(void)
{
    char text[MAX_LEN];
    printf("Enter text (spaces allowed): ");
    fgets(text, MAX_LEN, stdin); // fgets เป็นคำสั่งที่รับช้อความที่มีสเปซได้

    char *p = text;
    while (*p != '\0')
        p++;
    if (p != text && *(p - 1) == '\n') // p - 1 ขยับมาตรงตัวท้ายเช้คตัวท้าย
        *(p - 1) = '\0';
    printf("wordCount(\"%s\") = %d\n", text, wordCount(text));

    return 0;
}