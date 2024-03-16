#include <iostream>
using namespace std;

int calculate_equation(int X, int N) {
    int result = 0;
    int power = 0;
    while (N >= power) {
        result += pow(X, power);
        power += 2;
    }
    return result;
}

int main() {
    int X, N;
    cin >> X >> N;

    cout << calculate_equation(X, N) << endl;

    return 0;
}
