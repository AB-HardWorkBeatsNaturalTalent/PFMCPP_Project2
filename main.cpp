#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int
 unsigned int
 float
 double
 bool
 char
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number1 = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    int fumber = 0;
    int gumber = 5;
    int bumber = 4;

    float f1 = 1.0f;
    float f2 = 2.0f;
    float f3 = 3.2f;

    double d1 = 1.0;
    double d2 = 2.3;
    double d3 = 2.0;

    unsigned int ui1 = 1;
    unsigned int ui2 = 2;
    unsigned int ui3 = 100;

    char c1 = 'a';
    char c2 = 'z';
    char c3 = 'f';

    bool b1 = true;
    bool b2 = true;
    bool b3 = false;

    
    ignoreUnused(number1, fumber, gumber, bumber, f1, f2, f3, d1, d2, d3, ui1, ui2, ui3, c1, c2, c3, b1, b2, b3); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void buildHouse(int squareFeet = 0)
{
    ignoreUnused(squareFeet);
}

/*
 2)
 */
int caloriesBurned(int hoursSlept)
{
    ignoreUnused(hoursSlept);
    return {};
}

/*
 3)
 */
void scooped(float howDeepToScoop = 1.0f, float howBeepToBoop = 12.02f)
{//an empty function for scooping
    ignoreUnused(howDeepToScoop, howBeepToBoop);
}

/*
 4)
 */
float returnAFloat(char choice = 'y')
{
    ignoreUnused(choice);
    return {};
}

/*
 5)
 */
char getALetter(int letterIndex = 0, char butNotThisLetter = 'z')
{
    ignoreUnused(letterIndex, butNotThisLetter);
    return {};
}

/*
 6)
 */
void doWork(int firstParam = 1, int secondParam = 10)
{
    ignoreUnused(firstParam, secondParam);
}

/*
 7)
 */
double calculateTotalPay(int monthsWorked, double salary = 10000000.00)
{
    ignoreUnused(salary, monthsWorked);
    return {};
}

/*
 8)
 */
float makeItFloat(int toFloat = 9)
{
    ignoreUnused(toFloat);
    return {};
}

/*
 9)
 */
void doNothing(bool unecessary = false)
{
    ignoreUnused(unecessary);
}

/*
 10)
 */
int howManyFreeBurgers(int wholeBurgers = 0)
{
    ignoreUnused(wholeBurgers);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    buildHouse(3);
    //2)
    auto cals = caloriesBurned(8);
    //3)
    scooped();
    //4)
    auto flTemp = returnAFloat('n');
    //5)
    auto letter = getALetter();
    //6)
    doWork();
    //7)
    auto totalPay = calculateTotalPay(12, 144000.69);
    //8)
    auto iToF = makeItFloat(40);
    //9)
    doNothing();
    //10)
    auto freeBurgers = howManyFreeBurgers(100);
    
    ignoreUnused(carRented, cals, flTemp, letter, totalPay, iToF, freeBurgers);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
