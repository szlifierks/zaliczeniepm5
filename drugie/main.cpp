#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 2) return 1;

    vector<double> arr(n);
    for (double &x : arr) x = static_cast<double>(rand()) / RAND_MAX;

    auto first = max_element(arr.begin(), arr.end());
    *first = -1.0;
    auto second = max_element(arr.begin(), arr.end());

    cout << distance(arr.begin(), second) << " " << *second << endl;
    return 0;
}