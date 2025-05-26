#include<stdio.h>
int main(){
	int a[20],i,j,temp,num;
	printf("enter the no of array");
	scanf("%d",&num);
	printf("enter the elements of array");
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[num]);
	}
	for(i=0;i<num;i++){
		for(j=i+1;j<num;j++){
			if(a[j]>a[i]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	for(i=0;i<num;i++){
		if(i==1){
				printf("the second largest no is: %d", a[i]);
	}
	}
	return 0;
}
