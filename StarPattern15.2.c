#include<stdio.h>
#include<conio.h>
int  main()
{
    int i,j,k=0,x=0,rows,n;
    printf("Enter No. of rows(Recommended Range 0 to 18) :- ");
    scanf("%d",&rows);
    n=(rows+1)/2;
    for(i=1;i<=rows;i++)
    {
        x=1;
        if(rows%2==0)
        {
            if(i<=rows/2) k++;
            if(i>rows/2 +1) k--;
        }
        else
            i<n+1?k++:k--;
        for(j=1;j<=n;j++)
        {
            if(j>=n+1-k)
            {
                printf("%d",x++);

            }
            else
                printf(" ");
        }
        printf("\n");
    }
}


