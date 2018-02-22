class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> nums3;
    nums3.insert(nums3.end(),nums1.begin(),nums1.end());
    nums3.insert(nums3.end(),nums2.begin(),nums2.end());
    sort(nums3.begin(),nums3.end());
    int length = nums3.size();
    if(length % 2 == 0) {
        return ((double)nums3[length / 2] + (double)nums3[length / 2 - 1]) / 2;
    } else {
        return  (double)nums3[(length - 1) / 2];
    }
}
};
