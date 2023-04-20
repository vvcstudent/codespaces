#include <iostream>
using namespace std;

template<typename T>
class TripleItem {
public:
   TripleItem(T val1 = 0, T val2 = 0, T val3 = 0);
   void PrintAll() const;   // Print all data member values
   T MinItem() const; // Return min data member value
private:
   T item1;           // Data value 1
   T item2;           // Data value 2
   T item3;           // Data value 3
};

template<typename T>
TripleItem<T>::TripleItem(T i1, T i2, T i3) {
   item1 = i1;
   item2 = i2;
   item3 = i3;
}

// Print all data member values
template<typename T>
void TripleItem<T>::PrintAll() const {
   cout << "(" << item1 << "," << item2
        << "," << item3 << ")" << endl;
}

// Return min data member value
template<typename T>
T TripleItem<T>::MinItem() const {
   T minVal = item1; // Holds value of min item, init to first item
   
   if (item2 < minVal) {
      minVal = item2;
   }
   if (item3 < minVal) {
      minVal = item3;
   }
   
   return minVal;
}

int main() {
   TripleItem<int> triInts(9999, 5555, 6666); // TripleItem class with ints
   TripleItem<short> triShorts(99, 55, 66);   // TripleItem class with shorts
   
   // Try functions from TripleItem
   triInts.PrintAll();
   cout << "Min: " << triInts.MinItem() << endl << endl;
   
   triShorts.PrintAll();
   cout << "Min: " << triShorts.MinItem() << endl << endl;
   
   return 0;
}