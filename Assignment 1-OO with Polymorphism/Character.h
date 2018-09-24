#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>;
#include <vector>;
#include <iostream>;

using namespace std;



//base class
class Character  {

public:
	//2 Constructors
	Character();
	Character(string Name , float Strength, int Health, float Speed );
	//1 Destructor
	~Character();


//Methods
	string getName();
	void setName(string);

	float getStrength();
	void setStrength(float);

	unsigned int getHealth();
	void setHealth(unsigned int);

	float getSpeed();
	void setSpeed(float);
	
	//Has a printInfo method
	//Display Information
	void PrintInfo();

protected: 
	string name;
	float strength = NULL;
	int health = NULL;
	float speed = NULL;
};

//Inherited Class 1
class Pedestrian : Character{
public:
	Pedestrian();
	Pedestrian(string Name, float Strength, int Health, float Speed, int CombatLikelyhood, float FollowDistace);

//Methods
	float getCombatLikelyhood();
	void setCombatLikelyhood(float);

	float FollowDistance();
	void setFollowDistance(float);

	void PrintInfo();


private:
	int combatLikelyhood = NULL;
	float followDistance = NULL;
};

//Inherited Class 2
class Zombie : Character{
public:
	Zombie();
	Zombie(string Name, float Strength, int Health, float Speed, float HearingDistance, float ScreechingDistance);

//Methods
	float getHearingDist();
	void setHearingDist(float);

	float getScreechingDist();
	void setScreechingDist(float);

	void PrintInfo();
	void PrintInfo(bool details);

private:
	float hearingDistance = NULL;
	float screechingDistance = NULL;
};

#endif 
