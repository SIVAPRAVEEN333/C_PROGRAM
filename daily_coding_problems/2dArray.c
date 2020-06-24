/*
This problem was asked by Amazon.

Given a N by M matrix of numbers, print out the matrix in a clockwise spiral.

For example, given the following matrix:

[[1,  2,  3,  4,  5],
 [6,  7,  8,  9,  10],
 [11, 12, 13, 14, 15],
 [16, 17, 18, 19, 20]]
You should print out the following:

1
2
3
4
5
10
15
20
19
18
17
16
11
6
7
8
9
14
13
12



*/





#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("Enter the number of rows and cloumns: ");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("\nEnter the values:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEntered array is: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\n",a[i][j]);
        }
    }
}
