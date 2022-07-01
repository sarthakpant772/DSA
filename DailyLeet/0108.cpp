class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<pair<int,int>> p;
        

        for(int i=0;i<boxTypes.size();++i){
            p.push_back({boxTypes[i][1],boxTypes[i][0]});
        }
        sort(p.begin(),p.end());

        int count =0;
        int i=p.size()-1;
        int siz=0;
        while(siz<truckSize && i>=0){
            int pro= min(truckSize-siz,p[i].second);
            siz+=pro;
            count+=pro*p[i].first;
            // cout<<siz<<endl;
            i--;
        }
        return count;
    }
};