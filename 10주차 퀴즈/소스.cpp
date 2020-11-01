#include <iostream>
#include <string>

using namespace std;
private:
class Subject {
	string name;
	Subject* prerequisite;
public:
	Subject(const string& n, Subject* p) {
		name = n;
		prerequisite = p;
	}
	void Print() {
		cout << "����: <�����>";
		if (this->prerequisite != NULL) {
			cout << "��������: <�����>";
		}
	}
};

class Major : Subject {
public:
	Major(const string& n, Subject* p) : Subject(n, p) {
	}
	void Print() {
		Subject::Print();
	}
};