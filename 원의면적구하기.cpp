
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
class cir
{
	int rad;
	string name;
public:
	void setcir(string name, int rad);
	double getArea();
	string getName();
};
void cir::setcir(string name, int rad) {
	this->name = name;
	this->rad = rad;
}
double cir::getArea() {
	return rad*rad*3.14;
}
string cir::getName() {
	return name;
}
class cirManager
{
	cir *p;
	int size;
public:
	cirManager(int size);
	~cirManager();
	void srName();
	void srArea();
};
cirManager::cirManager(int size) {
	this->size = size;
	p = new cir[size];
	
	string name;
	int rad;

	for (int i = 0; i < size; i++){
		cout << "��" << i + 1 << "�� �̸��� ������>>";
		cin >> name >> rad;

		string setName = name;
		int setRad = rad;
		p[i].setcir(name, rad);
	}
}
cirManager::~cirManager() {

}
void cirManager::srName() {
	bool nameExisted = false;
	string cirName;
	cout << "�˻��ϰ��� �ϴ� ���� �̸�>>";
	cin >> cirName;

	for (int i = 0; i < size; i++){
		if (cirName == p[i].getName()){
			cout << p[i].getName() << "�� ������" << p[i].getArea() << "�Դϴ�.";
			nameExisted = true;
		}
	}
	if (nameExisted == false){
		cout << "�̸��� ����� �Է��ϼ���" << endl;
	}
	cout << endl;
}
void cirManager::srArea() {
	int minArea;

	cout << "�ּ� ������ ������ �Է��ϼ���>>";
	cin >> minArea;

	cout << minArea << "���� ū ���� �˻���" << endl;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > minArea) {
			cout << p[i].getName() << "�� ������" << p[i].getArea() << ",";
		}
	}
	cout << endl;
}
int main() {
	int cirNum;

	cout << "���� ����>> ";
	cin >> cirNum;

	cirManager cirManager(cirNum);

	cirManager.srName();
	cirManager.srArea();
}

