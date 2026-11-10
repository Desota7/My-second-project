#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <clocale>

using namespace std;

// ===== Структура книги =====
struct Book {
    string title;     // название
    string author;    // автор
    int year;         // год издания
    string isbn;      // уникальный номер
    bool available;   // true = на полке, false = выдана
    string holder;    // кому выдана (пусто, если на полке)
};

// ===== Хранилище =====
vector<Book> library;

// ===== Меню =====
void printMenu() {
    cout << "\n===== БИБЛИОТЕКА =====\n";
    cout << "1. Добавить книгу\n";
    cout << "2. Показать все книги\n";
    cout << "3. Найти книгу\n";
    cout << "4. Выдать книгу\n";
    cout << "5. Вернуть книгу\n";
    cout << "6. Удалить книгу\n";
    cout << "0. Выход\n";
    cout << "Ваш выбор: ";
}

int main() {
    setlocale(LC_ALL, "Russian");

    int choice;
    do {
        printMenu();
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
        case 1: cout << "Заглушка: добавить книгу\n";   break;
        case 2: cout << "Заглушка: показать книги\n";  break;
        case 3: cout << "Заглушка: найти книгу\n";     break;
        case 4: cout << "Заглушка: выдать книгу\n";    break;
        case 5: cout << "Заглушка: вернуть книгу\n";   break;
        case 6: cout << "Заглушка: удалить книгу\n";   break;
        case 0: cout << "До свидания!\n";              break;
        default: cout << "Нет такого пункта.\n";
        }
    } while (choice != 0);

    return 0;
}
