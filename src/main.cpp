#include <iostream>

#include "triangle.h"
#include "test_util.h"

using namespace std;

int main(int argc, char* argv[]) {

  Triangle t1 = Triangle(3, 4, 5);
  TestUtil test = TestUtil();

  test.equal("get a", t1.getA(), 3);
  test.equal("area of 3, 4, 5", t1.area(), 5.56);
  test.equal("perimeter of 3, 4, 5", t1.perimeter(), 11);
  test.equal("invariant a > 0", t1.setSides(12, 24, 36), true);

  return 0;
}
