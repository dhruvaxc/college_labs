#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> numsc = nums;
        for (int i = 0; i < nums.size(); i++) {
            nums[(i + k) % numsc.size()] = numsc[i];
        }
    }
};

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter rotation value k: ";
    cin >> k;

    Solution sol;
    sol.rotate(nums, k);

    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}