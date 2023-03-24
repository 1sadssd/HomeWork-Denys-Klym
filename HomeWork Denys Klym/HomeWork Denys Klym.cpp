#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include<Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(NULL));

    vector<int> vec1(10);
    vector<int> vec2(10);

    for (int i = 0; i < 10; i++) {
        vec1[i] = rand() % 199 - 99;
        vec2[i] = rand() % 199 - 99;
    }

    vector<int> vec3(20);

    for (int i = 0; i < 10; i++) {
        vec3[i] = vec1[i];
        vec3[i + 10] = vec2[i];
    }

    cout << "Вектор 1: ";
    for (int i = 0; i < 10; i++) {
        cout << vec1[i] << " ";
    }
    cout << endl;

    cout << "Вектор 2: ";
    for (int i = 0; i < 10; i++) {
        cout << vec2[i] << " ";
    }
    cout << endl;

    cout << "Вектор 3: ";
    for (int i = 0; i < 20; i++) {
        cout << vec3[i] << " ";
    }
    cout << endl;

    return 0;
}