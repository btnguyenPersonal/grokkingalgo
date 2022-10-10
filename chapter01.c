#include <stdio.h>

int binary_search(int guess, int* numbers, int len) {
    int low = 0;
    int high = len - 1;
    int location = (high + low) / 2;
    int steps = 0;
    while (low < high) {
        if (numbers[location] == guess) {
            printf("%4d found in index %4d steps: %2d\n", guess, location, steps);
            return 0;
        } else if (numbers[location] < guess) {
            low = location;
            location = (high + low) / 2 + 1;
        } else if (numbers[location] > guess) {
            high = location;
            location = (high + low) / 2;
        }
        steps++;
    }
    printf("%4d not found steps: %2d\n", guess, steps);
    return 1;
}

int main(int argc, char* argv[]) {
    int numbers[] = {
        00,
        05,
        11,
        15,
        16,
        22,
        25,
        26,
        27,
        29,
        45,
        50,
        57,
        67,
        68,
        69,
        70,
        80,
        90,
        99,
        100,
        105,
        111,
        115,
        116,
        122,
        125,
        126,
        127,
        129,
        145,
        150,
        157,
        167,
        168,
        169,
        170,
        180,
        190,
        199,
        200,
        205,
        211,
        215,
        216,
        222,
        225,
        226,
        227,
        229,
        245,
        250,
        257,
        267,
        268,
        269,
        270,
        280,
        290,
        299,
    };
    int len = sizeof(numbers) / sizeof(int);
    for (int i = 0; i < len; i++) {
        binary_search(numbers[i], numbers, len);
    }
}