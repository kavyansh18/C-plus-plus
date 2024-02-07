#include <iostream>
using namespace std;

int countWaysToBuy(int n, int a, int b, int c) {
    int ways = 0;

    for (int i = 0; i <= a; ++i) {
        for (int j = 0; j <= b; ++j) {
            for (int k = 0; k <= c; ++k) {
                int liters = i * 0.5 + j + k * 2;
                if (liters == n) {
                    ways++;
                }
            }
        }
    }

    return ways;
}

int main() {
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    int ways = countWaysToBuy(n, a, b, c);
    cout << ways << endl;

    return 0;
}
