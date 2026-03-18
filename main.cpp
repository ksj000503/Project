#include <iostream>
#include "FSM.h"
using namespace std;

int main()
{
	UFSM PlayerMove;
	UFSM MonsterMove;
	UFSM PlayerWin;

	PlayerMove.Move();
	MonsterMove.Move();
	PlayerWin.GameOver();
	
	return 0;
}