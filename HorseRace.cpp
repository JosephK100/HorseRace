//Joseph Kloepper
//CSC121 - HorseRace Lab


#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>

//Function prototypes
void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

//Main function
int main(){
	int horses[5] = {0, 0, 0, 0, 0};
	int turns = 0;
	std::srand(std::time(nullptr));
	bool keepGoing = true;
	while (keepGoing){
		std::cout << "Hit the Enter key to continue racing! \n";
		std::cin.get();
		turns++;
		std::cout << "Turn: " << turns << "\n";
	        for (int i = 0; i <5; i++){
			advance(i, horses);
			printLane(i, horses);
			if (isWinner(i, horses)){
			keepGoing = false;	
			}
		}
	}
}

//Advance function
void advance(int horseNum, int* horses){
	int chance = rand() % 100 + 1;
	if (chance % 2 == 0){
		horses[horseNum]++;
	}
}

//PrintLane function
void printLane(int horseNum, int* horses){
	std::cout << "Horse " << horseNum << ": " ;
	int pos = horses[horseNum];
	for (int i = 0; i < 15; i++){
		if (i == pos){
		    std::cout << horseNum;
		} else {
		std::cout << "."; 
		}
	}
	std::cout << "\n";
}

//IsWinner function 
bool isWinner(int horseNum, int* horses){
	if (horses[horseNum] >= 14){
		std::cout << "Horse " << horseNum << " Wins!!\n";
		return true;
	}
	return false;


}

