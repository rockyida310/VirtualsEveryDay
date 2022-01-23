class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto &c:nums) mp[c]++;
        
        vector<int> res;;
        
        for(auto &c:mp){
            if(c.second==1){
                if(!mp.count(c.first-1) && !mp.count(c.first+1)) res.push_back(c.first);
            }
        }
        
        return res;
    }
};