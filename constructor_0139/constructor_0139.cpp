#include <iostream>
using namespace std;

class mahasiswa
{
public:
	static int nim;
	int id;
	string nama;

	void setID();
	void printALL();
	mahasiswa(string pnama)
	{
		nama = pnama;
		setID();
	}
};

int mahasiswa::nim = 10;

void mahasiswa::setID()
{
	id = ++nim;
}

void mahasiswa::printALL()
{
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main()
{
	mahasiswa mhs1("Lia kurnia");
	mahasiswa mhs2("asroni");
	mahasiswa mhs3("Andi kurnia");
	mahasiswa mhs4("Joko purnomo");


}
