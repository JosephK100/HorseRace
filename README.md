# HorseRace
Joseph Kloepper 
Fourth Lab for CSC121

# Algorithm/Pseudocode

-Functions-
    void advance(int horseNum, int* horses);
        I'm going to try to do the randomization by generating a number from 1-100.
        If the number is even, move the horse up. If it's odd, do nothing.

    void printLane(int horseNum, int* horses);
        Retreive the horse's position from horseNum.
        Loop through  the 15 character track.
        If the horse's index matches thier position, print the horseNum. 
        Otherwise, print nothing or a dot.
 
    bool isWinner(int horseNum, int* horses);
       If horses in horseNum is >= 14, return true.
        Otherwise, return false.
        Whichever horse makes it to the end first wins. 
        Maybe I could loop the victory message through this part as well. 

    Decide weather or not a horse moves up by picking a random number from 1-100.
    If that number is even, the horse moves up. If it's odd, the horse stays for that turn. 
    Create sime kind of turn counter. 
    Once a horse reaches the finish line (gets enough integers, the race ends and the vitory message is printed. No more turns after that. 
    I'll likely have to use a keepGoing loop, like in the alst labs. 

