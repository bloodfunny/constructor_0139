#include <iostream>
using namespace std;

class Mahasiswa
{
public:
	int nim;
	string nama;

public:
	Mahasiswa()
	{
		nim = 0;
		nama = "rafi";
	};

	Mahasiswa(int);
	Mahasiswa(string);
	Mahasiswa(int iNim, string iNama);
	void cetak();
};


