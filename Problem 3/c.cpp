#include <iostream>
#include <math.h>

using namespace std;

struct person {
    int x,y;
};

int main () {
    int T;
    cin >> T;

    while (T > 0) {
        int N;
        cin >> N;

        double avgX = 0, avgY = 0;
        for (int i = 0; i < N; i++) {
            person a;
            cin >> a.x >> a.y;
            avgX += a.x;
            avgY += a.y;
        }

        avgX = round(avgX/N);
        avgY = round(avgY/N);

        //Calculates midpoint

        T--;
    }
}
