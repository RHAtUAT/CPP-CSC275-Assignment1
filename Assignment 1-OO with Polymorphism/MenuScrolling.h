#pragma once
#ifndef MENUSCROLLING_H
#define MENUSCROLLING_H

class MenuScrolling
{

public:
	MenuScrolling(int NUM_OPTIONS, );
	~MenuScrolling();

private: 
	int NUM_OPTIONS = 0;
	int position;

};
#endif // !MENUSCROLLING_H


