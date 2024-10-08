/*
Di Fei Lin
lab 5 part 3 part 1
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


    for(i = 1; i<= 25; i++)//for loop
    {
        direct = rand() % 4 + 1; // randomizer

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
    }
    if (leftRight > 0){//if statement if direct is going east and prints out  
        cout<<"The Robot moved "<< leftRight<<" blocks East"<<endl;
    }

    else if (leftRight < 0){//if statement if direct is going west and prints out
        cout<<"The Robot moved "<<abs(leftRight)<<" blocks West"<<endl;
    }

    if (upDown > 0){//if statement if direct is going north and prints out
        cout<<"The Robot moved "<< upDown<<" blocks North"<<endl;
    }

    else if (upDown < 0){//if statement if direct is going south and prints out
        cout<<"The Robot moved "<<abs(upDown)<<" blocks South"<<endl;
    }
    return 0;
}
/*The Robot moved 6 blocks East
The Robot moved 3 blocks North*/