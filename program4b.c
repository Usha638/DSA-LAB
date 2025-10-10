#include <stdio.h>
#include <stdlib.h>

void TOH(int n,char s,char d,char t)
{
    if(n==1){
        printf("Move disc %d from %c->%c\n",s,d);
        return;
    }
    TOH(n-1,s,d,t);
    printf("Move disc %d from %c->%c\n",n,s,d);
    TOH(n-1,t,s,d);
}
int main()
{
    int n;
    printf("\nEnter number of discs:");
    scanf("%d",&n);
    printf("\nSequence of moves:\n");
    TOH(n,'s','t','d');
    int totalMoves=(1<<n)-1;
    printf("\nTotal number of moves=%d\n",totalMoves);
    return 0;
}
