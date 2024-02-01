#include<stdio.h>
#include<conio.h>

int main()
{
int N1=0,N2=0;
    printf("\n enter 1st no.=");
    scanf("%d",&N1);
    printf("\n enter 2nd no.=");
    scanf("%d",&N2);
    if(N1==N2)
    {
    printf("\n both no.are same");
    }
    else if(N1>N2)
    {
    printf("\n %d number is Max",N1);
    }
    
    else
    {
    printf ("\n %d number is Max",N2);
    }
    getch();
    return 0;
}
        