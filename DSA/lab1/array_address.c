#include <stdio.h>
int main() 
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("Array addresses arr[0][0]:%d\n", &arr[0][0]);
    printf("Array addresses arr[0][1]:%d\n", &arr[0][1]);
    return 0;
}