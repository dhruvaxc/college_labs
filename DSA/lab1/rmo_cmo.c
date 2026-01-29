#include <stdio.h>
int main() 
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {    
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int size=sizeof(int);
    unsigned long base=(unsigned long)&arr[0][0];
    int i,j;
    printf("Enter row and column index (0-2): ");
    scanf("%d %d",&i,&j);
    unsigned long addr_rmo=base+((i*3)+j)*size;
    unsigned long addr_cmo=base+((j*3)+i)*size;
    unsigned long actual=(unsigned long)&arr[i][j];
    printf("Base Address: %lu\n",base);
    printf("Row-Major Calculated: %lu\n",addr_rmo);
    printf("Column-Major Calculated: %lu\n",addr_cmo);
    printf("Actual Address: %lu\n",actual);
    return 0;
}