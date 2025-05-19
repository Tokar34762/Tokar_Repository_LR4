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
    
}
// Функция для ввода значений элементов массива
void EnterArrayElements() {
    
}
// Функция для вычисления суммы всех элементов массива
void CalculateSum() {
    
}
// Функция для нахождения среднего значения элементов массива
void CalculateAverage() {
    if (N <= 0) {
        cout << "Сначала введите размер массива." << endl;
        return;
    }
    double average = static_cast<double>(accumulate(arr.begin(), arr.end(), 0)) / N;
    cout << "Среднее значение элементов массива: " << average << endl;
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
