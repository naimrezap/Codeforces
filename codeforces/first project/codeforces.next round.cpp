/*#include<bits/stdc++.h>
using namespace std;
int main()
{
  string arr;
  cin>>arr;
  int i,j,k;
  int size=arr.length();
  for ( i = 0; i < size; i ++)
    {
        for ( j = i + 1; j < size; j++)
        {

            if ( arr[i] == arr[j])
            {

                for ( k = j; k < size - 1; k++)
                {
                    arr[k] = arr [k + 1];
                }

                size--;


                j--;
            }
        }
    }


  int r=arr.length();
  cout<<r<<endl;
  if(r%2==0)
    cout<<"CHAT WITH HER!"<<endl;
  else
    cout<<"IGNORE HIM!"<<endl;
       return 0;
}*/
    #include <stdio.h>
    #include <conio.h>
    int main ()
    {
        // declare local variables
        int arr[20], i, j, k, size;

        printf (" Define the number of elements in an array: ");
        scanf (" %d", &size);

        printf (" \n Enter %d elements of an array: \n ", size);
        // use for loop to enter the elements one by one in an array
        for ( i = 0; i < size; i++)
        {
            scanf (" %d", &arr[i]);
        }


        // use nested for loop to find the duplicate elements in array
        for ( i = 0; i < size; i ++)
        {
            for ( j = i + 1; j < size; j++)
            {
                // use if statement to check duplicate element
                if ( arr[i] == arr[j])
                {
                    // delete the current position of the duplicate element
                    for ( k = j; k < size - 1; k++)
                    {
                        arr[k] = arr [k + 1];
                    }
                    // decrease the size of array after removing duplicate element
                    size--;

                // if the position of the elements is changes, don't increase the index j
                    j--;
                }
            }
        }


        /* display an array after deletion or removing of the duplicate elements */
        printf (" \n Array elements after deletion of the duplicate elements: ");

        // for loop to print the array
        for ( i = 0; i < size; i++)
        {
            printf (" %d \t", arr[i]);
        }
        return 0;
    }
