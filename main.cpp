#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include "function.cpp"



int main(){


    /*
    std::cout << "Hello World!" << std::endl; std::cout << "Baby" << std::endl;

    std::cout << "Ny rad kommer " << std::endl;*/


///////////////////////////////////////////////////////

    /*int x = 30;
    int num;


    std::cout << x << std::endl;

    std::cout << "Ange en siffra: ";
    std::cin >> num;

    std::cout << "Siffran är: " << num << std::endl;*/



    ///////////////////////////////////////////////////////

    /*std::string name;

    std::cout << "Ange ditt namn: ";
    std::getline(std::cin,name);

    if (name == "Amin Nazari"){
        std::cout << "We are here" << std::endl;
    } else if (name == "Passi Prudence")
    {
        std::cout << "We are not here" << std::endl;
    } else {
        std::cout << "Fuck you" << std::endl;
    }*/
    
   ///////////////////////////////////////////////////////


    /*std::string name = "Amin Nazari";

    std::cout << name[0] << std::endl;
    std::cout << name << std::endl;

    for (int i = 0; i < name.length(); i++){   
        std::cout << name[i] << std::endl;
    }*/
    
    ///////////////////////////////////////////////////////
    

    /*Greetings();

    std::cout << std::endl;

    std::string name = "Amin ";
    std::string name2 = "Nazari";

    std::string name3 = name.append(name2);

    std::cout << "Längden på strängen är: " << name3.length() << " bokstäver." << std::endl;
    std::cout << "Storleken på strängen är: " << name2.size() << " bokstäver." << std::endl;
    std::cout << name3[name3.length() -1] << std::endl;
    std::cout << name3 << std::endl;
    name.at(2) = 'J';
    std::cout << name << std::endl;




    for(int i = 0; i < name.length(); i++){
        std::cout << name[i] << std::endl;
    }


    std::cout << std::endl;

    for(int j = 0; j < 10; j++){
        if (j % 2 == 0){
        std::cout << j << std::endl;
        
        }
    }*/

    ///////////////////////////////////////////////////////


    /*std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::getline(std::cin,name);

    std::cout << std::endl;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Your name is " << name << " and your age is " << age << "." << std::endl;*/


    ///////////////////////////////////////////////////////


    /*std::cout << sqrt(64) << std::endl;
    std::cout << round(54.4) << std::endl;
    std::cout << log(2) << std::endl;*/


    ///////////////////////////////////////////////////////


    /*int age = 20;
    int age2 = 30;

    std::cout << (age > age2) << std::endl;*/


    ///////////////////////////////////////////////////////

    /*std::string name;
    std::string name2;

    std::cout << "Enter a name: ";
    std::cin >> name;

    std::cout << "Enter another name: ";
    std::cin >> name2;



    if(name == "Amin"){
        if(name2 == "Nazari"){
            std::cout << "Hej" << std::endl;
        }
    } else if(name != "Amin"){
        if(name != "Nazari"){
            std::cout << "Bajs" << std::endl;
        }
    } else {
        std::cout << "Fuck you" << std::endl;
    }*/


    ///////////////////////////////////////////////////////


      /*int number = -1; // Initialisera variabeln

        while (number != 0) { // Ändra villkoret för att avsluta loopen om number är 0
        std::cout << "Enter a number (1-7) or 0 to exit: ";
        std::cin >> number;

        switch (number) {
        case 1:
            std::cout << "Monday" << std::endl;
            break;
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "Wednesday" << std::endl; // Rättade stavfelet "Wednsday" till "Wednesday"
            break;
        case 4:
            std::cout << "Thursday" << std::endl;
            break;
        case 5:
            std::cout << "Friday" << std::endl;
            break;
        case 6:
            std::cout << "Saturday" << std::endl;
            break;
        case 7:
            std::cout << "Sunday" << std::endl;
            break;
        case 0:
            std::cout << "Exiting program." << std::endl;
            break;
        default:
            std::cout << "Invalid input. Please enter a number between 1 and 7, or 0 to exit." << std::endl;
            break;
        }
    }*/

///////////////////////////////////////////////////////

/*int i = 0;
while(i < 5){
    std::cout << i << std::endl;
    i++;
}


int j = 0;

do {
    std::cout << j << std::endl;
    j++;
} while (j > 5);*/

///////////////////////////////////////////////////////


    /*int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < length; i++){
        std::cout << arr[i] << std::endl;
    }*/

///////////////////////////////////////////////////////


   /*std::vector<int> myVect = {1, 2, 3, 4, 5};

    myVect.push_back(10);
    myVect.pop_back();

    int length = myVect.size();

    for (int i = 0; i < length; i++) {
        std::cout << myVect[i] << std::endl;
    }*/

///////////////////////////////////////////////////////

    







    return 0;
}

