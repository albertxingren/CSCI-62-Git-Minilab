#ifndef MY_CLASS
#define MY_CLASS
#include <string>

class MyClass {
  private:
    std::string s;
    int a;
  public:
    MyClass();
    MyClass(std::string s_);
    std::string getS();
};

#endif
