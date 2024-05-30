#include <iostream>
#include "myclass.h"

using namespace std;

int main () {
  cout << "Hello World" << endl;
  cout << "How are you doing today?" << endl;

  MyClass a("welcome");
  cout << a.getS() << endl;
}
