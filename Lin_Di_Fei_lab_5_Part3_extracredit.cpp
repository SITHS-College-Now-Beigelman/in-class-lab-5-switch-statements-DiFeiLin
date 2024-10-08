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
    int whileMaintain = 1;//to maintain the second while loop
    int moveTotal = 0;
    int whileMaintain1 = 10;//max the while loop to ten 

    while (whileMaintain1 >= 1){
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
            cout<<"The Robot took "<<moves<<" to reach 2 blocks east and 3 block north "<<endl;
            moveTotal = moves+moveTotal;//stores the total moves 
            break;
            }
        }
        whileMaintain1 = whileMaintain1 - 1;
    }
   cout<<"Average amount of moves is "<<moveTotal/10<<" across 10 tries";//print the average
    return 0;
}
/*The Robot took 1561 to reach 2 blocks east and 3 block north
The Robot took 1645 to reach 2 blocks east and 3 block north
The Robot took 1663 to reach 2 blocks east and 3 block north
The Robot took 263695 to reach 2 blocks east and 3 block north
The Robot took 263705 to reach 2 blocks east and 3 block north
The Robot took 263789 to reach 2 blocks east and 3 block north
The Robot took 263807 to reach 2 blocks east and 3 block north
The Robot took 525839 to reach 2 blocks east and 3 block north 
The Robot took 525849 to reach 2 blocks east and 3 block north
Average amount of moves is 211310 across 10 tries*/