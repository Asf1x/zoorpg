#include "Character.h"
#include <iostream>
#include <string>
#include <vector>


Character::Character(std::string name, int health, int attack, int defence){
  m_name = name;
  m_health = health;
  m_attack = attack;
  m_defence = defence;
}

void Character::takeDamage(int damage) {
//  m_health -= damage;
//  if (m_health < 0) {
//    m_health = 0;
//  }else{
//    std::cout << m_name << " took " << damage << " damage." << std::endl;
//  }
  int damageTaken = damage - m_defence;
  if (damageTaken > 0) {
    m_health -= damageTaken;
    std::cout<<getName()<<"took"<<damageTaken<<"damage. Current health"<<getHealth()<<std::endl;
    }else{
    std::cout<<getName()<<"took no damage. Current health"<<getHealth()<<std::endl;
    }
  if (m_health <= 0) {
    std::cout << getName() << " has been defeated." << std::endl;
  }
}

void Character::attack(Character *target){
  int damage = getAttack() - target->getDefence();
  if (damage > 0) {
    target->takeDamage(damage);
    std::cout<<getName()<<"attacked"<<target->getName()<<"for"<<damage<<"damage. Current health"<<target->getHealth()<<std::endl;
    }else{
    std::cout<<getName()<<"attacked"<<target->getName()<<"for no damage. Current health"<<target->getHealth()<<std::endl;
    }
}

std::string Character::getName(){
  return m_name;
}

int Character::getHealth(){
  return m_health;
}

int Character::getAttack(){
  return m_attack;
}

int Character::getDefence(){
  return m_defence;
}
