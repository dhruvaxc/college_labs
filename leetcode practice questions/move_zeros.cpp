#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int>& nums)
    {
        int j = 0, n = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                nums[j] = nums[i];
                j++;
            }
            else
            {
                n++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            nums[j] = 0;
            j++;
        }
    }
};

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    vector<int> nums(size);
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    Solution s;
    s.moveZeroes(nums);

    cout << "Array after moving zeroes: ";
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}