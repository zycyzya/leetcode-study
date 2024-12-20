int twosum(int *nums,int target,int size){
	for(int j=0,i=size-1;j<size;j++){
		while(i>j && nums[i-1]+nums[j]>=target){
			i--;
		}
		if(nums[i]+nums[j]==target) return {j+1,i+1};
		
	}
} 

