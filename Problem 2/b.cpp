#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool boring(long long *i);

int main() {
    int T;
    cin >> T;
    
    for(int i = 0; i < T; i++) {
        long long l, r;
        cin >> l >> r;
        int count = 0;
        for (long long j = l; j <= r; j ++) {
            long long a = j;
            if (boring(&a) == true) {
                count++;
            }
        }
        cout << "Case #" << i + 1 << ": " << count << '\n';
    }
}


bool boring(long long *i) {
    // cout << *i << " ";
    long long j = 10;
    vector<int> g;
    do {
        g.push_back((*i % j)/(j/10));
        if ((*i - j) < 0) {
            break;
        } else {
            *i -= (*i % j);
            j *= 10;
        }
    } while (true);

    //Reverses vector
    reverse(g.begin(),g.end());
    
    //Check even and odd digits
    int c = 0;
    for (int a = 0; a < g.size(); a++) {
        // cout << g[a] << "\n";
        if (a % 2 == 0 && g[a] % 2 == 1) {
            c++;
        } else if (a % 2 == 1 && g[a] % 2 == 0) {
            c++;
        }
    }
    // cout << "c: "<<c << '\n';
    if (c == g.size()) {
        return true;
    } else {
        return false;
    }
}