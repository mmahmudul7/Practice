#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if(tk >= 5000)
    {
        printf("Cox's Bazar Jabo.");

        if(tk >= 10000)
        {
            printf("\nEr por. Saint Martin jabo.");
        }
        else
        {
            printf("\nCox's Bazar thekey chole asbo Saint Martin jabo na.");
        }
    }
    else
    {
        printf("khothaw jabo na.");
    }
    return 0;
}