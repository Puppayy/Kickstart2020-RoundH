#include <iostream>
#include <math.h>

using namespace std;

struct person {
    long long x,y;
};

double avgX = 0, avgY = 0;

void sort(person n[], int s);

int main () {
    int T;
    cin >> T;

    for (int c = 1; c <= T; c++) {
        int N;
        cin >> N;

        person people[N];

        for (int i = 0; i < N; i++) {
            person a;
            cin >> a.x >> a.y;
            people[i] = a;
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
                steps += abs((avgX - people[i].x)) + abs((avgY - people[i].y));
            } else if (people[i].x < avgX) {
                steps += abs((nAvgX - people[i].x)) + abs((avgY - people[i].y));
                nAvgX--;
            } else {
                steps += abs((pAvgX - people[i].x)) + abs((avgY - people[i].y));
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
    int n1s = ceil(s/2);
    person n1[n1s];

    for (int i = 0; i < n1s; i++) {
        n1[i] = n[i];
    }

    sort(n1, n1s);

    int n2s = floor(s/2);
    person n2[n2s];

    for (int i = 0; i < n2s; i++) {
        n2[i] = n[i + n1s];
    }

    sort(n2, n2s);

    int i = 0, j = 0, k = 0;

    while (i < n1s && j < n2s) {
        double n1Distance = sqrt(pow(n1[i].x,2 - avgX) + pow(n1[i].y, 2 - avgY));
        double n2Distance = sqrt(pow(n2[j].x,2 - avgX) + pow(n2[j].y, 2 - avgY));
        if (n1Distance > n2Distance) {
            n[k] = n2[j];
            j++;
            k++;
        } else {
            n[k] = n1[i];
            i++;
            k++;
        } 
    }

    while (i < n1s) {
        n[k] = n1[i];
        i++;
        k++;
    }

    while (j < n2s) {
        n[k] = n2[j];
        j++;
        k++;
    }

    return;
}