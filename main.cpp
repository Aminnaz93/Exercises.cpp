#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <list>
#include "function.cpp"
#include "struct.cpp"
#include "class.cpp"



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

   /*int myNumbers[] = {1,2,23,43124,35,346,45,6754,675,47,45,7};

    int siz = sizeof(myNumbers);

    std::cout << siz << std::endl;

    std::list<int> myList = {1,2,3,4,4,5,35,35,43};

    int size = myList.size();

    std::cout << size << std::endl;*/

    ///////////////////////////////////////////////////////


/*   int sum = add(2,3);

   std::cout << "The sum of addition is: " << sum << std::endl;

   int arr[] = {2,3,4,24,2,523,5,2345,23,423};

   int length = sizeof(arr) / sizeof(arr[0]);

   std::cout << "The length of the array is: " << length << std::endl;


    */

///////////////////////////////////////////////////////


/*int arr[] = {132,423,432,423,4,323,12,3214,32,3421,3};

int length = sizeof(arr) / sizeof(arr[0]);

std::cout << "The size of the array is: " << length << std::endl;


std::cout << std::endl;

for(int i = 0; i < length; i++){
    std::cout << arr[i] << std::endl;
}


std::vector<int> myVec = {32,4,423,5,24,2,43,24,32};

std::sort(myVec.begin(), myVec.end());

for(int num : myVec){
    std::cout << num << std::endl;
}*/


///////////////////////////////////////////////////////

/*Student student1 = {"Amin Nazari", 20, 181, 'A'};

std::cout << "The students name is: " << student1.name << std::endl;
std::cout << "The students age is: " << student1.age << std::endl;
std::cout << "The students height is: " << student1.height << std::endl;
std::cout << "The students grade is: " << student1.grade << std::endl;*/

///////////////////////////////////////////////////////


/*std::string food = "Pizza";
std::string &meal = food;

meal = "Avocado";

std::cout << food << std::endl;
std::cout << meal << std::endl;
std::cout << &food << std::endl;
std::cout << &meal << std::endl;*/

///////////////////////////////////////////////////////

/*std::string food = "Avocado";
std::string *ptr = &food;

*ptr = "Banana";

std::cout << food << std::endl;
std::cout << &food << std::endl;
std::cout << ptr << std::endl;
std::cout << *ptr << std::endl;*/

///////////////////////////////////////////////////////

/*int value = 5;

std::cout << "Before the change: " << value << std::endl;

updateValue(value);

std::cout << "The new value is: " << value << std::endl;
*/


///////////////////////////////////////////////////////

//name1("Amin ");

///////////////////////////////////////////////////////

/*int sum = add1(4);

std::cout << "Resultet är: " << sum << std::endl;*/

///////////////////////////////////////////////////////

/*int myArr[] = {1,2,3,4,5,7,8,9,10};

 int length = sizeof(myArr) / sizeof(myArr[0]);

myArray(myArr,length);*/


///////////////////////////////////////////////////////

/*int sum1 = add(3,4,5);

std::cout << sum1 << std::endl;

test();

int sum2 = sum(3,4);

std::cout << sum2 << std::endl;
*/


///////////////////////////////////////////////////////

/*MyClass student1;

int speed = student1.MaxSpeed(200);


std::cout << "Max Speed: " << speed << std::endl;


student1.setName("Amin");
student1.setAge(20);
student1.setGrade('B');

student1.getName();
student1.getAge();
student1.getGrade();

student1.setName("Passi");

student1.getName();*/


///////////////////////////////////////////////////////

/*Car car1("BMW", "X6", 1993);

car1.getBrand();
car1.getModel();
car1.getYear();

std::cout << std::endl;

car1.setBrand("Mercedes");
car1.setModel("A-Class");
car1.setYear(2024);


car1.getBrand();
car1.getModel();
car1.getYear();
*/


///////////////////////////////////////////////////////

/*MyClass student1;
MyClass student2;

student1.setName("Amin");
student1.setAge(20);
student1.setGrade('A');


student1.getName();
student1.getAge();
student1.getGrade();

std::cout << std::endl;


student2.setName("Passi");
student2.setAge(10);
student2.setGrade('B');

student2.getName();
student2.getAge();
student2.getGrade();
*/

///////////////////////////////////////////////////////


Spiderman spiderman1("Black Spiderman", 20, 1000);

spiderman1.getAttack();
















return 0;
}

