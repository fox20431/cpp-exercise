#include <iostream>
using namespace std;

class Vector {
 public:
  // `: x(x), y(y)` is to init `x` and `y`
  Vector(int x = 0, int y = 0) : x(x), y(y) {}

  Vector operator+(const Vector& v) const { return Vector(x + v.x, y + v.y); }

  Vector operator*(const Vector& v) const { return Vector(x * v.x, y * v.y); }

  friend ostream& operator<<(ostream& out, const Vector& v);

 private:
  int x;
  int y;
};

ostream& operator<<(ostream& out, const Vector& v) {
  out << "(" << v.x << "," << v.y << ")";
  return out;
}

int main() {
  Vector v1(1, 2);
  Vector v2(3, 4);

  Vector v3 = v1 + v2;
  Vector v4 = v1 * v2;

  cout << "v1 = " << v1 << endl;
  cout << "v2 = " << v2 << endl;
  cout << "v1 + v2 = " << v3 << endl;
  cout << "v1 * v2 = " << v4 << endl;

  return 0;
}
