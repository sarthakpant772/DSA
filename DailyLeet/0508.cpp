class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        set<int> s;
        if(arr.size()==0){
            return 0;
        }
        for(int i=0;i<arr.size();++i){
            s.insert(arr[i]);
        }
        int currMax=1;
        int totalMax=0;

        vector<int> ans;
        for(auto it : s){
            ans.push_back(it);
        }
        
        for(int i=1;i<ans.size();++i){
            if(ans[i]==ans[i-1]+1){
                currMax++;
            }
            else{
                totalMax=max(currMax,totalMax);
                currMax=1;
            }
        }
        totalMax=max(totalMax,currMax);
        return totalMax; 
    }
};