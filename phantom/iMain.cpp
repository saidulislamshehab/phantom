#include "iGraphics.h"
#include<iostream>
#include "Loadimage.h"
#include "Menu.h"
#include "Player.h"
#include "Background.h"
#include "Level1.h"
using namespace std;
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void iDraw()
{
	iClear();
	if (menu_option == -1) {
		iShowImage(0, 0, screenWidth, screenHeight, front[frontIndex]);
	}
	else if (menu_option == 0) {
		showMenu();
	}
	else if (menu_option == 1){
		iShowImage(0, 0, 1280, 720, lv1_layer1);
        showBackground();
		showplayer();
		
	}
	else if (menu_option == 2) {
		showStory();
	}
	else if (menu_option == 5) {
		showCredit();
	}
}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	
}
//*******************************************************************ipassiveMouse***********************************************************************//

// Passive mouse movement
void iPassiveMouseMove(int mx, int my) {
	cout << "mx= " << mx << "my= " << my << endl;
	if (menu_option >= 0 && menu_option <= 5) {
		if (mx >= 558 && mx <= 715 && my >= 493 && my <= 531) {
			highlightIndex = 1; // Play
		}
		else if (mx >= 548 && mx <= 727 && my >= 414 && my <= 456) {
			highlightIndex = 2; // Story
		}
		else if (mx >= 490 && mx <= 788 && my >= 333 && my <= 373) {
			highlightIndex = 3; // Score
		}
		else if (mx >= 517 && mx <= 763 && my >= 251 && my <= 292) {
			highlightIndex = 4; // Controls
		}
		else if (mx >= 552 && mx <= 731 && my >= 172 && my <= 209) {
			highlightIndex = 5; // Credit
		}
		else if (mx >= 580 && mx <= 701 && my >= 83 && my <= 131) {
			highlightIndex = 6; // Exit
		}
		else {
			highlightIndex = 0;
		}

		if (menu_option == 2 && (mx >= 560 && mx <= 690 && my >= 57 && my <= 95)) {
			storyIndex = 1;
		}
		else {
			storyIndex = 0;
		}

		if (menu_option == 5 && (mx >= 570 && mx <= 710 && my >= 47 && my <= 85)) {
			creditIndex = 1;
		}
		else {
			creditIndex = 0;
		}
	}
}
void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_UP) {
		selectMenuOption(mx, my);
	}

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {

	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/

void iKeyboard(unsigned char key) {
	if (menu_option == -1 && key == '\r') {
		menu_option = 0;
	}
}


/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	
	if (key == GLUT_KEY_RIGHT){
		heroX ++;
		stand = false;
		l3 -= 5;
		l2 -= 4;
		l1 -= 3;
		p -= 6;
	}
	if (key == GLUT_KEY_LEFT){
		heroX -= 6;
		stand = false;
	}
}

int main() {
	iInitialize(screenWidth, screenHeight, "Phantom Vanguard");
	Loadimage();
	iSetTimer(500, frontImageAnimation);
	iSetTimer(100, animate);
	iStart();
	return 0;
}