#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 100;

int main() {
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    int myArray[SIZE]{};

    for (int i = 0; i < SIZE; ++i) {
        myArray[i] = rand() % 201 - 100;
    }

    const int LINE_OUTPUT = 10;
    int counter = 0;

    cout << "Исходный массив:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << myArray[i] << "\t";
        counter++;
        if (counter % LINE_OUTPUT == 0) {
            cout << endl;
        }
    }

    int positiveIndex = 0, zeroIndex = 0, negativeIndex = SIZE - 1;
    int temp;
    while (zeroIndex <= negativeIndex) {
        if (myArray[zeroIndex] < 0) {
            temp = myArray[zeroIndex];
            myArray[zeroIndex] = myArray[negativeIndex];
            myArray[negativeIndex] = temp;
            negativeIndex--;
        }
        else if (myArray[zeroIndex] == 0) {
            zeroIndex++;
        }
        else {
            temp = myArray[zeroIndex];
            myArray[zeroIndex] = myArray[positiveIndex];
            myArray[positiveIndex] = temp;
            zeroIndex++;
            positiveIndex++;
        }
    }

    cout << "\n\nМассив после переупорядочивания:\n";
    counter = 0; 
    for (int i = 0; i < SIZE; ++i) {
        cout << myArray[i] << "\t";
        counter++;
        if (counter % LINE_OUTPUT == 0) {
            cout << endl;
        }
    }
