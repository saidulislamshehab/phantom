#ifndef BACKGROUND_H_INCLUDED
#define BACKGROUND_H_INCLUDED

#include "Level1.h"
#include "Loadimage.h"
#include "Player.h"
#define screenWidth 1280
#define screenHeight 720
//::::::::::::::::::::::::::::::::::::::::::::::::::   front Page   :::::::::::::::::::::::::::::::::::::::::::::::::://


int lv1_layer1,lv1_layer2,lv1_layer3;
int lv1_path1, lv1_path2, lv1_path3;
float l1 = 0;
float l2 = 0;
float l3 = 0;
float p = 0;
void showBackground(){

	iShowImage(l1, 0,1280,720, lv1_layer1);
	iShowImage(l2, 0, 1280, 720, lv1_layer2);
	iShowImage(l3, 0, 1280, 720, lv1_layer3);

	iShowImage(l1 + 1280, 0, 1280, 720, lv1_layer1);
	iShowImage(l2 + 1280, 0, 1280, 720, lv1_layer2);
	iShowImage(l3 + 1280, 0, 1280, 720, lv1_layer3);

	iShowImage(l1 + 1280*2, 0, 1280, 720, lv1_layer1);
	iShowImage(l2 + 1280*2, 0, 1280, 720, lv1_layer2);
	iShowImage(l3 + 1280*2, 0, 1280, 720, lv1_layer3);


	iShowImage(p,0,1280,397,lv1_path1);
	iShowImage(p + 1280, 0, 1280, 483, lv1_path2);
	iShowImage(p+ 1280*2, 0, 1280, 483, lv1_path3);



}










#endif