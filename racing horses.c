#include <stdio.h>

void swap(int *xp, int *yp)
        {
            int temp = *xp;
            *xp = *yp;
            *yp = temp;
        }
        
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
 
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
        
int main(){
	int i,n,temp,min,diff;
	
	    
	    printf("enter size of array");
	    scanf("%d",&n);
	    int arr[n];
	    printf("enter %d elements in array",n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d ",&arr[i]);
	    }
	    
	    bubbleSort(arr, n);
	    min=arr[1] - arr[0];
	        for(i=2;i<n;i++)
	        {
	            diff=arr[i] - arr[i-1];
	            
	            if(diff<min)
	            {
	                min = diff;
	                
	            }
	            
	        }
	        
	        printf("%d",min);
	    
	
	return 0;
}
