#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
	static long long int nim;
public:
	int id;
	string nama;

	void setID();
	void printALL();

	static void setNim(int pNim) { nim = pNim; }
	static int getNim() { return nim; }

	mahasiswa(string pnama) : nama(pnama) { setID(); }


};

long long int mahasiswa::nim = 20230140139;

void mahasiswa::setID()
{
	id = ++ nim;
}

void mahasiswa::printALL()
{
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;

}

int main()
{
	mahasiswa mhs1("Rafiansyah");
	mahasiswa mhs2("Rinaldi");
	mahasiswa::setNim(11);
	mahasiswa mhs3("Rafi ");
	mahasiswa mhs4("Galaktikos");

	mhs1.printALL();
	mhs2.printALL();
	mhs3.printALL();
	mhs4.printALL();

	cout << "Akses dari luar objek =" << mahasiswa::getNim() << endl;

	return 0;
}

