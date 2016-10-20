#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>

#define FILE_OLD	"input.txt"
#define FILE		"in.txt"
#define FILE_RES	"out.txt"

using namespace std;

int main(void)
{
	ifstream in_first(FILE_OLD);

	if (!in_first.is_open()) {
		cout << "Can not open first file" << endl;
		return 0;
	}
	in_first.close();


	int rename_res = rename(FILE_OLD, FILE);
	if (rename_res != 0) {
		cout << "Rename error" << endl;
		return 0;
	}

	ifstream in(FILE);
	ofstream out(FILE_RES);
	string tmp;

	cout << "Copying file... ";

	while (!in.eof()) {
		in >> tmp;
		out << tmp;
	}
	cout << "OK" << endl;

	return 0;
}
