#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        if (prices.size() < 2)
            return 0;

        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            int profit = prices[i] - minPrice;
            if (profit > maxProfit)
                maxProfit = profit;
            if (prices[i] < minPrice)
                minPrice = prices[i];
        }
        return maxProfit;
    }
};

int main()
{
    int n;
    cout << "Enter number of digits: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter the digits: ";
    for (int i = 0; i < n; i++)
        cin >> prices[i];

    Solution sol;
    cout << "Maximum profit is: " << sol.maxProfit(prices) << endl;

    return 0;
}