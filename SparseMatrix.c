#include<stdio.h>
#define base 100
int main()
{
    int O[base][base];
    int row,col,i,j;
    int sparse_count=0;
    int count=0;
    int sparse[base][3];
    printf("Enter the number of rows of the matrix:");
    scanf("%d",&row);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d",&col);
    printf("Enter the elements of the matrix:\n ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&O[i][j]);
            {
                if(O[i][j]==0)
                    sparse_count++;
            }
        }
        printf("\n");
    }
    if(sparse_count>=(row*col/2))
    {
        printf("The given matrix is a Sparse matrix with %d zeros out of %d total elements\n",sparse_count,row*col);
        printf("The Resulting sparse matrix:\n");
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(O[i][j]!=0)
                {
                    sparse[count][0]=i;
                    sparse[count][1]=j;
                    sparse[count][2]=O[i][j];
                     count++;
                }

            }
        }
        for(i=0;i<count;i++)
            printf("%d\t%d\t%d\n",sparse[i][0],sparse[i][1],sparse[i][2]);

   /* printf("The Transpose of the above matrix is\n");
     for(i=0;i<count;i++)
            printf("%d\t%d\t%d\n",sparse[0][i],sparse[1][i],sparse[2][i]);*/
    } 
    else
        printf("The given matrix is not a sparse matrix\n");
    return 0;
}
