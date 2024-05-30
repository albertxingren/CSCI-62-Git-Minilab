#include "myclass.h"

MyClass::MyClass() {
}

MyClass::MyClass(std::string s_) { 
  s = s_; 
}

std::string MyClass::getS() { 
  return s; 
}
