#pragma once
#include <iostream>
#include <string>
using namespace std;
namespace Func{
	template <typename A>
	A Fill(A value, string fill_field) {
		cout << "Enter "<< fill_field<<": " << endl;
		cin >> value;
		return value;
	};
	template <typename A>
	void Show(A value, string fill_field) {
		cout << fill_field << ": " << value<<endl;
	};
};