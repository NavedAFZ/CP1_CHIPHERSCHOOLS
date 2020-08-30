class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v1;
        if(nums1.size()==0)
            return v1;
        unordered_map<int,int>m1;
        stack<int>s;
        s.push(nums2[0]);
        for(int i=1;i<nums2.size();i++)
        {
            if(s.empty())
            {
                s.push(nums2[i]);
            }
            while(!s.empty() && s.top()<nums2[i])
            {
                m1[s.top()]=nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }
        while(!s.empty())
        {
            m1[s.top()]=-1;
            s.pop();
        }

        for(int i=0;i<nums1.size();i++)
        {
            v1.push_back(m1[nums1[i]]);
        }
        return v1;

    }
};
