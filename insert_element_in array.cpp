/*Insert an element in the array in input and index from the user*/
#include<stdio.h>
void insert(int arr[], int size,int index,int value)
{
    for(int i = size;i<index;--i)
    {
        arr[i] = arr[i-1];
    }
    arr[index] = value;
}
int main()
{
    int arr[6] = {5,3,6,9,8,5};
    int size = 6;
    int value;
    int index;
    printf("Enter the number you want to enter in the array");
    scanf("%d",&value);
    printf("At what index you want to insert it: ");
    scanf("%d",&index);
    insert(arr,size,index,value);
    for(int i = 0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}