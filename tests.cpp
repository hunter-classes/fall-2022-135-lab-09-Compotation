#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("length") {
  Coord3D pointP1 = {10, 20, 30};
  CHECK_LE(std::abs(length(&pointP1) - 37.4166), 1e-4);
  Coord3D pointP2 = {25, 25, 25};
  CHECK_LE(length(&pointP2) - 43.301270189, 1e-5);
}

TEST_CASE("farther from origin") {
  Coord3D pointP1 = {10, 20, 30};
  Coord3D pointP2 = {25, 25, 25};
  CHECK_LE(fartherFromOrigin(&pointP1, &pointP2), &pointP2);

  Coord3D pointP3 = {10, 20, 30};
  Coord3D pointP4 = {25, 20, 25};
  CHECK_LE(fartherFromOrigin(&pointP3, &pointP4), &pointP3);
}

TEST_CASE("move") {
  Coord3D pointP1 = {10, 20, 30};
  Coord3D vel1 = {5, 2, 10};
  Coord3D newPointP1 = {20, 24, 50};
  move(&pointP1, &vel1, 2);
  CHECK_EQ(pointP1, newPointP1);
}

TEST_CASE("create point") {
  Coord3D point1 = {2, 3, 4};
  CHECK_EQ(*createCoord3D(2, 3, 4), point1);
  Coord3D point2 = {1, 1, 1};
  CHECK_EQ(*createCoord3D(1, 1, 1), point2);
}

TEST_CASE("delete point") {
  Coord3D *pointer1 = createCoord3D(2, 3, 4);
  Coord3D point1 = {2, 3, 4};
  deleteCoord3D(pointer1);
//  CHECK_NE(*pointer1, point1);
}