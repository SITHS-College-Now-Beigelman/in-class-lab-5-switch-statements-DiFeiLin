/*
Di Fei Lin
lab 5 part 3 part 2 
10/8/24
*/

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>



using namespace std;

int main(){
    int i;//identify the variables 
    srand(time(0));//clears the random
    int direct = 0;//identifies the variable that shall be randomized 
    int leftRight = 0;
    int upDown = 0;
    int moves = 0;
    int whileMaintain = 1;

    while(whileMaintain>0){//for loop
        direct = rand() % 4 + 1; // randomizer
        moves = moves + 1;
        if (direct == 1){//if statement if direct is going north 
            upDown = upDown + 1;
        }

        else if (direct == 2){//if statement if direct is going south 
            upDown = upDown - 1;
        }

        else if (direct == 3){//if statement if direct is going east 
            leftRight = leftRight + 1;
        }

        else {//if statement if direct is going west 
            leftRight = leftRight - 1; 
        }
        if (leftRight == 2 && upDown == 3){//if statement if direct is going east and prints out  
        cout<<"The Robot took "<<moves<<" to reach 2 blocks east and 3 block north ";
        break;
        }
    }

    return 0;
}
/*
The Robot took 262059 to reach 2 blocks east and 3 block north 
*/