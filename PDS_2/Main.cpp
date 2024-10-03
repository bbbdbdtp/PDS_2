#include <iostream>

using namespace std;

bool implication(bool p, bool q) {
    return !p || q;
}

bool fn(bool p, bool q, bool r) {
    return implication(p, q) || implication(p, r);
}

int main() {
    bool p, q, r;

    cout << "p\tq\tr\tfn(p, q, r) = ( !p || q ) || ( !p || r )\n";
    cout << "------------------------------------\n";

    for (int i = 0; i < 2; ++i) {
        p = i;
        for (int j = 0; j < 2; ++j) {
            q = j;
            for (int k = 0; k < 2; ++k) {
                r = k;
                bool result = fn(p, q, r);
                cout << p << "\t" << q << "\t" << r << "\t" << result << "\n";
            }
        }
    }

    return 0;
}