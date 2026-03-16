#include <iostream>
#include <array>
const int SIZE = 10;
int main()
{
    std::array <double, SIZE> nums;
    double dob;
    int i = 0;
    float sum = 0;
    int num = 0;
    while (i < SIZE && std::cin >> dob)
    {
        nums[i] = dob;
        ++i;
        sum += dob;
        ++num;
    }
    std::cout << "The average: " << sum/num << std::endl;
    int count = 0;
    for (int j = 0; j < num; ++j)
    {
        if (nums[j] >= sum/num)
            {
                std::cout << nums[j] << std::endl;
                ++count;
            }
    }
    std::cout << count << " numbers larger than the average." << std::endl;
    return 0;
}