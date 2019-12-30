#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    for (int a = 1; a <= 16; a++) {
        for (int b = 1; b <= 16; b++) {
            printf("a = %d, b = %d ", a, b);
            if (a + b > 16) {
                printf("OVER\n");
                continue;
            }
            
            printf("%s\n", (min(a, b) * 2 + abs(a - b) * 2 <= 16 ? "Yay!" : ":)"));
        }
    }
}
