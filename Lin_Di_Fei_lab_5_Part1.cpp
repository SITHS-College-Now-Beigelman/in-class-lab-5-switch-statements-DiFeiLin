/*
Di Fei Lin
lab 5 p1
10/8/24
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
//identify variables that the user will put in
    double weight;
    string typeExercise;
    double timeExercise;
    
    cout<<"What is your weight in kilograms:",//ask the user for weight 
    cin>>weight;

    cout<<"What exercise are you doing(slowly (walking), quickly(walking), and jogging):";//ask the user for the type of exercises
    cin>>typeExercise;

    cout<<"How much time did you spend exercising?";//ask for the amount of time 
    cin>>timeExercise;

    if (typeExercise == "jogging"){//if user is jogging print the following equation
        cout<<"you will burn "<<timeExercise*(8.8*3.5*weight)/200<<" calories while jogging"<<endl;
    }
    else if (typeExercise == "slowly"){//if user is slowly walking print the following equation
        cout<<"you will burn "<<timeExercise*(2*3.5*weight)/200<<" calories while walking slowly"<<endl; 
    }
    else if (typeExercise == "quickly"){//if user is quickly walking print the following equation
        cout<<"you will burn "<<timeExercise*(3*3.5*weight)/200<<" calories while walking quickly"<<endl;
    }
    else {
        cout<<"invalid response"<<endl;
    }
    int caloriesAmount = 0;
    cout<<"How many calories would you like to burn";//ask the user for how many calories they want to burn
    cin>>caloriesAmount;
    cout<<"You can walk quickly for "<<(200*caloriesAmount)/(3*3.5*weight)<<" minutes"<<endl;//prints time 
    cout<<"You can walk slowly for "<<(200*caloriesAmount)/(2*3.5*weight)<<" minutes"<<endl;//prints time 
    cout<<"You can jog for "<<(200*caloriesAmount)/(8*3.5*weight)<<" minutes"<<endl;//prints time 
    return 0;
}
/*What is your weight in kilograms:120
What exercise are you doing(slowly walking, quickly walking, and jogging):jogging
How much time did you spend exercising?12
you will burn 221.76 calories while jogging*/