#include "CircleList.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	CircleList* playList = new CircleList();
	// 1
	playList->add("Stayin Alive");
	playList->add("Le Freak");
	playList->add("Jive Talkin");
	playList->print();

	// 2
	playList->advance();
	playList->print();

	// 3
	playList->advance();
	playList->print();

	// 4
	playList->remove();
	playList->print();

	return EXIT_SUCCESS;
}