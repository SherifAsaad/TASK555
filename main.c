#include <stdio.h>
#include <stdlib.h>
// assignment 5
// arrays
int main()
{
   int arr_1[5];

   printf("Enter the Array Elements Value \n");

   for(int i=0 ; i<5 ; i++)
    {
   scanf("%d",& arr_1[i]);
   }

   printf("The arr_1 elements \n");

   for(int i=0;i<5;i++)
   {
        printf("   %d     " , arr_1[i]);
   }
   // Sort elements of array in ascending order
   int k ;
   int temp = 0 ;
   int i=0;
   for( i=0 ; i<5 ; i++ )
   {
       for( k=i+1 ; k<5 ; k++)
       {
          if(arr_1[i] > arr_1[k])
            {
                temp = arr_1[i];
          arr_1[i] = arr_1[k];
          arr_1[k] = temp;
            }
       }
   }
   printf("\n");

   printf("Elements of array sorted in ascending order: \n");

    for (int i = 0; i<5 ; i++)
        {
        printf("%d ", arr_1[i]);
    }
    return 0;
}
