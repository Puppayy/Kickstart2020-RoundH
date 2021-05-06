#include <iostream>
#include <math.h>

using namespace std;

struct person {
    int x,y;
};

void sort(person n[], int s);

int main () {
    int T;
    cin >> T;

    for (int c = 1; c <= T; c++) {
        int N;
        cin >> N;

        double avgX = 0, avgY = 0;

        person people[N];

        for (int i = 0; i < N; i++) {
            person a;
            cin >> a.x >> a.y;
            people[N] = a;
            avgX += a.x;
            avgY += a.y;
        }
        
        //Calculates Midpoint
        avgX = round(avgX/N);
        avgY = round(avgY/N);

        sort(people, N);

        int steps = 0;
        int nAvgX = avgX - 1, pAvgX = avgX + 1;
        for (int i = 0; i < N; i++) {
            if (i == 0) {
                steps += (avgX - people[i].x) + (avgY - people[i].y);
            } else if (people[i].x < avgX) {
                steps += (nAvgX - people[i].x) + (avgY - people[i].y);
                nAvgX--;
            } else {
                steps += (pAvgX - people[i].x) + (avgY - people[i].y);
                pAvgX++;
            }
        }

        cout << "Case #" << c << ": " << steps << '\n';
    }
    return 1;
}


void sort(person n[], int s) {
    //Returns Base Case
    if (s == 1) {
        return;
    }

    //Sorts sub arrays
    

}