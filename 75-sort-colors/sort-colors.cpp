class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0, j= nums.size()-1,k=0;
        while(k<=j){
            if(nums[k]==1){
                k++;
            } else if(nums[k]==2){
                int tmp =nums[j];
                nums[j]=nums[k];
                nums[k]=tmp;
                j--;
            }
            else {
                int tmp =nums[i];
                nums[i]=nums[k];
                nums[k]=tmp;
                i++,k++;
            }
        }
        
    }
};