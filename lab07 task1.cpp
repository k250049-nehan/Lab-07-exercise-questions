#include <stdio.h>
int main() {
	int arr[5], i, last;
	for(i=0;i<5;i++){
		printf("Enter number %d: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++) {
        printf("%d ",arr[i]);
}
	last=arr[4];
	
	for(i=4;i>0;i--){
		arr[i]=arr[i-1];
	}
	arr[0]=last;
	printf("\nOutput:\n");
    for(i=0;i<5;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
	return 0; 
}
