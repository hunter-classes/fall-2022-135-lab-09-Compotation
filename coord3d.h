#pragma once
class Coord3D {
public:
  double x;
  double y;
  double z;

  bool operator==(const Coord3D &otherCoord) const {
    return x == otherCoord.x && y == otherCoord.y && z == otherCoord.z;
  }

  friend std::ostream& operator<<(std::ostream &s, const Coord3D &point) {
    return s << "(" << point.x << ", " << point.y << ", " << point.z << ")";
  }
};