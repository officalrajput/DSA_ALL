#include <iostream>
#include <vector>
using namespace std;
void printSubArray(vector<int> &nums, int start, int end)
{
    // base case
    if (end >= nums.size())
    {
        return;
    }

    // ek case solve kr do baki recursion sambhal le ga

    for (int i = start; i <= end; i++)
    {
        cout << nums[i]<<" ";
    }
    cout << endl;

    // recursive call or recursive relation
    printSubArray(nums, start, end + 1);
}
void subarrayUtils(vector<int> &nums)
{
    for (int start = 0; start < nums.size(); start++)
    {
        int end = start;
        printSubArray(nums, start, end);
    }
}
int main()
{
    vector<int> nums{1, 2, 3, 4, 5};
    int start = 0;
    int end = 0;
    printSubArray(nums, start, end);
    subarrayUtils(nums);
}
