#include <iostream>
#include <math.h>

using namespace std;

struct person {
    public:
        int x,y;
};

void sort(person l, int s);

int main () {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        person people[N];

        double avgX = 0, avgY = 0;

        for (int j = 0; j < N; j++) {
            person p;
            cin >> p.x;
            avgX += p.x;
            cin >> p.y;
            avgY += p.y;
            people[j] = p;
        }
        
        avgX = round(avgX/N);
        avgY = round(avgY/N);

        
        
    }
}