#include "lib0594.h"

double average(int scores[], int N) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += scores[i];
    }
    return static_cast<double>(sum) / N;
}