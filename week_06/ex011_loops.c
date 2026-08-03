#include <stdio.h>
int main()
{
    // for-loop (รู้จำนวนที่แน่นอน)
    // for (int i = 1; i <= 10; i++)
    // {
    // printf("%d\n", i);
    // }

    // while-loop (เช็คก่อนค่อยรัน)
    // int i = 1;
    // while (i <= 10)
    //{
    // printf("%d\n", i);
    // i++;
    //}

    // do-while-loop (รันก่อนค่อยเช็ค)
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    return 0;
}
