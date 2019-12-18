
#include<iostream>
#include<string>
#include<typeinfo.h>
using namespace std;

class Audio
{
	string name;
	string performer;
	int tracks;
	double price;
	bool newAudio;

public:
	Audio() {
		cout << "Enter name: ";							 cin >> this->name;
		cout << "Enter performer: ";					 cin >> this->performer;
		cout << "Enter tracks: ";						 cin >> this->tracks;
		cout << "Enter price: ";						 cin >> this->price;
		cout << "This audio is new?(0 - no, 1 - yes): "; cin >> this->newAudio;
		cout << endl;
	}
	Audio(string name, string performer, int tracks, double price, bool newAudio)
	{
		this->name = name;
		this->performer = performer;
		this->tracks = tracks;
		this->price = price;
		this->newAudio = newAudio;
	}

	void ShowInfo() {
		cout << "====================================================" << endl;
		cout << "Name: " << this->name << "\nPerformer: " << this->performer << "\nTracks: " << this->tracks
			<< "\nPrice: " << this->price << "\nNew: " << this->newAudio << endl;
	}

	int GetPrice() {
		return this->price;
	}

	~Audio() {

	}
};

class Book
{
	string name;
	string publisher;
	string author;
	double price;
	bool newBook;
public:
	Book() {
		cout << "Enter name: ";							 cin >> this->name;
		cout << "Enter publisher: ";					 cin >> this->publisher;
		cout << "Enter author: ";						 cin >> this->author;
		cout << "Enter price: ";						 cin >> this->price;
		cout << "This book is new?(0 - no, 1 - yes): ";  cin >> this->newBook;
		cout << endl;
	};
	Book(string name, string publisher, string author, double price, bool newBook)
	{
		this->name = name;
		this->publisher = publisher;
		this->author = author;
		this->price = price;
		this->newBook = newBook;
	}

	void ShowInfo() {
		cout << "====================================================" << endl;
		cout << "Name: " << this->name << "\nPublisher: " << this->publisher << "\nAuthor: " << this->author
			<< "\nPrice: " << this->price << "\nNew: " << this->newBook << endl;
	}

	int GetPrice() {
		return this->price;
	}

	~Book() {

	};
};

class Magazine
{
	string name;
	double price;
	bool newMagazine;

public:
	Magazine() {
		cout << "Enter name: ";								 cin >> this->name;
		cout << "Enter price: ";							 cin >> this->price;
		cout << "This magazine is new?(0 - no, 1 - yes): ";  cin >> this->newMagazine;
		cout << endl;
	};
	Magazine(string name, double price, bool newMagazine)
	{
		this->name = name;
		this->price = price;
		this->newMagazine = newMagazine;
	}

	void ShowInfo() {
		cout << endl;
		cout << "Name: " << this->name << "\nPrice: " << this->price << "\nNew: " << this->newMagazine << endl;
	}

	int GetPrice() {
		return this->price;
	}

	~Magazine() {

	};
};

template<typename T>
class CShop
{
	int size;
	T *arr;
public:
	CShop() {

	};
	CShop(int size) {
		this->size = size;
		this->arr = new T[this->size];

		for (int i = 0; i < this->size; i++) {
			arr[i];
		}
	};

	void ShowInfoAboutShop() {
		for (int i = 0; i < this->size; i++) {
			arr[i].ShowInfo();
		}
	}

	void SortMinToMax() {
		for (int i = this->size - 1; i > 1; i--) {
			for (int j = 0; j < i; j++) {
				if (arr[j].GetPrice() > arr[j + 1].GetPrice()) {
					swap(arr[j], arr[j + 1]);
				}
			}
		}
	}

	void SortMaxToMin() {
		for (int i = this->size - 1; i > 0; i--) {
			for (int j = 0; j < i; j++) {
				if (arr[j].GetPrice() < arr[j + 1].GetPrice()) {
					swap(arr[j], arr[j + 1]);
				}
			}
		}
	}

	void SearchMostexpensive() {
		int temp = 0;
		int index = 0;

		for (int i = 0; i < this->size; i++) {
			if (arr[i].GetPrice() > temp) {
				temp = arr[i].GetPrice();
				index = i;
			}
		}

		arr[index].ShowInfo();
	}

	void SearchCheapest() {
		int temp = arr[0].GetPrice();
		int index = 0;

		for (int i = 0; i < this->size; i++) {
			if (arr[i].GetPrice() < temp) {
				temp = arr[i].GetPrice();
				index = i;
			}
		}

		arr[index].ShowInfo();
	}

	void AveragePrice() {
		int avg = 0;

		for (int i = 0; i < this->size; i++) {
			avg += arr[i].GetPrice();
		}

		avg /= this->size;

		cout << "Avarage price: " << avg << endl;
	}

	~CShop() {
		arr = nullptr;
		delete[] arr;
	};
};

int main() {

	int size = 3;

	CShop<Magazine> a(size);
	a.ShowInfoAboutShop();

	cout << "===================================SORT (Min to max)=========================" << endl;
	a.SortMinToMax();
	a.ShowInfoAboutShop();

	cout << "===================================SORT (Max to min)=========================" << endl;
	a.SortMaxToMin();
	a.ShowInfoAboutShop();

	cout << "===================================The cheapest and most expensive=========================" << endl;
	a.SearchCheapest();
	a.SearchMostexpensive();

	cout << "===================================Average price=========================" << endl;
	a.AveragePrice();

	system("pause");
	return 0;
}