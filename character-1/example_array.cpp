#include <iostream>
#include <algorithm>
#include<array>

int main(void)
{
    std::array<int, 4> arr = {1,2,3,4};
    arr.empty(); // check if container is empty
    arr.size(); // return the size of the container

    // iterator
    for (auto &i : arr)
    {
        // ...
    }

    // use lambda expression for sort
    std::sort(arr.begin(), arr.end(), [](int a, int b){
        return b < a;
    });

    // array size must be constexpr
    constexpr int len = 4;
    std::array<int, len> arr_2 = {1,2,3,4};

    // illegal, different than C-style array, std::array will not deduce to T*
    // int *arr_p = arr; 
    return 0;
}
