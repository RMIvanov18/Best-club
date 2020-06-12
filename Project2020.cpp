#include <iostream>
#include <string>

using namespace std;

void Welcome()//function for welcome message

{

    cout << "Test your English. This is a quick English test. There are some sentences and you must put the correct word into the gap by writing it down. At the end of the test you will be given a percentage and an approximation of your level." << endl;
    cout << "Welcome to our quiz!" << endl;
    cout << endl;
    cout << "Before you start please choose an option:" << endl;
}

void findGr()//function for the menu of the program
{

    int counter = 0;//to count a mark of each question
    string choice;
    cout << "Question 1" << endl;
    cout << endl;
    cout << "Tom (is/are/be/am) English" << endl;
    cout << " Your answer:";
    cin >> choice;
    if (choice == "is") //if statement which count +1 point if the user write the correct word
    {

        counter++;//+1 point if the user write the correct word
    }



    cout << "Question 2" << endl;
    cout << endl;
    cout << " I didn't (watched/watching/watch/not watched) TV last night" << endl;
    cout << " Your answer:";
    cin >> choice;
    if (choice == "watch") {

        counter++;//+1 point if the user write the correct word
    }


    cout << "Question 3" << endl;
    cout << endl;
    cout << " (Are/Is/Do/Have) there a restaurant near here?" << endl;
    cout << " Your answer:";
    cin >> choice;
    if (choice == "Is") {

        counter++;//+1 point if the user write the correct word
    }


    cout << "Question 4" << endl;
    cout << endl;
    cout << " Hurry up or we'll(lose/miss/fail/catch) our train" << endl;
    cout << " Your answer:";
    cin >> choice;
    if (choice == "miss") {

        counter++;//+1 point if the user write the correct word
    }



    cout << "Question 5" << endl;
    cout << endl;
    cout << "My mother(said/told/told to)me to buy some tea." << endl;
    cout << " Your answer:";
    cin >> choice;
    if (choice == "told") {

        counter++;//+1 point if the user write the correct word
    }



    cout << "Question 6" << endl;
    cout << endl;
    cout << " I don't know many people(who/they/which) still smoke nowadays." << endl;
    cout << " Your answer:";
    cin >> choice;
    if (choice == "who") {

        counter++;//+1 point if the user write the correct word
    }


    cout << endl;
    cout << "Question 7" << endl;
    cout << endl;
    cout << "I've never (going/go/went/been) in England" << endl;
    cout << " Your answer:";
    cin >> choice;
    if (choice == "been") {

        counter++;//+1 point if the user write the correct word
    }



    cout << "Question 8" << endl;
    cout << endl;
    cout << "You should(to ask/ask/asked/asking)for directions if you're lost." << endl;
    cout << " Your answer:";
    cin >> choice;
    if (choice == "ask") {

        counter++;//+1 point if the user write the correct word
    }



    cout << "Question 9" << endl;
    cout << endl;
    cout << " I think I've got a cold, I can't stop(sneeze/sneezing/the sneeze/to sneeze)" << endl;
    cout << " Your answer:";
    cin >> choice;
    if (choice == "sneezing") {

        counter++;//+1 point if the user write the correct word
    }




    cout << "Question 10" << endl;
    cout << endl;
    cout << "You(must/must/must)give us 6" << endl;
    cout << " Your answer:";
    cin >> choice;
    if (choice == "must") {

        counter++;//+1 point if the user write the correct word
    }



    int totalScore;
    totalScore = counter*100/10;//calculate the percentage
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





void Menu()//main function for the output menu
{
    int choice;
    cout << "1. Start test" << endl;
    cout << "2. Exit" << endl;
    cin >> choice;

    switch (choice) {
    case 1:
        findGr();
        break;

    case 2:

        break;
    case 3:
        break;
    }

}
int main() //the main function which run the whole program
{

    Welcome();
    Menu();
    system("PAUSE");
    return 1;


}