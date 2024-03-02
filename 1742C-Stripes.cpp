#include <iostream>
#include <string>

void solve() {
  bool isRed = false;
  for (int i = 0; i < 8; ++i) {
    std::string row;
    std::cin >> row;
    if (row == "RRRRRRRR")
      isRed = true;
  }
  if (isRed)
    std::cout << "R" << std::endl;
  else 
    std::cout << "B" << std::endl;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int testCases = 1;
  std::cin >> testCases;
  std::cin.ignore();
  while (testCases--)
    solve();

  return 0;
}
