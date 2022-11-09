#include<stdio.h>
void main(){
	int a[50],b[50],c[50],i,j,n,n2;
	printf("Enter size of array1:");
	scanf("%d",&n);
	printf("Enter elemnts:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter size of array2:");
	scanf("%d",&n2);
	printf("Enter elemnts:");
	for(i=0;i<n2;i++){
		scanf("%d",&b[i]);
	}
	int m=0;
	int k=0;
	for(i=0;i<=(n+n2);i++){
	if(i%2!=0){
		c[i]=a[m];
		m++;
		}
	else{
		c[i]=b[k];
		k++;
	}
	
	}
	printf("Elemnts:");
	for(i=0;i<=(n+n2);i++){
		printf("%d \t",c[i]);
	}
	}
