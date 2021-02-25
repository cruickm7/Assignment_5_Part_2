#include <iostream>
#include <cstdio>
#include <time.h>
using namespace std;
template<typename type>void sort(type* arr);
template<typename type1, typename type2>void copy(type1* arr1, type2* arr2);
template<typename type>void generate(type* arr);
template<typename type>void show(type* arr);
const int l = 5;
int main() {
    int iarr[l];
    float farr[l];
    generate(iarr);
    generate(farr);
    printf("\nInt array:\n");
    show(iarr);
    sort(iarr);

    printf("\nSorted int array:\n");
    show(iarr);

    printf("\nFloat array:\n");
    show(farr);

    printf("\nSorted float array:\n");
    sort(farr);
    show(farr);

    printf("\nInt array copied to float array:\n");
    copy(farr, iarr);
    show(farr);
    return 0;
}
template<typename type>void sort(type* arr) {
    int i, j;
    for (i = 0; i < l; i++) {
        for (j = 0; j < l - i - 1; j++) {
            if (arr[j] > arr[j + 1])swap(arr[j], arr[j + 1]);
        }
    }
}
template<typename type1, typename type2>void copy(type1* arr1, type2* arr2) {
    for (int i = 0; i < l; i++) arr1[i] = arr2[i];
}
template<typename type>void generate(type* arr) {
    srand(time(0));
    for (int i = 0; i < l; i++) arr[i] = rand() * 0.001;
}
template<typename type>void show(type* arr) {
    for (int i = 0; i < l; i++) cout << "arr[" << i << "] = " << arr[i] << endl;
}
