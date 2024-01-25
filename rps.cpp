#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
string randomElement(){
    srand(time(0));
    int num = rand() % 3;
    string el ="";
    if (num == 0){
        return el ="rock";
    }else if (num == 1){
        return el ="paper";
    } return el ="scissors";
}
int main(){
    int test;
    string el = randomElement();
    string input_el="";
    cout << "Type rock, paper or scissors: ";
    cin >> input_el;
    if (input_el == "rock" && el == "scissors"){
        cout << "You win! :)" << endl;
    }
    else if (input_el == "rock" && el == "paper"){
        cout << "You lose. :(" << endl;
    }
    else if (input_el == "paper" && el == "rock"){
        cout << "You win! :)" << endl;
    }
    else if (input_el == "paper" && el == "scissors"){
        cout << "You lost. :(" << endl;
    }
    else if (input_el == "scissors" && el == "paper"){
        cout << "You win! :)" << endl;
    }
    else if (input_el == "scissors" && el == "rock"){
        cout << "You lose. :(" << endl;
    }
    else if (input_el == "rock" && el == "rock"){
        cout << "It's a tie." << endl;
    }
    else if (input_el == "scissors" && el == "scissors"){
        cout << "It's a tie." << endl;
    }
    else if (input_el == "paper" && el == "paper"){
        cout << "It's a tie." << endl;
    }
    cout << "Your CPU opponent chose: " << el;
    return 0;
}