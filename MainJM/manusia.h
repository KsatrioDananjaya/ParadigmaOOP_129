#pragma once
#ifndef MANUSIA_H
#define MANUSIA_H

#include <iostream>
using namespace std;

class manusia {
public:
	string name;
	jantung varJantung;

	manusia(string pName)
		: name(pName) {
		cout << name << "Hidup \n";
	}
	~manusia() {
		coutt << name << "Mati \n";
	}
};

#endif
