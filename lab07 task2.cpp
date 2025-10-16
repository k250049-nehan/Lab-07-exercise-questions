#include <stdio.h>
int main() {
	int arr[10],i,n,count=0;
	for (i=0;i<10;i++){
		printf("Enter number %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Search for the number: ");
	scanf("%d",&n);
	
	for(i=0;i<10;i++){
		if(arr[i]==n){
			count++;
		}
	}
	if(count>=1){
	printf("The number %d is repeated %d times.",n,count);
	}
	else
	printf("Number not found");
	return 0;
}
