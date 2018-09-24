#include "stdafx.h"
#include "Character.h"
#include <typeinfo>

//Constructors 
Character::Character() {}

//Destructor
Character::~Character() {}

Character::Character(string Name, float Strength, int Health, float Speed)
{
	name = Name;
	strength = Strength;
	health = Health;
	speed = Speed;
}

//Get/Set Methods
string Character::getName() { return name; }
void Character::setName(string Name) { name = Name; }

float Character::getStrength() { return strength; }
void Character::setStrength(float Strength) { 
	//if ( typeid(Strength).name != "unsigned int" )
	//{

	//}
	strength = Strength; 
}

unsigned int Character::getHealth() { return health; }
void Character::setHealth(unsigned int Health) { health = Health; }

float Character::getSpeed() { return speed; }
void Character::setSpeed(float Speed) { speed = Speed; }

//Display Information
void Character::PrintInfo() {
	cout << "Name: " << name << "\n";
	cout << "Strength: " << strength << "\n";
	cout << "Health: " << health << "\n";
	cout << "Speed: " << speed << "\n\n";
}



//Constructors
Pedestrian::Pedestrian() {}
Pedestrian::Pedestrian(string Name, float Strength, int Health, float Speed, int CombatLikelyhood, float FollowDistace) {
	name = Name;
	strength = Strength;
	health = Health;
	speed = Speed;
	combatLikelyhood = CombatLikelyhood;
	followDistance = FollowDistace;
}

//Methods
float Pedestrian::getCombatLikelyhood() { return combatLikelyhood; }
void Pedestrian::setCombatLikelyhood(float CombatLikelyhood) { combatLikelyhood = CombatLikelyhood; }

float Pedestrian::FollowDistance() { return followDistance; }
void Pedestrian::setFollowDistance(float FollowDistance) { followDistance = FollowDistance; }

void Pedestrian::PrintInfo() {
	Character::PrintInfo();
	cout << "Combat LikelyHood: " << combatLikelyhood << "\n";
	cout << "Follow Distance: " << followDistance << "\n\n";
}

//Constructors
Zombie::Zombie() {}																										//Need clarification on this syntax and what it does
Zombie::Zombie(string Name, float Strength, int Health, float Speed, float HearingDistance, float ScreechingDistance) : Character::Character(Name, Strength, Health, Speed) {
	HearingDistance = hearingDistance;
	ScreechingDistance = screechingDistance;

}

//Methods
float Zombie::getHearingDist() { return hearingDistance; }
void Zombie::setHearingDist(float HearingDistance) { hearingDistance = HearingDistance; }

float Zombie::getScreechingDist() { return screechingDistance; }
void Zombie::setScreechingDist(float ScreechingDistance) { screechingDistance = ScreechingDistance; }

void Zombie::PrintInfo() {
	Character::PrintInfo();
	cout << "Hearing Distance: " << hearingDistance << "\n";
	cout << "Screeching Distance: " << screechingDistance << "\n\n";
}

void Zombie::PrintInfo(bool details) {
	Character::PrintInfo();
	if (details)
	{
		cout << "Hearing Distance: " << hearingDistance << "\n";
		cout << "Screeching Distance: " << screechingDistance << "\n\n";
	}
}
