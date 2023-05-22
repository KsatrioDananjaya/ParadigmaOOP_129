#pragma once
#ifndef JANTUNG_H
#define JANTUNG_H

#using <iostream>
using namespace std;

class jantung {
public:
	jantung() {
		cout << "Jantung dihidupkan \n";
	}
	~jantung() {
		cout << "Jantunhg dimatikan \n";
	}
};

#endif // !JANTUNG_H

