/*Delete an element in the array at what it index from the user and arra's size should derease after the deleting*/
#include<stdio.h>
void delet(int arr[], int *size,int index)
{
    for(int i= index;i<*size-1;i++)
    {
        arr[i] = arr[i+1];             //responsible for shifting the i+1 elements to the left after the number is deleted
    }
    (*size)--;
}
int main()
{
    int arr[] = {5,3,6,9,8,5};
    int size=6;
    int index;
 
    printf("At what index you want to delete it: \n");
    scanf("%d",&index);
    delet(arr,&size,index);
    printf("Array after Deleting the element is: ");
    for(int i = 0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}