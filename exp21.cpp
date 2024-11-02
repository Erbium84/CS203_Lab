#include <iostream>
using namespace std;


template <typename T>
void sortt(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


template <typename T>
void print(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int intArr[] = {5, 2, 9, 1, 5};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    cout << "Original integer array: ";
    print(intArr, intSize);
    sortt(intArr, intSize);
    cout << "Sorted integer array: ";
    print(intArr, intSize);


    float floatArr[] = {3.4f, 1.2f, 5.6f, 2.3f, 4.4f};
    int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);
    cout << "\nOriginal float array: ";
    print(floatArr, floatSize);
    sortt(floatArr, floatSize);
    cout << "Sorted float array: ";
    print(floatArr, floatSize);


    double doubleArr[] = {2.3, 1.1, 4.4, 3.3, 5.5};
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    cout << "\nOriginal double array: ";
    print(doubleArr, doubleSize);
    sortt(doubleArr, doubleSize);
    cout << "Sorted double array: ";
    print(doubleArr, doubleSize);


    char charArr[] = {'z', 'a', 'u', 'b', 'y'};
    int charSize = sizeof(charArr) / sizeof(charArr[0]);
    cout << "\nOriginal char array: ";
    print(charArr, charSize);
    sortt(charArr, charSize);
    cout << "Sorted char array: ";
    print(charArr, charSize);

    int* ptrArr = new int[5]{8, 3, 7, 1, 4};
    int ptrSize = 5;
    cout << "\nOriginal pointer-based integer array: ";
    print(ptrArr, ptrSize);
    sortt(ptrArr, ptrSize);
    cout << "Sorted pointer-based integer array: ";
    print(ptrArr, ptrSize);

    delete[] ptrArr; 

    return 0;
}
