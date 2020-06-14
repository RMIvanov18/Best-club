#include <iostream>
#include <string>

using namespace std;
//welcome message function for the whole program
void WelcomeProgram() {
    cout << endl;
    cout << "Hello! Welcome to our program! There are 3 options. Please choose one and let's start!" << endl;
    cout << endl;
}
//welcome message function for the test
void WelcomeTest()

{
    cout << endl;
    cout << "Test your English. This is a quick English test. There are some sentences and you must put the correct word into the gap by writing it down. At the end of the test you will be given a percentage and an approximation of your level." << endl;
    cout << endl;
   
    
   



}
//welcome message function for the game
void WelcomeGame() {
    cout << endl;
    cout << "Welcome to our quick game!If you are looking for a puzzle that is quick and fun, check out our game!" << endl;
    cout << endl;
    cout << "Playing our game is very easy.Simply read the letters and then find and enter the correct word.Good luck!" << endl;

}

//function for choosing an option for the game
void level() {


    cout << "Please choose one of the options:" << endl;

    cout << endl;
    cout << " Animals " << endl;
    cout << " Professions " << endl;

    cout << endl;


}
//function for one of the options of the game
void professions() {


    string correctword;
    cout << "You chose 'Professions'. Now let's start with the game" << endl;
    cout << endl;
    cout << "Find the correct words:" << endl;
    cout << endl;
    cout << "/t/c/a/h/e/r/e/" << endl;
    cout << "correct word:";
    cin >> correctword;
    if (correctword == "teacher") {
        cout << "Correct!" << endl;
    }
    else {
        cout << "Sorry, try again!:";
        cin >> correctword;
    }
    cout << "/r/o/a/p/e/r/m/g/r/m/" << endl;
    cout << "correct word:";
    cin >> correctword;
    if (correctword == "programmer") {
        cout << "Correct!" << endl;
    }
    else {
        cout << "Sorry, try again!:";
        cin >> correctword;
    }

}
//function for the one of the options of the game
void animals() {

    string correctword;
    cout << "You chose 'Animals'. Now let's start with the game" << endl;
    cout << endl;
    cout << "Find the correct words:" << endl;
    cout << endl;
    cout << "/t/c/a/" << endl;
    cout << "correct word:";
    cin >> correctword;
    if (correctword == "cat") {
        cout << "Correct!" << endl;
    }
    else {
        cout << "Sorry, try again!:";
        cin >> correctword;
    }

    cout << "/t/l/a/e/p/e/n/h/" << endl;
    cout << "correct word:";
    cin >> correctword;
    if (correctword == "elephant") {
        cout << "Correct!" << endl;
    }
    else {
        cout << "Sorry, try again!:";
        cin >> correctword;
    }

    level();

}






//function for the game
void Game() {
    string choice;

    cout << "Hello! You chose play game! In this game you have to guess the words. Let's start!" << endl;
    cout << endl;
    level();
    cout << "I choose:";
    cin >> choice;
    if (choice == "Animals")
    {
        animals();

    }
    cin >> choice;
    if (choice == "Professions")
    {
        professions();
    }

    else {
        cout << "Please choose on of the options(Animals/Professions):" << endl;
        cin >> choice;
    }
    cout << "That's the end of the game. Thanks for choosing our game! We hope you enjoy it" << endl;

}
//function for the questions of the test
void Questions()
{

    int counter = 0;
    string choice;
    cout << "Question 1" << endl;
    cout << endl;
    cout << "Tom (is,are,be,am) English" << endl;
    cout << " Your answer:";
    cin >> choice;
    if (choice == "is") {

        counter++;
    }



    cout << "Question 2" << endl;
    cout << endl;
    cout << " I didn't (watched/watching/watch/not watched) TV last night" << endl;
    cout << " Your answer:";
    cin >> choice;
    if (choice == "watch") {

        counter++;
    }


    cout << "Question 3" << endl;
    cout << endl;
    cout << " (Are/Is/Do/Have) there a restaurant near here?" << endl;
    cout << " Your answer:";
    cin >> choice;
    if (choice == "Is") {

        counter++;
    }


    cout << "Question 4" << endl;
    cout << endl;
    cout << " Hurry up or we'll(lose/miss/fail/catch) our train" << endl;
    cout << " Your answer:";
    cin >> choice;
    if (choice == "miss") {

        counter++;
    }



    cout << "Question 5" << endl;
    cout << endl;
    cout << "My mother(said/told/told to)me to buy some tea." << endl;
    cout << " Your answer:";
    cin >> choice;
    if (choice == "told") {

        counter++;
    }



    cout << "Question 6" << endl;
    cout << endl;
    cout << " I don't know many people(who/they/which) still smoke nowadays." << endl;
    cout << " Your answer:";
    cin >> choice;
    if (choice == "who") {

        counter++;
    }


    cout << endl;
    cout << "Question 7" << endl;
    cout << endl;
    cout << "I've never (going/go/went/been) in England" << endl;
    cout << " Your answer:";
    cin >> choice;
    if (choice == "been") {

        counter++;
    }



    cout << "Question 8" << endl;
    cout << endl;
    cout << "You should(to ask/ask/asked/asking)for directions if you're lost." << endl;
    cout << " Your answer:";
    cin >> choice;
    if (choice == "ask") {

        counter++;
    }



    cout << "Question 9" << endl;
    cout << endl;
    cout << " I think I've got a cold, I can't stop(sneeze/sneezing/the sneeze/to sneeze)" << endl;
    cout << " Your answer:";
    cin >> choice;
    if (choice == "sneezing") {

        counter++;
    }




    cout << "Question 10" << endl;
    cout << endl;
    cout << "You(must/must/must)give us 6" << endl;
    cout << " Your answer:";
    cin >> choice;
    if (choice == "must") {

        counter++;
    }



    int totalScore;
    totalScore = counter * 10;
    cout << "Thank you for taking the time to complete this test. You have now reached the end." << endl;
    cout << "Please click Submit below to see your final score and our assessment of what we think your English level might be." << endl;
    cout << "3. Submit" << endl;
    cin >> choice;
    cout << endl;

    cout << "Your score are:" << totalScore << "%" << endl;
    cout << endl;
    cout << endl;
    cout << "Between 0% and 20% suggests your level is Beginner to Elementary.\n Between 21% and 40% suggests your level is Pre-Intermediate.\n Between 41% and 60% suggests your level is Intermediate.\n Between 61% and 80% suggests your level is Upper-Intermediate.\n Between 81% and 99% suggests your level is Advanced.\n 100% is a perfect score! Your English is excellent." << endl;
}

//function for the thirth option-finf word in a text
void find() {
    string line;
    string findword;

    line.assign(120, '*');
    cout << "We all have heard about Computer Programming gaining a lot of popularity in the past 3 decades. So many students these days want to opt for a Computer Science stream in order to get a job at their dream tech company - Google, Facebook, Microsoft, Apple, and whatnot." << endl;
    cout << endl;
    cout << line << endl;
    cout << endl;

    cout << "Now the program will show you where is the word:";
    cin >> findword;
    cout << line << endl;
    
    cout << endl;
    string str("We all have heard about Computer Programming gaining a lot of popularity in the past 3 decades. So many students these days want to opt for a Computer Science stream in order to get a job at their dream tech company - Google, Facebook, Microsoft, Apple, and whatnot.");
    string str2(findword);


    size_t found = str.find(str2);
    if (found != string::npos)
        cout << findword << " found at:" << found << endl;



    cout << line<<endl;
    string replace;

    cout << "Now the program will replace your word with the word:";
    cin >> replace;
    cout << endl;
    cout << line << endl;
    str.replace(str.find(str2), str2.length(), replace);
    cout << str << endl;


}

//function for the Main Menu of the program
void Menu()
{
    int choice;
    cout << "1. Start test" << endl;
    cout << "2. Start game" << endl;
    cout << "3. Find and replace a word in a text" << endl;
    cin >> choice;

    switch (choice)

    {
    case 1:
        WelcomeTest();
        Questions();
        cout << endl;
        Menu();
        cout << endl;
        break;

    case 2:
        WelcomeGame();
        Game();
        cout << endl;
        Menu();
        cout << endl;
        break;
    case 3:
        find();
        cout << endl;
        Menu();
        break;

    }

}
int main() {

    WelcomeProgram();
    Menu();
    system("PAUSE");
    return 1;


}