
#ifndef LOADIMAGE_H_INCLUDED
#define LOADIMAGE_H_INCLUDED
#include "Menu.h"
#include "Player.h"
#include "Background.h"
#include<String.h>
#include "Level1.h"

void Loadimage() {
	//::::::::::::::::::::::::::::::::::::::::::::::::::   front Page   :::::::::::::::::::::::::::::::::::::::::::::::::://


	for (int i = 0; i < 7; i++) {
		char file[50];
		sprintf_s(file, "./frontimg/frontPage%d.png", i + 1);
		front[i] = iLoadImage(file);
	}


	//::::::::::::::::::::::::::::::::::::::::::::::::::   Menu Page   :::::::::::::::::::::::::::::::::::::::::::::::::://
	menuImage[0] = iLoadImage("./Menu/Slide1.png");
	menuImage[1] = iLoadImage("./Menu/Slide2.png");
	menuImage[2] = iLoadImage("./Menu/Slide3.png");
	menuImage[3] = iLoadImage("./Menu/Slide4.png");
	menuImage[4] = iLoadImage("./Menu/Slide5.png");
	menuImage[5] = iLoadImage("./Menu/Slide6.png");
	menuImage[6] = iLoadImage("./Menu/Slide7.png");

	//::::::::::::::::::::::::::::::::::::::::::::::::::   story Page   :::::::::::::::::::::::::::::::::::::::::::::::::://
	story[0] = iLoadImage("./Menu/story/Slide1.png");
	story[1] = iLoadImage("./Menu/story/Slide2.png");


	//::::::::::::::::::::::::::::::::::::::::::::::::::   credit Page   :::::::::::::::::::::::::::::::::::::::::::::::::://
	credit[0] = iLoadImage("./Menu/credit/credit1.png");
	credit[1] = iLoadImage("./Menu/credit/credit2.png");



	//::::::::::::::::::::::::::::::::::::::::::::::::::      Background   :::::::::::::::::::::::::::::::::::::::::::::::::://



	lv1_layer1 = iLoadImage("./Level1/layer1.png");
	lv1_layer2 = iLoadImage("./Level1/layer2.png");
	lv1_layer3 = iLoadImage("./Level1/layer3.png");

	lv1_path1 = iLoadImage("./Level1/Path1.png");
	lv1_path2 = iLoadImage("./Level1/Path2.png");
	lv1_path3 = iLoadImage("./Level1/Path3.png");









































	//::::::::::::::::::::::::::::::::::::::::::::::::::      Hero    :::::::::::::::::::::::::::::::::::::::::::::::::://

	

	//Idle
	for (int i = 0; i < 8; i++) {
		char file[50];
		sprintf_s(file, "./Dragon Knight/01_idle/idle_%d.png", i + 1);
		idle[i] = iLoadImage(file);
	}


	//Idle Inv
	for (int i = 0; i < 8; i++) {
	char file[50];
	sprintf_s(file, "./Dragon Knight/idle_in/idle_%d.png", i + 1);
	inIdle[i] = iLoadImage(file);
	}


	//jump up
	for (int i = 0; i < 3; i++) {
	char file[50];
	sprintf_s(file, "./Dragon Knight/03_jump_up/jumpup_%d.png", i + 1);
	jumpUp[i] = iLoadImage(file);
	}

	//jump up inv
	for (int i = 0; i < 3; i++) {
	char file[50];
	sprintf_s(file, "./Dragon Knight/jumpup_in/jumpup_%d.png", i + 1);
	inJumpUp[i] = iLoadImage(file);
	}

	//jumpdown
	for (int i = 0; i < 3; i++) {
	char file[50];
	sprintf_s(file, "./Dragon Knight/03_jump_down/jump_down_%d.png", i + 1);
	jumpDown[i] = iLoadImage(file);
	}


	//jump down inv
	for (int i = 0; i < 3; i++) {
	char file[50];
	sprintf_s(file, "./Dragon Knight/jumpdown_in/jump_down_%d.png", i + 1);
	inJumpDown[i] = iLoadImage(file);
	}


	//Run
	

	for (int i = 0; i < 8; i++) {
		char file[50];
		sprintf_s(file, "./Dragon Knight/02_run/run_%d.png", i + 1);
		run[i] = iLoadImage(file);
	}


	//inv Run
	for (int i = 0; i < 8; i++) {
	char file[50];
	sprintf_s(file, "./Dragon Knight/inRun/run_%d.png", i + 1);
	inRun[i] = iLoadImage(file);
	}

	//attack

	for (int i = 0; i < 11; i++) {
		char file[50];
		sprintf_s(file, "./Dragon Knight/05_1_atk/1_atk_%d.png", i + 1);
		inAttack[i] = iLoadImage(file);
	}

	//INV ATTACK
	for (int i = 0; i < 11; i++) {
	char file[50];
	sprintf_s(file, "./Dragon Knight/atk_in/1_atk_%d.png", i + 1);
	attack[i] = iLoadImage(file);
	}

	//sup attack
	for (int i = 0; i < 18; i++) {
	char file[50];
	sprintf_s(file, "./Dragon Knight/08_sp_atk/sp_atk_%d.png", i + 1);
	supAttack[i] = iLoadImage(file);
	}

	//sup attack inv
	for (int i = 0; i < 18; i++) {
	char file[50];
	sprintf_s(file, "./Dragon Knight/inSupAttack/sp_atk_%d.png", i + 1);
	inSupAttack[i] = iLoadImage(file);
	}


	//defend
	for (int i = 0; i < 10; i++) {
	char file[50];
	sprintf_s(file, "./Dragon Knight/09_defend/defend_%d.png", i + 1);
	defend[i] = iLoadImage(file);
	}


	//defend inv

	for (int i = 0; i < 10; i++) {
	char file[50];
	sprintf_s(file, "./Dragon Knight/defend_in/defend_%d.png", i + 1);
	inDefend[i] = iLoadImage(file);
	}


	
















}

#endif // LOADIMAGE_H_INCLUDED
