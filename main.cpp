#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int homework_lira(string a, string c) {
    int b = stoi(a);
    int d = stoi(c);
    b = b + d;
    return b;
}

int main() {
    int x = homework_lira("37", "29");
    cout << x << endl;
    // "37", "29" 를 int 타입으로 바꿔서 더한 값을 구하시오

    return 0;
}