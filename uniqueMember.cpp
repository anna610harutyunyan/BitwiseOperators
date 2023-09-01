#include <iostream>
#include <vector>

int check_unique(std::vector<int>& samp) {
    int result = 0;

    for (const int& num : samp) {
        result ^= num;
    }
    if (result == 0)
    {
        std::cout << "There is no unique element \n";
        
        return -1;
    }

    return result;
}

int main(int argc, char** argv) {
    std::vector<int> vec = { 15, 20, 35, 25, 50, 1, 20, 35, 15, 25, 50,1,100 };

    int uniqueElement = check_unique(vec);
    std::cout << "The unique number  in our vector is: " << uniqueElement << std::endl;

    return 0;
}