#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    if (n == 1 || m == 1) {
        cout << n * m << "\n";
    } else {
        long long border = 2 * n + 2 * m - 4;
        long long inner = ((n - 2) * (m - 2)) / 2;
        cout << border + inner << "\n";
    }

    return 0;
}
