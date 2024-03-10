class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        for(int i = 0; i < nums1.size(); i++){
            s.insert(nums1[i]);
        }
        vector<int> res;
        for(auto n: nums2){
            if((s.find(n)) != s.end() ){
                res.push_back(n);
                s.erase(n);
            }
        }
        return res;
    }
};