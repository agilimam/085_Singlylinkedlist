#include<iostream>
#include<string.h>
using namespace std;

class Node
{
public:
	int noMhs;
	char nama[20];
	Node* next;
};

class List
{
	Node* START;
public:
	List();
	void addNode();
	bool Search(int nim, Node** previous);
	bool listEmpety();
	bool delNode(int element);
	void tarverse();
};

List::List()
{
	START = NULL;
}
void List::addNode()/*Menambahkan sebuah Node kedalam list*/
{
	int nim;
	char nm[20];
	cout << "Masukkan Nomor Mahasiswa : ";
	cin >> nim;
	cout << "\nMasukkan Nama : ";
	cin >> nm;

	Node* nodeBaru = new Node;
	nodeBaru->noMhs = nim;
	strcpy_s(nodeBaru->nama, nm);

	if (START == NULL || nim <= START->noMhs)
	{
		if ((START != NULL) && (nim == START->noMhs))
		{
			cout << "\nDuplikasi noMhs tidak diijinkan\n";
			return;
		}
		nodeBaru->next = START;
		START = nodeBaru;
		return;
	}
	Node* previos, * current;

	current = START;
	previos = START;




