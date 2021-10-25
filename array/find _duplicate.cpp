#include <stdio.h>
#include<vector>

using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int N=1e5+2;
        vector<int> a(N,0);
        
        for(int i=0;i<nums.size();++i){
            a[nums[i]]++;
            if(a[nums[i]]==2){
                return nums[i];
            }
        }
        
        return 0;
    }
};