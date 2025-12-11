#include "libery.h"
#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include <fstream>
using namespace std;
void saveBook(const string& filename, const vector<Availablebook>& books) {
	ofstream file(filename);
	if (file.is_open()) {
		for (const auto& book : books) {
			file << book.name << endl;
		}
		cout << "Файл сохранен\n";
		file.close();
	}
	else {
		cout << "Ошибка открытия файла\n";
	}
}

vector<Availablebook> readAvailablebook(const string& filename) {
	vector<Availablebook> books;
	ifstream file(filename);
	if (file.is_open()) {
		string line;
		while (getline(file, line)) {
			Availablebook book;
			book.name = line;
			books.push_back(book);
		}
		file.close();
	}
	return books;
}
void Books::name_book() {

	avtors Dostoevskyu = { "Достоевский", {{"Братья Карамазовы"},{"Преступление и наказание",},{"Бесы",}} };
	cout << Dostoevskyu.name << ":  ";
	for (int i = 0; i < Dostoevskyu.books.size(); i++) {
		cout << Dostoevskyu.books[i].name;
		if (i != Dostoevskyu.books.size() - 1)
		{
			cout << ",  ";
		}
	}cout << endl;
}
void Books1::name_book1() {

	avtors Gogol = { "Гоголь", {{"Мертвые души"},{"Тарас и Бульба",}} };
	cout << Gogol.name << ":  ";
	for (int i = 0; i < Gogol.books.size(); i++) {
		cout << Gogol.books[i].name;
		if (i != Gogol.books.size() - 1)
		{
			cout << ",  ";
		}
	}
}
void bibleoteka::my_bibleoteka() {
	cout << "1-Книги \n";
	cout << "2-Журналы \n";
	cout << "3-Электронные книги\n";
	cout << "Выберите форматы из предложенных: ";
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Вы выбрали :Книги.\n\n";
		break;
	case 2:
		cout << "Вы выбрали: Журналы\n\n";
		break;
	case 3:
		cout << "Вы выбрали: Электронные книги\n\n";
		break;
	}
	if (a == 1) {
		cout << "=================авторы и их книги==================\n\n";
		Books b;
		b.name_book();

		Books1 b1;
		b1.name_book1();

		avtors Dostoevskyu = { "Достоевский", {{"Братья Карамазовы"},{"Преступление и наказание",},{"Бесы",}} }; cout << endl;
		avtors Gogol = { "Гоголь", {{"Мертвые души"},{"Тарас и Бульба",}} }; cout << endl;
		cout << "Выберите авторы(1-Достоевский, 2-Гоголь): "; cout << endl;
		Dostoevskyu.name = 1;
		Gogol.name = 2;
		int c;
		cin >> c;
		if (c == 1) {
			cout << "Вы выбрали Достоевского, выберите книгу: ";
		}
		else {
			cout << "Вы выбрали Гоголя, выберите книгу: ";
		}
	}
}