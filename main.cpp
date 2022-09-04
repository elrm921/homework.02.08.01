#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "[IN]: ";

    vector<int> numbers = {1, 1, 2, 5, 6, 1, 2, 4};
    for (auto n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    std::sort(numbers.begin(),numbers.end(),std::less<int>());
    auto last = std::unique(numbers.begin(),numbers.end());
    numbers.erase(last,numbers.end());

    cout << "[OUT]: ";
    for (auto n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}