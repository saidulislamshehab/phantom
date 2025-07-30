#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "Loadimage.h"
#include "Player.h"
#define screenWidth 1280
#define screenHeight 720

int frontIndex = 0;
int front[7];
int menu_option = -1;
int menuImage[7];
int highlightIndex = 0;
int story[2];
int storyIndex = 0;
int credit[2];
int creditIndex = 0;

void frontImageAnimation() {
	frontIndex = (frontIndex + 1) % 6;
}

void selectMenuOption(int mx, int my) {
	if (menu_option == 0) {
		if (mx >= 558 && mx <= 715 && my >= 493 && my <= 531) {
			menu_option = 1; // Play
		
		}
		else if (mx >= 548 && mx <= 727 && my >= 414 && my <= 456) {
			menu_option = 2; // Story
		}
		else if (mx >= 490 && mx <= 788 && my >= 333 && my <= 373) {
			menu_option = 3; // High Score
		}
		else if (mx >= 517 && mx <= 763 && my >= 251 && my <= 292) {
			menu_option = 4; // Controls
		}
		else if (mx >= 552 && mx <= 731 && my >= 172 && my <= 209) {
			menu_option = 5; // Credit
		}
		else if (mx >= 580 && mx <= 701 && my >= 83 && my <= 131) {
			exit(0); // Exit
		}
	}

	if (menu_option == 2 && (mx >= 552 && mx <= 700 && my >= 62 && my <= 96)) {
		menu_option = 0; // Story back
	}

	if (menu_option == 5 && (mx >= 558 && mx <= 722 && my >= 48 && my <= 93)) {
		menu_option = 0; // Credit back
	}
}

void showMenu() {
	if (menu_option == 0 && highlightIndex >= 0 && highlightIndex <= 6) {
		iShowImage(0, 0, screenWidth, screenHeight, menuImage[highlightIndex]);
	}
}

void showStory() {
	if (menu_option == 2 && storyIndex >= 0 && storyIndex <= 1) {
		iShowImage(0, 0, screenWidth, screenHeight, story[storyIndex]);
	}
}

void showCredit() {
	if (menu_option == 5 && creditIndex >= 0 && creditIndex <= 1) {
		iShowImage(0, 0, screenWidth, screenHeight, credit[creditIndex]);
	}
}

#endif // MENU_H_INCLUDED