#include <iostream>

using namespace std;

class MyClass {
 private:
  int x;

 protected:
  int y;

 public:
  MyClass(int a, int b) : x(a), y(b) {}

  friend void foo(MyClass obj);

  friend class Bar;
};

void foo(MyClass obj) { cout << obj.x << " " << obj.y << endl; }

class Bar {
 public:
  void bar(MyClass obj) { cout << obj.x << " " << obj.y << endl; }
};

int main() {
  MyClass obj(1, 2);
  foo(obj);
  Bar barObj;
  barObj.bar(obj);
  return 0;
}
