#include<iostream>

using namespace std;

class Point {
    double m_x;
    double m_y;
  public:
    Point(double x, double y):m_x(x),m_y(y) {}
    double get_x() const {return m_x;}
    double get_y() const {return m_y;}
};

bool operator<(const Point& p1,const Point& p2) {
   return p1.get_x() < p2.get_x();
}

ostream& operator<<(ostream& o,const Point &p) {
    o << "(" << p.get_x() << "," << p.get_y() << ")";
    return o;
}

template<typename T>
T TripleMin(T item1, T item2, T item3) {
   T minVal = item1; // Holds min item value, init to first item
   
   if (item2 < minVal) {
      minVal = item2;
   }
   if (item3 < minVal) {
      minVal = item3;
   }
   
   return minVal;
}

int main() {
   cout << TripleMin(67,23,10) << endl;
   cout << TripleMin('w','a','z') << endl;
   cout << TripleMin("abc","xyz","aaa") << endl;
   cout << TripleMin(Point(2.5,10.0),Point(1.5,10.0),Point(0.5,10.0)) << endl;
   return 0;
}