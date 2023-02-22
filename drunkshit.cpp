#include "drunkshit.h"

void drunkshit::loveOrHate()
{
	std::cout << "Enter 0 if you love me :)\nEnter 1 if u hate me" << std::endl;
	std::cin >> loveHate;
	if (drunkshit::loveHate == 0) {
		loveMe();
	}
	else if (drunkshit::loveHate == 1) {
		hateMe();
	}

}

void drunkshit::loveMe() {
	std::cout << "how much *pleading eyes emoji* on a scale of 1-10" << std::endl;
	std::cin >> howMuchYouLoveMe;
	if (howMuchYouLoveMe > 5) {
		std::cout << "ily more" << std::endl;
		system("PAUSE");
	}
	else if (howMuchYouLoveMe < 5) {
		std::cout << ":(" << std::endl;
		system("PAUSE");
	}
}

void drunkshit::hateMe() {
	std::cout << "OMG HOW MUCH FROM 1-10" << std::endl;
	std::cin >> howMuchYouHateMe;
	if (howMuchYouHateMe > 5) {
		std::cout << ":(" << std::endl;
		system("PAUSE");
	}
	else if (howMuchYouHateMe < 5) {
		std::cout << "ihu less" << std::endl;
		system("PAUSE");
	}
}