/*Finding the pair with sum K (a+b = k)   (METHOD - 1)*/
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {6,3,8,10,16,7,5,2,9,14};
    int n = 10;
    int i,j,a,b,k;
    k = 10;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+ arr[j] == k )
            cout << arr[i] << " + " << arr[j] << " is equal to " << k << endl;
        }
    }
    return 0;
}

/*Finding the pair with Sum K (METHOD - 2) #Hashing*/
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {6,3,8,10,16,7,5,2,9,14};
    int i,j;
    int H[16] = {0};
    int k = 10;
    int n=10;
    for(i=0;i<n;i++)
    {
        if (k - arr[i] >= 0 && H[k - arr[i]] != 0)
        {
            cout<<arr[i]<<" + "<<k-arr[i]<<" is eqaul to "<<k<<endl;
        }
        H[arr[i]]++;
    }
    return 0;
}