#include <iostream>
using namespace std;
int calculateLowest(int arr[], int size) {
    int lowest = arr[0];

    for(int i = 1; i < size; i++) {
        if(arr[i] < lowest) {
            lowest = arr[i];
        }
    }

    return lowest;
}

int calculateHighest(int arr[], int size) {
    int highest = arr[0];

    for(int i = 1; i < size; i++) {
        if(arr[i] > highest) {
            highest = arr[i];
        }
    }

    return highest;
}

int main() {
    int N;
    cin >> N;

    int marks[100];
    for(int i = 0; i < N; i++) {
        cin >> marks[i];
    }

    int low = calculateLowest(marks, N);
    int high = calculateHighest(marks, N);

    cout << "Lowest score: " << low << endl;
    cout << "Highest score: " << high;

    return 0;
}