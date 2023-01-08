#include <iostream>
#include <algorithm>
#include<array>

void foo(int *p, int len)
{
    return;
}

int main(void)
{
    std::array<int, 4> arr = {1,2,3,4};
    arr.empty();  // check if container is empty
    arr.size();   // return the size of the container

    // iterator
    for (auto &i : arr)
    {
        std::cout << arr[i] << "\n"; 
    }
    
    std::cout << std::endl;
    
    
    // use lambda expression for sort
    std::sort(arr.begin(), arr.end(), [](int a, int b){
        return b < a;
    });

    // array size must be constexpr
    constexpr int len = 4;
    std::array<int, len> arr_2 = {1,2,3,4};

    // illegal, different than C-style array, std::array will not deduce to T*
    // int *arr_p = arr; 
    
    std::array<int,4> arr_3 = {1,2,3,4};

    // C-stype parameter passing 
    // foo(arr, arr.size());    // illegal, cannot convert implicitly
    foo(&arr_3[0],arr.size()); 
    foo(arr_3.data(), arr_3.size());

    // use `std::sort`
    std::sort(arr_3.begin(), arr_3.end());

    return 0;
}
