#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(int a, int b) {
    a = a + b;
    b = a - b;
  	a = a - b;
    return {a, b};
}

int main() {
    int a, b;
    cin >> a >> b;
    vector<int> result = solution(a, b);
    cout << "[" << result[0] << "," << result[1] << "]" << endl;
    return 0;
}