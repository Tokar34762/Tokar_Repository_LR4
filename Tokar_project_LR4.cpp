#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <numeric> 
#include <map>
using namespace std;
// Глобальные переменные
int N; // Размер массива
vector<int> arr; // Массив целых чисел
// Функция ввода размера массива
void EnterArraySize() {
    cout << "Введите размер массива: ";
    cin >> N;
    arr.resize(N); // Изменяем размер вектора
}
// Функция для ввода значений элементов массива
void EnterArrayElements() {
    if (N <= 0) {
        cout << "Сначала введите размер массива." << endl;
        return;
    }
    cout << "Введите " << N << " элементов массива:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << "Элемент " << (i + 1) << ": ";
        cin >> arr[i];
    }
}
// Функция для вычисления суммы всех элементов массива
void CalculateSum() {
    
}
// Функция для нахождения среднего значения элементов массива
void CalculateAverage() {
    
}
// Структура меню
struct MenuItem {
    string title;
    function<void()> action;
};
int main() {
map<int, MenuItem> menu = {
        {1, {"Ввести размер массива", EnterArraySize}},
        {2, {"Ввести значения элементов массива", EnterArrayElements}},
        {3, {"Вычислить сумму всех элементов массива", CalculateSum}},
        {4, {"Вычислить среднее значение элементов массива", CalculateAverage}},
        {5, {"Выход", []() { cout << "© 2025 First Name LastName" << endl; exit(0); }}}
    };
    int choice = 0;
    while (true) {
        cout << "Меню:" << endl;
        for (const auto& item : menu) {
            cout << "Задача " << item.first << ". " << item.second.title << endl;
        }
        cout << "Введите ваш выбор: ";
        cin >> choice;
        if (menu.find(choice) != menu.end()) {
            menu[choice].action();
        } else {
            cout << "Некорректный ввод." << endl;
        }
        cout << endl;
    }
    return 0;
}
