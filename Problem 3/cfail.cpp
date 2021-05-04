#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

struct person{
    public:
    int x,y;
};

vector<person> sort(vector<person> l);



int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        
        vector<person> people;
        double avgX = 0, avgY = 0;

        for (int j = 0; j < N; j++) {
            person p;
            cin >> p.x >> p.y;
            people.push_back(p);
            avgX += p.x;
            avgY += p.y;
        }

        avgX = round(avgX/N);
        avgY = round(avgY/N);

        vector<person> nP;
        vector<person> pP;
        
        for(int j = 0; j < N; j++) {
            if (people[j].x - avgX >= 0) {
                pP.push_back(people[j]);
            } else {
                nP.push_back(people[j]);
            }
        }
        nP = sort(nP);
        pP = sort(pP);
        
        int x = avgX, steps = 0;
        for (int j = 0; j < pP.size(); j++) {
            steps += pP[i].x - x;
            steps += pP[i].y - avgY;
            x++;
        }

        x = avgX - 1;
        for(int j = 0; j<nP.size();j++) {
            steps += nP[i].x - x;
            steps += nP[i].y - avgY;
            x--;
        }

        cout << "Case #" << i << ": " << steps;
    }
    return 0;
}

//FINISH MERGE SORT
vector<person> sort(vector<person> l) {
    if (l.size() == 1) {
        return l;
    }

    //SPLICE VECTORS
    int m = (l.size()/2);
    
   

    vector<person> merge;

}