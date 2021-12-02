//this program is made by ishmeet
//this program reverses an array
#include<stdio.h>
void main()
{ 
    int arr[100],n,i;
    printf("enter the space\n");
    scanf("%d",&n);
         printf("enter the array\n");
            for(i=0;i<n;i++)
                scanf("%d",&arr[i]);
          int b=0,l=n-1;
                while(b<l)
                        {  int swap =arr[b];
                           arr[b]=arr[l];
                           arr[l]=swap;
                           b++;
                           l--;
                        }
        printf("the reversed array\n");            
            for(i=0;i<n;i++) 
              printf("%d\n",arr[i]);         

	 
}
