class Solution {
public:
    int countElements(vector<int>& nums) {
        set<int> s(begin(nums),end(nums));
        int cnt = 0;
        for(auto &c:nums){
            if(c!=*(s.begin()) && c!=*(--s.end())) ++cnt;
        }
        return cnt;
    }
};