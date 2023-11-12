#include <iostream>
class Character{
private:
 int x;
 int y;
 std::string name;
 int health;
 int numberOfCoins;
 int numberOfPoints;

public:
 Character(std::string name);
 void setName(std::string name);
 int getHealth();
 int getNumberOfCoins();
 int getNumberOfPoints();
 void moveUp(int x, int y);
 void moveDown(int x, int y);
 void moveRight(int x, int y);
 void moveLeft(int x, int y);
};
