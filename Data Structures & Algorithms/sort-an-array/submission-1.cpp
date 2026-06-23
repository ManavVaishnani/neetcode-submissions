class Solution {
public:
    int partition(vector<int>&nums, int l, int r){
        int mid = (l + r) >> 1;
        swap(nums[mid], nums[l+1]);

        if(nums[l] > nums[r])
            swap(nums[l], nums[r]);
        if(nums[l + 1] > nums[r])
            swap(nums[l + 1], nums[r]);
        if(nums[l] > nums[l+1])
            swap(nums[l], nums[l + 1]);

        int pivot = nums[l + 1];
        int i = l + 1;
        int j = r;

        while(true){
            while(nums[++i] < pivot);
            while(nums[--j] > pivot);
            if(i > j ) break;
            swap(nums[i], nums[j]);
        }
        
        nums[l + 1] = nums[j];
        nums[j] = pivot;
        return j;
    }
    void quickSort(vector<int>& nums, int l, int r){
        if(r <= l + 1){
            if(r == l + 1 && nums[r] < nums[l])
                swap(nums[l], nums[r]);
                return;
        }

        int j = partition(nums, l, r);
        quickSort(nums, l, j - 1);
        quickSort(nums, j + 1, r);
    }
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }
};