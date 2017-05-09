#include <stdio.h>
///#include <stdlib.h>

int main()
{
    int i,first,last,middle,searching,n,arrays[100];

    printf("Enter number of element \n");
    scanf("%d",&n);

    printf("Enter %d integers \n", n );

    for(i=0;i<n;i++)
        scanf("%d",&arrays[i]);

    printf("Enter values to find \n");
    scanf("%d",&searching);

    first = 0;
    last = n-1;
    middle = (first+last)/2;

    while(first <= last){
        if(arrays[middle] < searching){
            first = middle+1;
         }
         else if (arrays[middle] == searching){
            printf("%d found at location %d \n",searching,middle+1);
            break;
         }
         else{
            last = middle-1;
         }
          middle = (first+last)/2;

    }
    if(first > last )
        printf("not found! %d is not present in the list",searching);

        return 0;
}
