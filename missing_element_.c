/*Finding the missing Element (METHOD 1)*/
#include<stdio.h>
int main()
{
  int arr[]={1,2,3,4,5,7,8,9,10};
  int s = 1;
  int n = 11;
  int l = 10;
  int i;
  int diff = s-0;
  for(i=0;i<n;i++)
  {
      if(arr[i]- i!= diff)
      {
          printf("%d is the Element: ",i+diff);
          break;
      }
  }
  return 0;
}

/*Finding the missing element   (METHOD 2)*/
#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,8,9,10,11,12};
    int sum =0;
    int n;
    int i,m;
    int s = 78;
    for(i=0;i<12;i++)
    {
        sum = sum + arr[i];
        printf("%d: is the sum\n",sum);
    }
    m = s-sum;
    printf("%d: is the missing number",m);
    return 0;
}