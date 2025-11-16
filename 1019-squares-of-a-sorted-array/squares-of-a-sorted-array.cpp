class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     vector<int> res(nums.size());
     int lp = 0 , rp = nums.size()-1;
     int move=nums.size()-1;
     while(lp<=rp){
        if(abs(nums[lp])> abs(nums[rp])){
            res[move]=nums[lp]*nums[lp];
            lp++;
        } else{
            res[move]=nums[rp]*nums[rp];
            rp--;
        }
        move--;
     }
     return res;



        
    }
};