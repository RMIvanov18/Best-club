//function for the one of the options of the game
void animals() {

    string correctword;
    cout << "You chose animals. Now let's start with the game" << endl;
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
        cout << "sorry, try again!";
        cin >> correctword;
    }

    cout << "/t/l/a/e/p/e/n/h/" << endl;
    cout << "correct word:";
    cin >> correctword;
    if (correctword == "elephant") {
        cout << "Correct!" << endl;
    }
    else {
        cout << "sorry, try again!";
        cin >> correctword;
    }

    level();

}