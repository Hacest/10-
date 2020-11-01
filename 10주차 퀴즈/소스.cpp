#include <iostream>
using namespace std;

#define DBG(str) cout << str << endl

class Integer {
    int n;

public:
    Integer(int _n) : n(_n) { DBG("A"); };
    Integer(const Integer& i) : n(i.n) { DBG("B"); };

    Integer& operator=(const Integer& i) { DBG("C"); n = i.n; return *this; };
    Integer& operator+=(const Integer& i) { DBG("D"); n += i.n; return *this; };

    friend Integer operator+(const Integer& a, const Integer& b);
    friend Integer operator*(const Integer& a, const Integer& b);
    friend ostream& operator<<(ostream& os, const Integer& i);
};

Integer operator+(const Integer& a, const Integer& b) {
    DBG("E"); return Integer(a.n + b.n);
}

Integer operator*(const Integer& a, const Integer& b) {
    DBG("F"); return Integer(a.n * b.n);
}

ostream& operator<<(ostream& os, const Integer& i) {
    DBG("G"); os << i.n; return os;
}

int main() {
    Integer n1(1), n2(2);
    Integer n = 5 + n1 + 2 * n2;

    cout << n << endl;
}