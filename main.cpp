#include <iostream>


#include "funcs.h"

int main()
{
  Coord3D pointP1 = {10, 20, 30};
  std::cout << length(&pointP1) << std::endl;
  Coord3D pointP2 = {25, 25, 25};
  std::cout << length(&pointP2) << std::endl;
  Coord3D* farther = fartherFromOrigin(&pointP1, &pointP2);
  std::cout << *farther << std::endl;

  Coord3D vel1 = {2, 3, 2};
  move(&pointP1, &vel1, 5);
  std::cout << pointP1 << std::endl;

  Coord3D* createdP = createCoord3D(2, 8, 10);
  deleteCoord3D(createdP);
  return 0;
}
