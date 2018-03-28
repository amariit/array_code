#include<stdio.h>
int main(){
	int i,j,n,c;
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	int a[n],b[n];	
	printf("Enter the element in array : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//
	int m=a[0];
    for(c=1;c<n;c++ ) 
    {
        if(a[c]<m) 
        {
           m=a[c];
        }
    } 
	//
	int k=0,l,r;
	for(j=0;j<n;j++){
		int x=a[j];
			l=r=j;
		for(i=0;i<n;i++){
			if(x==m){
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
					b[k++]=a[r];
					break;
				}
			else{
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


 //input:- 8 2 4 5 1 6 0 3 2
//output:- 2 1 2 1 0 0 -1 0 0