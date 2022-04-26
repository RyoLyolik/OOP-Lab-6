#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include "sorts.h"
using namespace std;

int main() {
    srand(time(nullptr));
    SetConsoleOutputCP(CP_UTF8);
    int n;
    cout << "Введите размер массива:\n";
    if (!(cin >> n) || getchar() != '\n')
    {
        cout << "Input error";
        return 0;
    }
    if (n<=0)
    {
        cout << "Input error";
        return 0;
    }
    int* array = new int[n];
    cout << "Исходный целочисленный массив:\n";
    for (int i = 0; i < n; i++)
    {
        array[i] = (rand()%201)-100;
        cout << array[i] << ' ';
    }
    bubble_sort(n, array);
    cout << "\nОтсортированный целочисленный массив:\n";
    for (int i = 0; i< n; i++)
    {
        cout << array[i] << ' ';
    }
    cout << "\nИсходный дробный массив:\n";
    double* array_d = new double[n];
    for (int i = 0; i < n; i++)
    {
        double r = ((rand()%201)-100);
        if (r == 0) r = 0.01;
        array_d[i] = 1.0/r*100;
        cout << array_d[i] << ' ';
    }
    bubble_sort(n, array_d);
    cout << "\nОтсортированный дробный массив:\n";
    for (int i = 0; i < n; i++)
    {
        cout << array_d[i] << ' ';
    }
    return 0;
}
