#include <stdio.h>
int main()
{
    int t[] = {10, 20, 30, 40, 50};
    int *p = t;
    int n = sizeof(t) / sizeof(t[0]);
    printf("%d\n", *p);
    printf("%d\n", *(p + 2));
    printf("%d\n", *(p + 4));
    for (; p < t + n; p++)
    {
        printf("%d\n", *p);
    }
    p = t + 3;
    puts("================");
    printf("%d\n", (*p)++);
    printf("%d\n", *(p-1));
    printf("%ld\n", (p - t));
    return 0;
}
