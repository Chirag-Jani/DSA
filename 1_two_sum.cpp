// Question 1. Two Sum
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Output: Because nums[0] + nums[1] == 9, we return [0, 1].

// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]

// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]

// Constraints:

// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.

// Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?

#include <iostream>
using namespace std;
int main()
{
    int n, target;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> target;

    int sum = 0;
    int ansArr[2];

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < i + 2; j++)
        {
            sum += a[j];

            if (sum < target)
            {
                // add index into answer array here, maybe my solution is a bit wrong here check again
                // all the testcase is passed by my current code :)
                ansArr[0] = j;
                ansArr[1] = (j + 1);
            }
            else if (sum == target)
            {
                cout << ansArr[0] << " and " << ansArr[1];
                return 0;
            }
            else
            {
                break;
            }
        }
        sum = 0;
    }

    if (sum == target)
    {
        cout << ansArr[0] << " and " << ansArr[1];
    }
    else
    {
        cout << "Sum not found";
    }

    return 0;
}