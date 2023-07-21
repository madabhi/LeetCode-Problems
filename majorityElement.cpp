#include <iostream>
#include <vector>

int majorityElement(std::vector<int> &nums)
{
    int count = 0;
    int candidate;

    for (int num : nums)
    {
        if (count == 0)
        {
            candidate = num;
        }

        count += (num == candidate) ? 1 : -1;
    }

    return candidate;
}

int main()
{
    std::vector<int> nums = {2, 2, 1, 1, 1, 1, 1};

    int majority = majorityElement(nums);
    std::cout << "The majority element is: " << majority << std::endl;

    return 0;
}
