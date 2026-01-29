//Joseph Kloepper
//CSC121 - HorseRace Lab


#include <iostream>
#include <random>

//Function prototypes
void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

//Main function
int main(){
	int horses[5] = {0, 0, 0, 0, 0};
	int turns = 0;
	bool keepGoing = true;
	while (keepGoing){
		std::cout << "Hit the Enter key to continue racing! \n";
		std::cin.get();
		turns++;
		std::cout << "Turn: " << turns << "\n"; 

	}
}
/*
//Advance function
void advance(int horseNum, int* horses){



}

//PrintLane function
void printLane(int horseNum, int* horses){



}

//IsWinner function 
bool isWinner(int horseNum, int* horses){



}
*/
