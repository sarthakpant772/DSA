class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
      
        if(nums.size()<2){
            return nums.size();
        }
        
        int prevSum = nums[1]-nums[0];
        int count = prevSum!=0?2:1;
        
        for(int i=2;i<nums.size();++i){
            int diff=nums[i]-nums[i-1];
            if((diff>0 and prevSum<=0) || (diff<0 and prevSum>=0)){
                count++;
                prevSum=diff;
            }
                
                
        }
        return count;
    }
};