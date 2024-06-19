#include<stdio.h>
int main()
{
    int i=0;
    for(i=0; i<20; i++)
    {
        switch(i)
        {
            case 0:
                i+=4;
            case 1:
                i+=2;
            case 5:
                i+=6;
                break;
            default:
                i+=3;
                break;
        }
        printf("%d ", i);
    }
    return 0;
}