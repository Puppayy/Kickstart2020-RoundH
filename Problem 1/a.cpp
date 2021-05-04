#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        long long n, k, s;
        cin >> n >> k >> s;
        cout << "Case #" << i << ": " << min(k + n,(2 * k) + n - (2 * s)) << '\n';
    }
    return 0;
}