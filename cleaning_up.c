#include <stdio.h>

int main() {
	int i,j,n,m,p,count=0,k=0,ch,assis;
	
	scanf("%d %d",&n,&m);
	int arr[m];
	int arr1[n];
	p = n-m;
	int arr2[p];
	printf("enter elements in array");
	
	for(i=0;i<m;i++){
	scanf("%d",&arr[i]);
	}
	printf("elements in array");
	for(i=0;i<m;i++){
	    printf("%d",arr[i]);
	}
	
	for(i=0;i<n;i++){
	    arr1[i] =  i+1;
	   
	    
	    printf(" %d ",arr1[i]);
	}
	for(i=0;i<n;i++){
	    count = 0;
	    for(j=0;j<m;j++){
	        if(arr1[i]==arr[j])
	        {
	            count = 1;
	        }
	        
	        
	           
	    }   
	    if(count == 0){
	        arr2[k] = arr1[i];
	        k = k+1;
	    }
	    
	}
	
	ch = p - (p/2);
	assis = p/2;
	
	int ar3[ch];
	int ar4[assis];
    k=0;j=0;
	
	for(i=0;i<p;i++){
	    
	    if(i%2==0){
	       // printf("%d",arr1[i]);
	        ar3[j] = arr2[i];
	        j = j+1;
	    }
	    else{
	       // printf("%d",arr1[i]);
	        ar4[k] = arr2[i];
	        k = k+1;
	    }
	}
	
	for(i =0;i<ch;i++){
	    printf("%d", ar3[i]);
	}
	
	return 0;
}


