#include <iostream>
#include <windows.h>

int main() {
    int count = 1000000;
    do {
        SetCursorPos(200, 200);
        SetCursorPos(300, 300);
        count--;
    } while (count >= 1);
}