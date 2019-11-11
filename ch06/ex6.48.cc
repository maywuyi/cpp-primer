#include <iostream>
#include <vector>

using namespace std;

void prVector(vector<int> vs, int idx) {

#ifdef NDEBUG
    cout << "SIZE: "<<vs.size() << endl;
#endif

    if (!vs.empty() && idx < vs.size()) {
        cout << vs[idx] << endl;
        prVector(vs, idx + 1);
    }
}

int main() {
    vector<int> vs = {1, 2, 3};
    prVector(vs, 0);
}