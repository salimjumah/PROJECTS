#include <iostream>

using namespace std;

int main() {
    const char* items[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    const int size = sizeof(items) / sizeof(items[0]);

    for (int i = 0; i < size; ++i) {
        if (items[i][0] == 'B') {
            cout << items[i] << endl;
        }
    }

    return 0;
}
