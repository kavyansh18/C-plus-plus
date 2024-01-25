#include <iostream>
using namespace std;

class student {
public:
  int a, b;

  void add() { cout << a + b; }
};

int main() {
  student k;
  cout << "Enter a and b" << endl;
  cin >> k.a >> k.b;
  k.add();
  return 0;
}