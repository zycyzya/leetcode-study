#include <stdio.h>
int sum(int *nums,int size,int target){
	int res[2];
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(nums[i]+nums[j]==target){
				res[0]=i;
				res[1]=j;	
				break;
			}
		}
	}
	return res;
} 

