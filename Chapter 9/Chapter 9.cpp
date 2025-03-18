#include <iostream>
#include <ctime>
#include <algorithm>
#include <random>

using namespace std;

class StopWatch {
private:
    clock_t startTime;
    clock_t endTime;

public:
    StopWatch() { startTime = clock(); }
    void start() { startTime = clock(); }
    void stop() { endTime = clock(); }
    double getElapsedTime() const {
        return (double)(endTime - startTime) / CLOCKS_PER_SEC * 1000;
    }
};

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    const int SIZE = 100000;
    int* numbers = new int[SIZE];

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0, 999999);

    for (int i = 0; i < SIZE; i++) {
        numbers[i] = dist(gen);
    }

    StopWatch stopwatch;
    stopwatch.start();
    selectionSort(numbers, SIZE);
    stopwatch.stop();

         << "Time taken to sort 100000 numbers using Selection Sort: "
        << stopwatch.getElapsedTime() << " milliseconds" << endl;

    delete[] numbers;
    return 0;
}
