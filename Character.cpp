#include "Character.h"
#include <iostream>

Character::Character(std::string m_name, int m_health) : m_name(m_name), m_health(m_health), m_numberOfCoins(0),m_numberOfPoints(0),x(0),y(0) {}

void Character::setName(std::string name) {
  m_name = name;
}
int Character::getHealth() {
  return m_health;
}
int Character::getNumberOfCoins() {
  return m_numberOfCoins;
}
int Character::getNumberOfPoints() {
  return m_numberOfPoints;
}

void Character::moveUp(){
  
}
void Character::moveDown(){
}
void Character::moveLeft(){
}
void Character::moveRight(){
}
