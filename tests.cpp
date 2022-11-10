#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("length") {
  Coord3D pointP1 = {10, 20, 30};
  CHECK_LE(std::abs(length(&pointP1) - 37.4166), 1e-4);
  Coord3D pointP2 = {25, 25, 25};
  CHECK_LE(length(&pointP2) - 43.301270189, 1e-5);
}
