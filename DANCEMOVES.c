#include <stdio.h>

int main()
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int x,y,count=0;
        scanf("%d %d",&x,&y);
        while(x!=y)
        {
            if(x<y)
            {
                x=x+2;
                count++;
            }
            else if(x>y)
            {
                x=x-1;
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}


