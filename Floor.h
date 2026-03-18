#pragma once
#include "Actor.h"

class AFloor : public AActor
{
public:
	AFloor();
	~AFloor();

	int X = 0;
	int Y = 0;
	char Mesh;
};

