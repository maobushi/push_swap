#include <stdio.h>
int main(void)
{
    long i = 1;
    long j;
    
    j = 1;
    i = 0;

    while(i < 5)
    {
        if((j<<i) & i-1)
            printf("i:%ld,j:%ld\n",i,j);
        i++;
    }
    
    return 0;
}


