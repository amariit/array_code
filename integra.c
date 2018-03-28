#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,n,c;
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	int a[n],b[n];	
	printf("Enter the element in array : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//finding the minimum element from array
	int m=a[0];
    	for(c=1;c<n;c++ ) 
    	{
        	if(a[c]<m) 
        	{
           		m=a[c];
        	}
    	}	 
	//finding the nearest number from
	int k=0,l,r;
	for(j=0;j<n;j++){
		int x=a[j];
			l=r=j;
		for(i=0;i<n;i++){
			if(x==m){
				//if the number is equal to array value then we repplace it with -1
				b[k++]=-1;
				break;
				//printf("%d ",b[i]);
			}
			if(l!=0){
				l--;
			}
			if(r!=n-1){
				r++;
			}
			if(x<=a[l] && x<=a[r]){
				continue;
			}
			else{
				if(a[l]>a[r]){
					//replacing the nearest minimum value in another array
					b[k++]=a[r];
					break;
				}
			else{
					//replacing the nearest minimum value in another array 
					b[k++]=a[l];
					break;
				}
			}
			
		}
	}
	printf("\nFinal output is : \n");
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
}


 //input:- 5 2 4 6 1 2 5
//output:- 2 1 2 1 -1 1 2
