#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include "Loadimage.h"
#include "Menu.h"
#include "Background.h"
#include<iostream>
#include "Level1.h"
#define DragonKnight_X (288 * 2)
#define DragonKnight_Y (128 * 2)


int heroX=-100, heroY= 100;
bool stand = true;
int runcounter = 0;
bool direction = true;
bool isAttack = false;
bool attRe = false;
bool atkDec = true;




int idle[8], inIdle[8], run[8], inRun[8], attack[11], inAttack[11],
jumpUp[3], jumpDown[3], inJumpUp[3], inJumpDown[3], supAttack[18],
inSupAttack[18], takeHit[6], inTakeHit[6], defend[10], inDefend[10];



int idleIndex = 0, runIndex = 0, attackIndex = 0,
jumpUpIndex = 0, jumpDownIndex = 0, supAttackIndex = 0,
takeHitIndex = 0, defendIndex = 0;


void animate() {
	idleIndex = (idleIndex + 1) % 8;
	runIndex = (runIndex + 1) % 8;
}

void showplayer(){
	if (!stand){
		iShowImage(heroX, heroY, DragonKnight_X, DragonKnight_Y, run[runIndex]);
		runcounter++;
		if (runcounter >= 1000){
			runcounter = 0;
			stand = true;
		}
	}
	else
	{
		iShowImage(heroX, heroY, DragonKnight_X, DragonKnight_Y, idle[idleIndex]);
	}

}




















#endif 