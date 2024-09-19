#include <cstdio>
#include <windows.h>
#include <string.h>

int main()
{
    int code;
    for(;true;)
    {
        printf("Show me your code,please.\n");
        scanf("%d",&code);
        if(code <= 999999 && code >= 0)
        {
            printf("I am super hacker!\n");
            Sleep(500);
            printf("Program will be closed in 2s.\n");
            Sleep(200);
            printf("2\n");
            Sleep(1000);
            printf("1\n");
            Sleep(1000);
            return 0;
        }
        else
        {
            printf("Fake code!\n");
            Sleep(200);
            printf("I will remember you forever!\n");
            Sleep(2000);
            return 0;
        }
    }
}