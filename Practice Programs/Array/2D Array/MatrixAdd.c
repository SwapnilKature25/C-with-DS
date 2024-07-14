
int main()
{
    int a[10][10],b[10][10],r,c,nr,nc;
    printf("Enter no of rows and cols ");
    scanf("%d%d",&nr,&nc),
    printf("Enter %d elements for first matrix\n",nr*nc);
    for(r=0; r<nr; r++)
    {
        for(c=0; c<nc; c++)
        {
            printf("element - [%d],[%d] : ",r,c);
            scanf("%d",&a[r][c]);
        }
    }
    printf("Enter %d elements for second matrix\n",nr*nc);
    for(r=0; r<nr; r++)
    {
        for(c=0; c<nc; c++)
        {
            printf("element - [%d],[%d] : ",r,c);
            scanf("%d",&b[r][c]);
        }
    }

    for(r=0; r<nr; r++)
    {
        for(c=0; c<nc; c++)
        {
            int s=a[r][c]+b[r][c];
            printf("%d",s);
        }

    }


}