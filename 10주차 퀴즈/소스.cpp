#include <iostream>
#include <string>

using namespace std;
class Subject {
private:
	string name;
	Subject* prerequisite;
public:
	Subject(const string& n, Subject* p) {
		name = n;
		prerequisite = p;
	}
	void Print() {
		cout << "과목: <과목명>";
		if (this->prerequisite != NULL) {
			cout << "선수과목: <과목명>";
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