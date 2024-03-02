#include <iostream>
#include <vector>
 
void solve() {
    int n;
    std::cin >> n;
    if (n % 2 == 0) {
        std::cout << "1 3";
        for (int i = 1; i <= n - 2; ++i) {
            std::cout << " 2";
        }
        std::cout << std::endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            std::cout << "1 ";
        }
        std::cout << std::endl;
    }
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
 
    int testCases = 1;
    std::cin >> testCases;
    while (testCases--) 
        solve();
    return 0;
}

