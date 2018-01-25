#include "Source.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
	system("color F0");
	string s;
	bool menu = 1;
	cout << "step B, base class: function_with_ one_ value, consists of value, but not initialised here and 2 'clean-virtual' function: value and derived, derived classes: arcsin, arccos, with defined virtual functions"<<endl;
	while (menu) {
		cout << "Input, please, input value for getting arcsin and arccos, everything what you will input, will transfer to a number, remember that for right value, expression should be <1&&>-1 " << endl;
		cin >> s;
		arcsin*a = new arcsin(stof(s));
		a->result();
		a->derivative();
		arccos*b = new arccos(stof(s));
		b->derivative();
		b->result();
		cout << "Continue(1/0)" << endl;
		cin >> s;
		s == "1" ? menu = 1 : menu = 0;
	}
	system("pause");
}