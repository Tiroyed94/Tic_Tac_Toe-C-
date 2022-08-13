//Made by: Robert Rabins
//Date made: 8/12/2022

#include <iostream>
#include <string>

using namespace std;

string one = "#", two = "#", three = "#", four = "#", five = "#", six = "#", seven = "#", eight = "#", nine = "#";

int main() {
	bool gameplay = true;

		while (gameplay) {

			int playerOne, playerTwo;

			//Board began / update, and player twos selection update
			cout << one << " | " << two << " | " << three << endl;
			cout << "----------" << endl;
			cout << four << " | " << five << " | " << six << endl;
			cout << "----------" << endl;
			cout << seven << " | " << eight << " | " << nine << endl << endl;

			// Winning condtions for player two
			if (((one == "o") && (two == "o") && (three == "o")) || ((four == "o") && (five == "o") && (six == "o")) || ((seven == "o") && (eight == "o") && (nine == "o"))) {
				cout << "Player two wins!" << endl;
				gameplay == false;
				break;
			}
			else if (((one == "o") && (four == "o") && (seven == "o")) || ((two == "o") && (five == "o") && (eight == "o")) || ((three == "o") && (six == "o") && (nine == "o"))) {
				cout << "Player two wins!" << endl;
				gameplay == false;
				break;
			}
			else if (((one == "o") && (five == "o") && (nine == "o")) || ((three == "o") && (five == "o") && (seven == "o"))) {
				cout << "Player two wins!" << endl;
				gameplay == false;
				break;
			}


			// Player ones turn
			while (true) {
				cout << "Player one, choose a number 1 - 9: ";
				cin >> playerOne;
				cout << endl;

				switch (playerOne) {
				case 1:
					one = 'x';
					break;
				case 2:
					two = 'x';
					break;
				case 3:
					three = 'x';
					break;
				case 4:
					four = 'x';
					break;
				case 5:
					five = 'x';
					break;
				case 6:
					six = 'x';
					break;
				case 7:
					seven = 'x';
					break;
				case 8:
					eight = 'x';
					break;
				case 9:
					nine = 'x';
					break;
				default:
					cout << "Not a vaild selection try again: ";
					cin >> playerOne;
				};

				break;
			};

			//Board update, shows player ones selection
			cout << one << " | " << two << " | " << three << endl;
			cout << "----------" << endl;
			cout << four << " | " << five << " | " << six << endl;
			cout << "----------" << endl;
			cout << seven << " | " << eight << " | " << nine << endl << endl;

			// Winning condtions for player one
			if (((one == "x") && (two == "x") && (three == "x")) || ((four == "x") && (five == "x") && (six == "x")) || ((seven == "x") && (eight == "x") && (nine == "x"))) {
				cout << "Player one wins!" << endl;
				gameplay == false;
				break;
			}
			else if (((one == "x") && (four == "x") && (seven == "x")) || ((two == "x") && (five == "x") && (eight == "x")) || ((three == "x") && (six == "x") && (nine == "x"))) {
				cout << "Player one wins!" << endl;
				gameplay == false;
				break;
			}
			else if (((one == "x") && (five == "x") && (nine == "x")) || ((three == "x") && (five == "x") && (seven == "x"))) {
				cout << "Player one wins!" << endl;
				gameplay == false;
				break;
			}

			// Player twos turn
			while (true) {
				cout << "Player two, choose a number 1 - 9: ";
				cin >> playerTwo;
				cout << endl;

				switch (playerTwo) {
				case 1:
					one = 'o';
					break;
				case 2:
					two = 'o';
					break;
				case 3:
					three = 'o';
					break;
				case 4:
					four = 'o';
					break;
				case 5:
					five = 'o';
					break;
				case 6:
					six = 'o';
					break;
				case 7:
					seven = 'o';
					break;
				case 8:
					eight = 'o';
					break;
				case 9:
					nine = 'o';
					break;
				default:
					cout << "Not a vaild selection try again: ";
					cin >> playerTwo;
				};
				break;
			};




		};

};

