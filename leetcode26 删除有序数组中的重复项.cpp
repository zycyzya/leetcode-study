#include <stdio.h>
int remove(int *nums){
	if(nums==NULL) return 0;
	int j=1;
	int size=sizeof(nums)/sizeof(nums[0]); 
	for(int i=1;i<size;i++){
		if(nums[i]!=nums[i-1]){
			nums[j]=nums[i];
			j++;
		}
	}
	return j;
}

