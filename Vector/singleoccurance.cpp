#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {2, 2, 3, 1, 1};

    int ans = 0;
    for (int x : v) {
        ans ^= x;
    }

    cout << "Single occurrence element: " << ans;

    return 0;
}