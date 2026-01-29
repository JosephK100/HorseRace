# HorseRace
Joseph Kloepper 
Fourth Lab for CSC121

# Algorithm/Pseudocode
~
~
~
~
~
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
    main()
        Create an array of horses with 5 zeros.
        Create a "turn" counter -> goes up each time "enter" is hit.
        Set turns = 0  
        Set the keepGoing loop to true.
        Whille keepGong:
            Wait for user input, which will be the enter key.
            Call the advance function. 
            Call the printLane function.
            (Add +1 to the "turns" counter.) 
                If the isWinner function returns true:
                    print the victory message for whichever horse.
                    set keepGoing to false, ending the loop. 

