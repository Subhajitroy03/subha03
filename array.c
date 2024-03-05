/*Given an array arr of n positive integers.
 The task is to swap every ith element of the array with (i+2)th element.
  eg -[1,5,8,7,6,8]
 1--8
 5--7
 8--6
 7--8
 */
 #include<stdio.h>
 int main(void){
 	int len;
 	
 	printf("Enter the length of array: ");
 	scanf("%d",&len);
 	int arr[len];
 	int i;
 	for (i=0;i<len;i++){
 		printf("Enter element %d: ",i+1);
 		scanf("%d",&arr[i]);
	}
	printf("\n");
	int j=0;
	for(j=0;j<(len-2);j++){
		int s=arr[j];
		arr[j]=arr[j+2];
		arr[j+2]=s;
	}
	for (i=0;i<len;i++){
 		printf("%d \t ",arr[i]);
	}
 	return 0;
}