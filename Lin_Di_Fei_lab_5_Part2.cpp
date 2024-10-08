/*
Di Fei Lin
lab 5 part 2 
10/8/24
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    double data; // identify the variable that is going to be the container for the amount of data 
    string typeMusic;

    cout<<"What type of music quality would you wish to listen to(low, normal, or high)?";
    cin>>typeMusic;

    cout<<"What is the number of gigabytes in your monthly hotspot plan? ";//ask the question that prompts the user to input the number 
    cin>>data;//reciever of the input


    if (typeMusic == "low"){//if statement identifying the low quality music 
    cout<<"You can listen to "<<data*1000/43.2<<" hours of low-quality music."<<endl;//prints the statement alongside calculating for the number of hours needed for low quality music
    }

    else if(typeMusic == "normal"){//if statement identifying the normal quality music 
    cout<<"You can listen to "<<data*1000/72<<" hours of normal-quality music."<<endl;//prints the statement alongside calculating for the number of hours needed for normal quality music
    }

    else if(typeMusic == "high"){//if statement identifying the high quality music
    cout<<"You can listen to "<<data*1000/115.2<<" hours of high-quality music.";//prints the statement alongside calculating for the number of hours needed for high quality music
    }

    return 0;
}
/*What type of music quality would you wish to listen to(low, normal, or high)?low
What is the number of gigabytes in your monthly hotspot plan? 12
You can listen to 277.778 hours of low-quality music.*/