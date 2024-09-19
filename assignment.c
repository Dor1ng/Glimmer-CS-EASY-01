#include <stdio.h>

int main()
{
    int nb1,nb2;
    printf("输入一个正整数\n");
    scanf("%d",&nb1);
    for (;;)
    {
        if(nb1 <= 0)
        {
            printf(" 请重新输入\n");
            scanf("%d",&nb1);
        }
        else
        {
            break;
        }
    }
    printf("输入第二个整数\n");
    scanf("%d",&nb2);
    int r = nb1 % nb2;
    while (1 > 0)
    {
        if (r == 0)
        {
            if (nb1 >= nb2)
            {
                printf("两者的最大公约数为%d",nb2);
                Sleep(3000);
                return 0;
            }
            else{
                printf("两者的最大公约数为%d",nb1);
                Sleep(3000);
                return 0;
            }
        }
        else
        {
            nb1 = nb2;
            nb2 = r;
            r = nb1 % nb2;
        }

    }
}