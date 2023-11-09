#include <iostream>
#include <string>
class Character{
std::string m_name;
int m_health;
int m_attack;
int m_defence;
public:
Character(std::string name, int health, int attack, int defence);
int getHealth();
int getAttack();
int getDefence();
std::string getName();
void takeDamage(int damage);
void attack(Character*target);
};
