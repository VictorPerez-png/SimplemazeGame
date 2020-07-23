#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string playerName;
	string startingPosition;

	char A;
	char B;
	char C;
	char D;
	char E;
	char movementOption;


	vector<char> yPosition(5);

	yPosition.at(0) = 'A';
	yPosition.at(1) = 'B';
	yPosition.at(2) = 'C';
	yPosition.at(3) = 'D';
	yPosition.at(4) = 'E';

	vector<int> xPosition(5);

	xPosition.at(0) = 1;
	xPosition.at(1) = 2;
	xPosition.at(2) = 3;
	xPosition.at(3) = 4;
	xPosition.at(4) = 5;

	std::vector<std::string> mazeMap =
	{
	    R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
	    R"(  +---+---+---+---+   +)",
	    R"(C |                   |)",
	    R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
	};
	std::vector<std::string> A5 =
	{
	    R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
	    R"(  +---+---+---+---+   +)",
	    R"(C |                   |)",
	    R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                 X |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
	};

    std::vector<std::string> A4 =
	{
	    R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
	    R"(  +---+---+---+---+   +)",
	    R"(C |                   |)",
	    R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |             X     |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
	};

    std::vector<std::string> A3 =
	{
	    R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
	    R"(  +---+---+---+---+   +)",
	    R"(C |                   |)",
	    R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |         X         |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
	};


    std::vector<std::string> A2 =
	{
	    R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
	    R"(  +---+---+---+---+   +)",
	    R"(C |                   |)",
	    R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |     X             |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )",
	};

	std::vector<std::string> A1 =
	{
	    R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
	    R"(  +---+---+---+---+   +)",
	    R"(C |                   |)",
	    R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A | X                 |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )",
	};

	std::vector<std::string> B5 =
	{
	    R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
	    R"(  +---+---+---+---+   +)",
	    R"(C |                   |)",
	    R"(  +---+---+---+       +)",
	    R"(B | S     |       | X |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
	};

	std::vector<std::string> B4 =
	{
        R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
	    R"(  +---+---+---+---+   +)",
	    R"(C |                   |)",
	    R"(  +---+---+---+       +)",
	    R"(B | S     |     X |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
	};

	std::vector<std::string> B3 =
	{
	     R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
	    R"(  +---+---+---+---+   +)",
	    R"(C |                   |)",
	    R"(  +---+---+---+       +)",
	    R"(B | S     | X     |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
	};

    std::vector<std::string> B2 =
	{
	    R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
	    R"(  +---+---+---+---+   +)",
	    R"(C |                   |)",
	    R"(  +---+---+---+       +)",
	    R"(B | S   X |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
	};

	std::vector<std::string> B1 =
	{
	     R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
	    R"(  +---+---+---+---+   +)",
	    R"(C |                   |)",
	    R"(  +---+---+---+       +)",
	    R"(B | X     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
	};

	std::vector<std::string> C5 =
	{
	    R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
        R"(  +---+---+---+---+   +)",
        R"(C |                 X |)",
        R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
        };

    std::vector<std::string> C4 =
        {
        R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
        R"(  +---+---+---+---+   +)",
        R"(C |             X     |)",
        R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
        };

    std::vector<std::string> C3 =
    {
        R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
        R"(  +---+---+---+---+   +)",
        R"(C |         X         |)",
        R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
        };

    std::vector<std::string> C2 =
    {
        R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
        R"(  +---+---+---+---+   +)",
        R"(C |     X             |)",
        R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
    };

    std::vector<std::string> C1 =
    {
        R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
        R"(  +---+---+---+---+   +)",
        R"(C | X                 |)",
        R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
    };

    std::vector<std::string> D5 =
    {
        R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                 X |)",
        R"(  +---+---+---+---+   +)",
        R"(C |                   |)",
        R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
    };

    std::vector<std::string> D4 =
    {
        R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |             X     |)",
        R"(  +---+---+---+---+   +)",
        R"(C |                   |)",
        R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
    };

    std::vector<std::string> D3 =
    {
        R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |         X         |)",
        R"(  +---+---+---+---+   +)",
        R"(C |                   |)",
        R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
    };

    std::vector<std::string> D2 =
    {
        R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |     X             |)",
        R"(  +---+---+---+---+   +)",
        R"(C |                   |)",
        R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
    };

    std::vector<std::string> D1 =
    {
        R"(  +---+---+---+---+---+)",
	    R"(E | E         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D | X                 |)",
        R"(  +---+---+---+---+   +)",
        R"(C |                   |)",
        R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
    };

    std::vector<std::string> E5 =
    {
        R"(  +---+---+---+---+---+)",
	    R"(E | E         |     X |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
        R"(  +---+---+---+---+   +)",
        R"(C |                   |)",
        R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
    };

    std::vector<std::string> E4 =
    {
        R"(  +---+---+---+---+---+)",
	    R"(E | E         | X     |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
        R"(  +---+---+---+---+   +)",
        R"(C |                   |)",
        R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
    };

    std::vector<std::string> E3 =
    {
        R"(  +---+---+---+---+---+)",
	    R"(E | E       X |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
        R"(  +---+---+---+---+   +)",
        R"(C |                   |)",
        R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
    };

    std::vector<std::string> E2 =
    {
        R"(  +---+---+---+---+---+)",
	    R"(E | E   X     |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
        R"(  +---+---+---+---+   +)",
        R"(C |                   |)",
        R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
    };

    std::vector<std::string> E1 =
    {
        R"(  +---+---+---+---+---+)",
	    R"(E | X         |       |)",
	    R"(  +---+---+   +   +---+)",
	    R"(D |                   |)",
        R"(  +---+---+---+---+   +)",  // this means the player has won//
        R"(C |                   |)",
        R"(  +---+---+---+       +)",
	    R"(B | S     |       |   |)",
	    R"(  +---+   +---+---+   +)",
	    R"(A |                   |)",
	    R"(  +---+---+---+---+---+)",
	    R"(    1   2   3   4   5  )"
    };

	cout << "Please enter your name" << endl;
	cin  >> playerName;
	cout << "Hello " << playerName << " welcome to my maze." << endl;
	cout << "I have no idea how you ended up in here, and I doubt you know how it happened either." << endl;
	cout << "How you got here doesn't matter, what does matter is you leave the way you came in." << endl;
	cout << "Goodluck kid." << endl << endl << endl;
	cout << "Would you like to begin? y/n" << endl;

	char startChoice;
	cin >> startChoice;
	startingPosition = "B2";

	if (startChoice == 'y'){
        cout << "This is your starting position: " << startingPosition << endl;
        cout << "S is start, E is end, and your position will be shown with an X after you leave the start." << endl;
        cout << mazeMap.at(0)  << endl;
        cout << mazeMap.at(1)  << endl;
        cout << mazeMap.at(2)  << endl;
        cout << mazeMap.at(3)  << endl;
        cout << mazeMap.at(4)  << endl;
        cout << mazeMap.at(5)  << endl;
        cout << mazeMap.at(6)  << endl;
        cout << mazeMap.at(7)  << endl;
        cout << mazeMap.at(8)  << endl;
        cout << mazeMap.at(9)  << endl;
        cout << mazeMap.at(10) << endl;
        cout << mazeMap.at(11) << endl;
}
    else if (startChoice == 'n'){
            cout << "Very well, I guess you can stay a while." << endl;
    }

    else {
        cout << "Error invalid option." << endl;
    }

    int playerXposition = 1;
    char playerYposition = 'B';

    while ((playerXposition > 1) || (playerYposition < 'E')){
        cout << "What direction would you like to move in? (N/E/S/W)" << endl;
        cin  >> movementOption;
        if (movementOption == 'E'){
            cout << "You move to the East." << endl;
            playerXposition = playerXposition + 1;

                if (playerXposition == 5 && playerYposition == 'B'){
                    cout << B5.at(0)  << endl;
                    cout << B5.at(1)  << endl;
                    cout << B5.at(2)  << endl;
                    cout << B5.at(3)  << endl;
                    cout << B5.at(4)  << endl;
                    cout << B5.at(5)  << endl;
                    cout << B5.at(6)  << endl;
                    cout << B5.at(7)  << endl;
                    cout << B5.at(8)  << endl;
                    cout << B5.at(9)  << endl;
                    cout << B5.at(10) << endl;
                    cout << B5.at(11) << endl;
                }
                else if (playerXposition == 4 && playerYposition == 'B'){
                    cout << B4.at(0)  << endl;
                    cout << B4.at(1)  << endl;
                    cout << B4.at(2)  << endl;
                    cout << B4.at(3)  << endl;
                    cout << B4.at(4)  << endl;
                    cout << B4.at(5)  << endl;
                    cout << B4.at(6)  << endl;
                    cout << B4.at(7)  << endl;
                    cout << B4.at(8)  << endl;
                    cout << B4.at(9)  << endl;
                    cout << B4.at(10) << endl;
                    cout << B4.at(11) << endl;
                }
                else if (playerXposition == 3 && playerYposition == 'B') {
                    cout << B3.at(0)  << endl;
                    cout << B3.at(1)  << endl;
                    cout << B3.at(2)  << endl;
                    cout << B3.at(3)  << endl;
                    cout << B3.at(4)  << endl;
                    cout << B3.at(5)  << endl;
                    cout << B3.at(6)  << endl;
                    cout << B3.at(7)  << endl;
                    cout << B3.at(8)  << endl;
                    cout << B3.at(9)  << endl;
                    cout << B3.at(10) << endl;
                    cout << B3.at(11) << endl;
                }
                else if (playerXposition == 2 && playerYposition == 'B') {
                    cout << B2.at(0)  << endl;
                    cout << B2.at(1)  << endl;
                    cout << B2.at(2)  << endl;
                    cout << B2.at(3)  << endl;
                    cout << B2.at(4)  << endl;
                    cout << B2.at(5)  << endl;
                    cout << B2.at(6)  << endl;
                    cout << B2.at(7)  << endl;
                    cout << B2.at(8)  << endl;
                    cout << B2.at(9)  << endl;
                    cout << B2.at(10) << endl;
                    cout << B2.at(11) << endl;
                }
                else if (playerXposition == 1 && playerYposition == 'B') {
                    cout << B1.at(0)  << endl;
                    cout << B1.at(1)  << endl;
                    cout << B1.at(2)  << endl;
                    cout << B1.at(3)  << endl;
                    cout << B1.at(4)  << endl;
                    cout << B1.at(5)  << endl;
                    cout << B1.at(6)  << endl;
                    cout << B1.at(7)  << endl;
                    cout << B1.at(8)  << endl;
                    cout << B1.at(9)  << endl;
                    cout << B1.at(10) << endl;
                    cout << B1.at(11) << endl;
                }
                else if (playerXposition == 5 && playerYposition == 'A') {
                    cout << A5.at(0)  << endl;
                    cout << A5.at(1)  << endl;
                    cout << A5.at(2)  << endl;
                    cout << A5.at(3)  << endl;
                    cout << A5.at(4)  << endl;
                    cout << A5.at(5)  << endl;
                    cout << A5.at(6)  << endl;
                    cout << A5.at(7)  << endl;
                    cout << A5.at(8)  << endl;
                    cout << A5.at(9)  << endl;
                    cout << A5.at(10) << endl;
                    cout << A5.at(11) << endl;
                }
                else if (playerXposition == 4 && playerYposition == 'A') {
                    cout << A4.at(0)  << endl;
                    cout << A4.at(1)  << endl;
                    cout << A4.at(2)  << endl;
                    cout << A4.at(3)  << endl;
                    cout << A4.at(4)  << endl;
                    cout << A4.at(5)  << endl;
                    cout << A4.at(6)  << endl;
                    cout << A4.at(7)  << endl;
                    cout << A4.at(8)  << endl;
                    cout << A4.at(9)  << endl;
                    cout << A4.at(10) << endl;
                    cout << A4.at(11) << endl;
                }
                else if (playerXposition == 3 && playerYposition == 'A') {
                    cout << A3.at(0)  << endl;
                    cout << A3.at(1)  << endl;
                    cout << A3.at(2)  << endl;
                    cout << A3.at(3)  << endl;
                    cout << A3.at(4)  << endl;
                    cout << A3.at(5)  << endl;
                    cout << A3.at(6)  << endl;
                    cout << A3.at(7)  << endl;
                    cout << A3.at(8)  << endl;
                    cout << A3.at(9)  << endl;
                    cout << A3.at(10) << endl;
                    cout << A3.at(11) << endl;
                }
                else if (playerXposition == 2 && playerYposition == 'A') {
                    cout << A2.at(0)  << endl;
                    cout << A2.at(1)  << endl;
                    cout << A2.at(2)  << endl;
                    cout << A2.at(3)  << endl;
                    cout << A2.at(4)  << endl;
                    cout << A2.at(5)  << endl;
                    cout << A2.at(6)  << endl;
                    cout << A2.at(7)  << endl;
                    cout << A2.at(8)  << endl;
                    cout << A2.at(9)  << endl;
                    cout << A2.at(10) << endl;
                    cout << A2.at(11) << endl;
                }
                else if (playerXposition == 1 && playerYposition == 'A') {
                    cout << A1.at(0)  << endl;
                    cout << A1.at(1)  << endl;
                    cout << A1.at(2)  << endl;
                    cout << A1.at(3)  << endl;
                    cout << A1.at(4)  << endl;
                    cout << A1.at(5)  << endl;
                    cout << A1.at(6)  << endl;
                    cout << A1.at(7)  << endl;
                    cout << A1.at(8)  << endl;
                    cout << A1.at(9)  << endl;
                    cout << A1.at(10) << endl;
                    cout << A1.at(11) << endl;
                }
                 else if (playerXposition == 5 && playerYposition == 'C') {
                    cout << C5.at(0)  << endl;
                    cout << C5.at(1)  << endl;
                    cout << C5.at(2)  << endl;
                    cout << C5.at(3)  << endl;
                    cout << C5.at(4)  << endl;
                    cout << C5.at(5)  << endl;
                    cout << C5.at(6)  << endl;
                    cout << C5.at(7)  << endl;
                    cout << C5.at(8)  << endl;
                    cout << C5.at(9)  << endl;
                    cout << C5.at(10) << endl;
                    cout << C5.at(11) << endl;
                }
                else if (playerXposition == 4 && playerYposition == 'C') {
                    cout << C4.at(0)  << endl;
                    cout << C4.at(1)  << endl;
                    cout << C4.at(2)  << endl;
                    cout << C4.at(3)  << endl;
                    cout << C4.at(4)  << endl;
                    cout << C4.at(5)  << endl;
                    cout << C4.at(6)  << endl;
                    cout << C4.at(7)  << endl;
                    cout << C4.at(8)  << endl;
                    cout << C4.at(9)  << endl;
                    cout << C4.at(10) << endl;
                    cout << C4.at(11) << endl;
                }
                else if (playerXposition == 3 && playerYposition == 'C') {
                    cout << C3.at(0)  << endl;
                    cout << C3.at(1)  << endl;
                    cout << C3.at(2)  << endl;
                    cout << C3.at(3)  << endl;
                    cout << C3.at(4)  << endl;
                    cout << C3.at(5)  << endl;
                    cout << C3.at(6)  << endl;
                    cout << C3.at(7)  << endl;
                    cout << C3.at(8)  << endl;
                    cout << C3.at(9)  << endl;
                    cout << C3.at(10) << endl;
                    cout << C3.at(11) << endl;
                }
                else if (playerXposition == 2 && playerYposition == 'C') {
                    cout << C2.at(0)  << endl;
                    cout << C2.at(1)  << endl;
                    cout << C2.at(2)  << endl;
                    cout << C2.at(3)  << endl;
                    cout << C2.at(4)  << endl;
                    cout << C2.at(5)  << endl;
                    cout << C2.at(6)  << endl;
                    cout << C2.at(7)  << endl;
                    cout << C2.at(8)  << endl;
                    cout << C2.at(9)  << endl;
                    cout << C2.at(10) << endl;
                    cout << C2.at(11) << endl;
                }
                else if (playerXposition == 1 && playerYposition == 'C') {
                    cout << C1.at(0)  << endl;
                    cout << C1.at(1)  << endl;
                    cout << C1.at(2)  << endl;
                    cout << C1.at(3)  << endl;
                    cout << C1.at(4)  << endl;
                    cout << C1.at(5)  << endl;
                    cout << C1.at(6)  << endl;
                    cout << C1.at(7)  << endl;
                    cout << C1.at(8)  << endl;
                    cout << C1.at(9)  << endl;
                    cout << C1.at(10) << endl;
                    cout << C1.at(11) << endl;
                }
                 else if (playerXposition == 5 && playerYposition == 'D') {
                    cout << D5.at(0)  << endl;
                    cout << D5.at(1)  << endl;
                    cout << D5.at(2)  << endl;
                    cout << D5.at(3)  << endl;
                    cout << D5.at(4)  << endl;
                    cout << D5.at(5)  << endl;
                    cout << D5.at(6)  << endl;
                    cout << D5.at(7)  << endl;
                    cout << D5.at(8)  << endl;
                    cout << D5.at(9)  << endl;
                    cout << D5.at(10) << endl;
                    cout << D5.at(11) << endl;
                }
                else if (playerXposition == 4 && playerYposition == 'D') {
                    cout << D4.at(0)  << endl;
                    cout << D4.at(1)  << endl;
                    cout << D4.at(2)  << endl;
                    cout << D4.at(3)  << endl;
                    cout << D4.at(4)  << endl;
                    cout << D4.at(5)  << endl;
                    cout << D4.at(6)  << endl;
                    cout << D4.at(7)  << endl;
                    cout << D4.at(8)  << endl;
                    cout << D4.at(9)  << endl;
                    cout << D4.at(10) << endl;
                    cout << D4.at(11) << endl;
                }
                else if (playerXposition == 3 && playerYposition == 'D') {
                    cout << D3.at(0)  << endl;
                    cout << D3.at(1)  << endl;
                    cout << D3.at(2)  << endl;
                    cout << D3.at(3)  << endl;
                    cout << D3.at(4)  << endl;
                    cout << D3.at(5)  << endl;
                    cout << D3.at(6)  << endl;
                    cout << D3.at(7)  << endl;
                    cout << D3.at(8)  << endl;
                    cout << D3.at(9)  << endl;
                    cout << D3.at(10) << endl;
                    cout << D3.at(11) << endl;
                }
                else if (playerXposition == 2 && playerYposition == 'D') {
                    cout << D2.at(0)  << endl;
                    cout << D2.at(1)  << endl;
                    cout << D2.at(2)  << endl;
                    cout << D2.at(3)  << endl;
                    cout << D2.at(4)  << endl;
                    cout << D2.at(5)  << endl;
                    cout << D2.at(6)  << endl;
                    cout << D2.at(7)  << endl;
                    cout << D2.at(8)  << endl;
                    cout << D2.at(9)  << endl;
                    cout << D2.at(10) << endl;
                    cout << D2.at(11) << endl;
                }
                else if (playerXposition == 1 && playerYposition == 'D') {
                    cout << D1.at(0)  << endl;
                    cout << D1.at(1)  << endl;
                    cout << D1.at(2)  << endl;
                    cout << D1.at(3)  << endl;
                    cout << D1.at(4)  << endl;
                    cout << D1.at(5)  << endl;
                    cout << D1.at(6)  << endl;
                    cout << D1.at(7)  << endl;
                    cout << D1.at(8)  << endl;
                    cout << D1.at(9)  << endl;
                    cout << D1.at(10) << endl;
                    cout << D1.at(11) << endl;
                }
                 else if (playerXposition == 5 && playerYposition == 'E') {
                    cout << E5.at(0)  << endl;
                    cout << E5.at(1)  << endl;
                    cout << E5.at(2)  << endl;
                    cout << E5.at(3)  << endl;
                    cout << E5.at(4)  << endl;
                    cout << E5.at(5)  << endl;
                    cout << E5.at(6)  << endl;
                    cout << E5.at(7)  << endl;
                    cout << E5.at(8)  << endl;
                    cout << E5.at(9)  << endl;
                    cout << E5.at(10) << endl;
                    cout << E5.at(11) << endl;
                }
                else if (playerXposition == 4 && playerYposition == 'E') {
                    cout << E4.at(0)  << endl;
                    cout << E4.at(1)  << endl;
                    cout << E4.at(2)  << endl;
                    cout << E4.at(3)  << endl;
                    cout << E4.at(4)  << endl;
                    cout << E4.at(5)  << endl;
                    cout << E4.at(6)  << endl;
                    cout << E4.at(7)  << endl;
                    cout << E4.at(8)  << endl;
                    cout << E4.at(9)  << endl;
                    cout << E4.at(10) << endl;
                    cout << E4.at(11) << endl;
                }
                else if (playerXposition == 3 && playerYposition == 'E') {
                    cout << E3.at(0)  << endl;
                    cout << E3.at(1)  << endl;
                    cout << E3.at(2)  << endl;
                    cout << E3.at(3)  << endl;
                    cout << E3.at(4)  << endl;
                    cout << E3.at(5)  << endl;
                    cout << E3.at(6)  << endl;
                    cout << E3.at(7)  << endl;
                    cout << E3.at(8)  << endl;
                    cout << E3.at(9)  << endl;
                    cout << E3.at(10) << endl;
                    cout << E3.at(11) << endl;
                }
                else if (playerXposition == 2 && playerYposition == 'E') {
                    cout << E2.at(0)  << endl;
                    cout << E2.at(1)  << endl;
                    cout << E2.at(2)  << endl;
                    cout << E2.at(3)  << endl;
                    cout << E2.at(4)  << endl;
                    cout << E2.at(5)  << endl;
                    cout << E2.at(6)  << endl;
                    cout << E2.at(7)  << endl;
                    cout << E2.at(8)  << endl;
                    cout << E2.at(9)  << endl;
                    cout << E2.at(10) << endl;
                    cout << E2.at(11) << endl;
                }
                else if (playerXposition == 1 && playerYposition == 'E') {
                    cout << E1.at(0)  << endl;
                    cout << E1.at(1)  << endl;
                    cout << E1.at(2)  << endl;
                    cout << E1.at(3)  << endl;
                    cout << E1.at(4)  << endl;
                    cout << E1.at(5)  << endl;
                    cout << E1.at(6)  << endl;
                    cout << E1.at(7)  << endl;
                    cout << E1.at(8)  << endl;
                    cout << E1.at(9)  << endl;
                    cout << E1.at(10) << endl;
                    cout << E1.at(11) << endl;
                }


        }
        else if (movementOption == 'W'){
            cout << "You move to the West." << endl;
            playerXposition = playerXposition - 1;

            if (playerXposition == 5 && playerYposition == 'B'){
                    cout << B5.at(0)  << endl;
                    cout << B5.at(1)  << endl;
                    cout << B5.at(2)  << endl;
                    cout << B5.at(3)  << endl;
                    cout << B5.at(4)  << endl;
                    cout << B5.at(5)  << endl;
                    cout << B5.at(6)  << endl;
                    cout << B5.at(7)  << endl;
                    cout << B5.at(8)  << endl;
                    cout << B5.at(9)  << endl;
                    cout << B5.at(10) << endl;
                    cout << B5.at(11) << endl;
                }
                else if (playerXposition == 4 && playerYposition == 'B'){
                    cout << B4.at(0)  << endl;
                    cout << B4.at(1)  << endl;
                    cout << B4.at(2)  << endl;
                    cout << B4.at(3)  << endl;
                    cout << B4.at(4)  << endl;
                    cout << B4.at(5)  << endl;
                    cout << B4.at(6)  << endl;
                    cout << B4.at(7)  << endl;
                    cout << B4.at(8)  << endl;
                    cout << B4.at(9)  << endl;
                    cout << B4.at(10) << endl;
                    cout << B4.at(11) << endl;
                }
                else if (playerXposition == 3 && playerYposition == 'B') {
                    cout << B3.at(0)  << endl;
                    cout << B3.at(1)  << endl;
                    cout << B3.at(2)  << endl;
                    cout << B3.at(3)  << endl;
                    cout << B3.at(4)  << endl;
                    cout << B3.at(5)  << endl;
                    cout << B3.at(6)  << endl;
                    cout << B3.at(7)  << endl;
                    cout << B3.at(8)  << endl;
                    cout << B3.at(9)  << endl;
                    cout << B3.at(10) << endl;
                    cout << B3.at(11) << endl;
                }
                else if (playerXposition == 2 && playerYposition == 'B') {
                    cout << B2.at(0)  << endl;
                    cout << B2.at(1)  << endl;
                    cout << B2.at(2)  << endl;
                    cout << B2.at(3)  << endl;
                    cout << B2.at(4)  << endl;
                    cout << B2.at(5)  << endl;
                    cout << B2.at(6)  << endl;
                    cout << B2.at(7)  << endl;
                    cout << B2.at(8)  << endl;
                    cout << B2.at(9)  << endl;
                    cout << B2.at(10) << endl;
                    cout << B2.at(11) << endl;
                }
                else if (playerXposition == 1 && playerYposition == 'B') {
                    cout << B1.at(0)  << endl;
                    cout << B1.at(1)  << endl;
                    cout << B1.at(2)  << endl;
                    cout << B1.at(3)  << endl;
                    cout << B1.at(4)  << endl;
                    cout << B1.at(5)  << endl;
                    cout << B1.at(6)  << endl;
                    cout << B1.at(7)  << endl;
                    cout << B1.at(8)  << endl;
                    cout << B1.at(9)  << endl;
                    cout << B1.at(10) << endl;
                    cout << B1.at(11) << endl;
                }
                else if (playerXposition == 5 && playerYposition == 'A') {
                    cout << A5.at(0)  << endl;
                    cout << A5.at(1)  << endl;
                    cout << A5.at(2)  << endl;
                    cout << A5.at(3)  << endl;
                    cout << A5.at(4)  << endl;
                    cout << A5.at(5)  << endl;
                    cout << A5.at(6)  << endl;
                    cout << A5.at(7)  << endl;
                    cout << A5.at(8)  << endl;
                    cout << A5.at(9)  << endl;
                    cout << A5.at(10) << endl;
                    cout << A5.at(11) << endl;
                }
                else if (playerXposition == 4 && playerYposition == 'A') {
                    cout << A4.at(0)  << endl;
                    cout << A4.at(1)  << endl;
                    cout << A4.at(2)  << endl;
                    cout << A4.at(3)  << endl;
                    cout << A4.at(4)  << endl;
                    cout << A4.at(5)  << endl;
                    cout << A4.at(6)  << endl;
                    cout << A4.at(7)  << endl;
                    cout << A4.at(8)  << endl;
                    cout << A4.at(9)  << endl;
                    cout << A4.at(10) << endl;
                    cout << A4.at(11) << endl;
                }
                else if (playerXposition == 3 && playerYposition == 'A') {
                    cout << A3.at(0)  << endl;
                    cout << A3.at(1)  << endl;
                    cout << A3.at(2)  << endl;
                    cout << A3.at(3)  << endl;
                    cout << A3.at(4)  << endl;
                    cout << A3.at(5)  << endl;
                    cout << A3.at(6)  << endl;
                    cout << A3.at(7)  << endl;
                    cout << A3.at(8)  << endl;
                    cout << A3.at(9)  << endl;
                    cout << A3.at(10) << endl;
                    cout << A3.at(11) << endl;
                }
                else if (playerXposition == 2 && playerYposition == 'A') {
                    cout << A2.at(0)  << endl;
                    cout << A2.at(1)  << endl;
                    cout << A2.at(2)  << endl;
                    cout << A2.at(3)  << endl;
                    cout << A2.at(4)  << endl;
                    cout << A2.at(5)  << endl;
                    cout << A2.at(6)  << endl;
                    cout << A2.at(7)  << endl;
                    cout << A2.at(8)  << endl;
                    cout << A2.at(9)  << endl;
                    cout << A2.at(10) << endl;
                    cout << A2.at(11) << endl;
                }
                else if (playerXposition == 1 && playerYposition == 'A') {
                    cout << A1.at(0)  << endl;
                    cout << A1.at(1)  << endl;
                    cout << A1.at(2)  << endl;
                    cout << A1.at(3)  << endl;
                    cout << A1.at(4)  << endl;
                    cout << A1.at(5)  << endl;
                    cout << A1.at(6)  << endl;
                    cout << A1.at(7)  << endl;
                    cout << A1.at(8)  << endl;
                    cout << A1.at(9)  << endl;
                    cout << A1.at(10) << endl;
                    cout << A1.at(11) << endl;
                }
                 else if (playerXposition == 5 && playerYposition == 'C') {
                    cout << C5.at(0)  << endl;
                    cout << C5.at(1)  << endl;
                    cout << C5.at(2)  << endl;
                    cout << C5.at(3)  << endl;
                    cout << C5.at(4)  << endl;
                    cout << C5.at(5)  << endl;
                    cout << C5.at(6)  << endl;
                    cout << C5.at(7)  << endl;
                    cout << C5.at(8)  << endl;
                    cout << C5.at(9)  << endl;
                    cout << C5.at(10) << endl;
                    cout << C5.at(11) << endl;
                }
                else if (playerXposition == 4 && playerYposition == 'C') {
                    cout << C4.at(0)  << endl;
                    cout << C4.at(1)  << endl;
                    cout << C4.at(2)  << endl;
                    cout << C4.at(3)  << endl;
                    cout << C4.at(4)  << endl;
                    cout << C4.at(5)  << endl;
                    cout << C4.at(6)  << endl;
                    cout << C4.at(7)  << endl;
                    cout << C4.at(8)  << endl;
                    cout << C4.at(9)  << endl;
                    cout << C4.at(10) << endl;
                    cout << C4.at(11) << endl;
                }
                else if (playerXposition == 3 && playerYposition == 'C') {
                    cout << C3.at(0)  << endl;
                    cout << C3.at(1)  << endl;
                    cout << C3.at(2)  << endl;
                    cout << C3.at(3)  << endl;
                    cout << C3.at(4)  << endl;
                    cout << C3.at(5)  << endl;
                    cout << C3.at(6)  << endl;
                    cout << C3.at(7)  << endl;
                    cout << C3.at(8)  << endl;
                    cout << C3.at(9)  << endl;
                    cout << C3.at(10) << endl;
                    cout << C3.at(11) << endl;
                }
                else if (playerXposition == 2 && playerYposition == 'C') {
                    cout << C2.at(0)  << endl;
                    cout << C2.at(1)  << endl;
                    cout << C2.at(2)  << endl;
                    cout << C2.at(3)  << endl;
                    cout << C2.at(4)  << endl;
                    cout << C2.at(5)  << endl;
                    cout << C2.at(6)  << endl;
                    cout << C2.at(7)  << endl;
                    cout << C2.at(8)  << endl;
                    cout << C2.at(9)  << endl;
                    cout << C2.at(10) << endl;
                    cout << C2.at(11) << endl;
                }
                else if (playerXposition == 1 && playerYposition == 'C') {
                    cout << C1.at(0)  << endl;
                    cout << C1.at(1)  << endl;
                    cout << C1.at(2)  << endl;
                    cout << C1.at(3)  << endl;
                    cout << C1.at(4)  << endl;
                    cout << C1.at(5)  << endl;
                    cout << C1.at(6)  << endl;
                    cout << C1.at(7)  << endl;
                    cout << C1.at(8)  << endl;
                    cout << C1.at(9)  << endl;
                    cout << C1.at(10) << endl;
                    cout << C1.at(11) << endl;
                }
                 else if (playerXposition == 5 && playerYposition == 'D') {
                    cout << D5.at(0)  << endl;
                    cout << D5.at(1)  << endl;
                    cout << D5.at(2)  << endl;
                    cout << D5.at(3)  << endl;
                    cout << D5.at(4)  << endl;
                    cout << D5.at(5)  << endl;
                    cout << D5.at(6)  << endl;
                    cout << D5.at(7)  << endl;
                    cout << D5.at(8)  << endl;
                    cout << D5.at(9)  << endl;
                    cout << D5.at(10) << endl;
                    cout << D5.at(11) << endl;
                }
                else if (playerXposition == 4 && playerYposition == 'D') {
                    cout << D4.at(0)  << endl;
                    cout << D4.at(1)  << endl;
                    cout << D4.at(2)  << endl;
                    cout << D4.at(3)  << endl;
                    cout << D4.at(4)  << endl;
                    cout << D4.at(5)  << endl;
                    cout << D4.at(6)  << endl;
                    cout << D4.at(7)  << endl;
                    cout << D4.at(8)  << endl;
                    cout << D4.at(9)  << endl;
                    cout << D4.at(10) << endl;
                    cout << D4.at(11) << endl;
                }
                else if (playerXposition == 3 && playerYposition == 'D') {
                    cout << D3.at(0)  << endl;
                    cout << D3.at(1)  << endl;
                    cout << D3.at(2)  << endl;
                    cout << D3.at(3)  << endl;
                    cout << D3.at(4)  << endl;
                    cout << D3.at(5)  << endl;
                    cout << D3.at(6)  << endl;
                    cout << D3.at(7)  << endl;
                    cout << D3.at(8)  << endl;
                    cout << D3.at(9)  << endl;
                    cout << D3.at(10) << endl;
                    cout << D3.at(11) << endl;
                }
                else if (playerXposition == 2 && playerYposition == 'D') {
                    cout << D2.at(0)  << endl;
                    cout << D2.at(1)  << endl;
                    cout << D2.at(2)  << endl;
                    cout << D2.at(3)  << endl;
                    cout << D2.at(4)  << endl;
                    cout << D2.at(5)  << endl;
                    cout << D2.at(6)  << endl;
                    cout << D2.at(7)  << endl;
                    cout << D2.at(8)  << endl;
                    cout << D2.at(9)  << endl;
                    cout << D2.at(10) << endl;
                    cout << D2.at(11) << endl;
                }
                else if (playerXposition == 1 && playerYposition == 'D') {
                    cout << D1.at(0)  << endl;
                    cout << D1.at(1)  << endl;
                    cout << D1.at(2)  << endl;
                    cout << D1.at(3)  << endl;
                    cout << D1.at(4)  << endl;
                    cout << D1.at(5)  << endl;
                    cout << D1.at(6)  << endl;
                    cout << D1.at(7)  << endl;
                    cout << D1.at(8)  << endl;
                    cout << D1.at(9)  << endl;
                    cout << D1.at(10) << endl;
                    cout << D1.at(11) << endl;
                }
                 else if (playerXposition == 5 && playerYposition == 'E') {
                    cout << E5.at(0)  << endl;
                    cout << E5.at(1)  << endl;
                    cout << E5.at(2)  << endl;
                    cout << E5.at(3)  << endl;
                    cout << E5.at(4)  << endl;
                    cout << E5.at(5)  << endl;
                    cout << E5.at(6)  << endl;
                    cout << E5.at(7)  << endl;
                    cout << E5.at(8)  << endl;
                    cout << E5.at(9)  << endl;
                    cout << E5.at(10) << endl;
                    cout << E5.at(11) << endl;
                }
                else if (playerXposition == 4 && playerYposition == 'E') {
                    cout << E4.at(0)  << endl;
                    cout << E4.at(1)  << endl;
                    cout << E4.at(2)  << endl;
                    cout << E4.at(3)  << endl;
                    cout << E4.at(4)  << endl;
                    cout << E4.at(5)  << endl;
                    cout << E4.at(6)  << endl;
                    cout << E4.at(7)  << endl;
                    cout << E4.at(8)  << endl;
                    cout << E4.at(9)  << endl;
                    cout << E4.at(10) << endl;
                    cout << E4.at(11) << endl;
                }
                else if (playerXposition == 3 && playerYposition == 'E') {
                    cout << E3.at(0)  << endl;
                    cout << E3.at(1)  << endl;
                    cout << E3.at(2)  << endl;
                    cout << E3.at(3)  << endl;
                    cout << E3.at(4)  << endl;
                    cout << E3.at(5)  << endl;
                    cout << E3.at(6)  << endl;
                    cout << E3.at(7)  << endl;
                    cout << E3.at(8)  << endl;
                    cout << E3.at(9)  << endl;
                    cout << E3.at(10) << endl;
                    cout << E3.at(11) << endl;
                }
                else if (playerXposition == 2 && playerYposition == 'E') {
                    cout << E2.at(0)  << endl;
                    cout << E2.at(1)  << endl;
                    cout << E2.at(2)  << endl;
                    cout << E2.at(3)  << endl;
                    cout << E2.at(4)  << endl;
                    cout << E2.at(5)  << endl;
                    cout << E2.at(6)  << endl;
                    cout << E2.at(7)  << endl;
                    cout << E2.at(8)  << endl;
                    cout << E2.at(9)  << endl;
                    cout << E2.at(10) << endl;
                    cout << E2.at(11) << endl;
                }
                else if (playerXposition == 1 && playerYposition == 'E') {
                    cout << E1.at(0)  << endl;
                    cout << E1.at(1)  << endl;
                    cout << E1.at(2)  << endl;
                    cout << E1.at(3)  << endl;
                    cout << E1.at(4)  << endl;
                    cout << E1.at(5)  << endl;
                    cout << E1.at(6)  << endl;
                    cout << E1.at(7)  << endl;
                    cout << E1.at(8)  << endl;
                    cout << E1.at(9)  << endl;
                    cout << E1.at(10) << endl;
                    cout << E1.at(11) << endl;
                }
        }
        else if (movementOption == 'N'){
            cout << "You move to the North." << endl;
            playerYposition = playerYposition + 1;
            if (playerYposition == 'A' && playerXposition == 1) {
                    cout << A1.at(0)  << endl;
                    cout << A1.at(1)  << endl;
                    cout << A1.at(2)  << endl;
                    cout << A1.at(3)  << endl;
                    cout << A1.at(4)  << endl;
                    cout << A1.at(5)  << endl;
                    cout << A1.at(6)  << endl;
                    cout << A1.at(7)  << endl;
                    cout << A1.at(8)  << endl;
                    cout << A1.at(9)  << endl;
                    cout << A1.at(10) << endl;
                    cout << A1.at(11) << endl;
                }
                else if (playerYposition == 'B' && playerXposition == 1) {
                    cout << B1.at(0)  << endl;
                    cout << B1.at(1)  << endl;
                    cout << B1.at(2)  << endl;
                    cout << B1.at(3)  << endl;
                    cout << B1.at(4)  << endl;
                    cout << B1.at(5)  << endl;
                    cout << B1.at(6)  << endl;
                    cout << B1.at(7)  << endl;
                    cout << B1.at(8)  << endl;
                    cout << B1.at(9)  << endl;
                    cout << B1.at(10) << endl;
                    cout << B1.at(11) << endl;
                }
                else if (playerYposition == 'C' && playerXposition == 1) {
                    cout << C1.at(0)  << endl;
                    cout << C1.at(1)  << endl;
                    cout << C1.at(2)  << endl;
                    cout << C1.at(3)  << endl;
                    cout << C1.at(4)  << endl;
                    cout << C1.at(5)  << endl;
                    cout << C1.at(6)  << endl;
                    cout << C1.at(7)  << endl;
                    cout << C1.at(8)  << endl;
                    cout << C1.at(9)  << endl;
                    cout << C1.at(10) << endl;
                    cout << C1.at(11) << endl;
                }
                else if (playerYposition == 'D' && playerXposition == 1) {
                    cout << D1.at(0)  << endl;
                    cout << D1.at(1)  << endl;
                    cout << D1.at(2)  << endl;
                    cout << D1.at(3)  << endl;
                    cout << D1.at(4)  << endl;
                    cout << D1.at(5)  << endl;
                    cout << D1.at(6)  << endl;
                    cout << D1.at(7)  << endl;
                    cout << D1.at(8)  << endl;
                    cout << D1.at(9)  << endl;
                    cout << D1.at(10) << endl;
                    cout << D1.at(11) << endl;
                }
                else if (playerYposition == 'E' && playerXposition == 1) {
                    cout << E1.at(0)  << endl;
                    cout << E1.at(1)  << endl;
                    cout << E1.at(2)  << endl;
                    cout << E1.at(3)  << endl;
                    cout << E1.at(4)  << endl;
                    cout << E1.at(5)  << endl;
                    cout << E1.at(6)  << endl;
                    cout << E1.at(7)  << endl;
                    cout << E1.at(8)  << endl;
                    cout << E1.at(9)  << endl;
                    cout << E1.at(10) << endl;
                    cout << E1.at(11) << endl;
                }
                else if (playerYposition == 'A' && playerXposition == 2) {
                    cout << A2.at(0)  << endl;
                    cout << A2.at(1)  << endl;
                    cout << A2.at(2)  << endl;
                    cout << A2.at(3)  << endl;
                    cout << A2.at(4)  << endl;
                    cout << A2.at(5)  << endl;
                    cout << A2.at(6)  << endl;
                    cout << A2.at(7)  << endl;
                    cout << A2.at(8)  << endl;
                    cout << A2.at(9)  << endl;
                    cout << A2.at(10) << endl;
                    cout << A2.at(11) << endl;
                }
                 else if (playerYposition == 'B' && playerXposition == 2) {
                    cout << B2.at(0)  << endl;
                    cout << B2.at(1)  << endl;
                    cout << B2.at(2)  << endl;
                    cout << B2.at(3)  << endl;
                    cout << B2.at(4)  << endl;
                    cout << B2.at(5)  << endl;
                    cout << B2.at(6)  << endl;
                    cout << B2.at(7)  << endl;
                    cout << B2.at(8)  << endl;
                    cout << B2.at(9)  << endl;
                    cout << B2.at(10) << endl;
                    cout << B2.at(11) << endl;
                }
                 else if (playerYposition == 'C' && playerXposition == 2) {
                    cout << C2.at(0)  << endl;
                    cout << C2.at(1)  << endl;
                    cout << C2.at(2)  << endl;
                    cout << C2.at(3)  << endl;
                    cout << C2.at(4)  << endl;
                    cout << C2.at(5)  << endl;
                    cout << C2.at(6)  << endl;
                    cout << C2.at(7)  << endl;
                    cout << C2.at(8)  << endl;
                    cout << C2.at(9)  << endl;
                    cout << C2.at(10) << endl;
                    cout << C2.at(11) << endl;
                }
                 else if (playerYposition == 'D' && playerXposition == 2) {
                    cout << D2.at(0)  << endl;
                    cout << D2.at(1)  << endl;
                    cout << D2.at(2)  << endl;
                    cout << D2.at(3)  << endl;
                    cout << D2.at(4)  << endl;
                    cout << D2.at(5)  << endl;
                    cout << D2.at(6)  << endl;
                    cout << D2.at(7)  << endl;
                    cout << D2.at(8)  << endl;
                    cout << D2.at(9)  << endl;
                    cout << D2.at(10) << endl;
                    cout << D2.at(11) << endl;
                }
                 else if (playerYposition == 'E' && playerXposition == 2) {
                    cout << E2.at(0)  << endl;
                    cout << E2.at(1)  << endl;
                    cout << E2.at(2)  << endl;
                    cout << E2.at(3)  << endl;
                    cout << E2.at(4)  << endl;
                    cout << E2.at(5)  << endl;
                    cout << E2.at(6)  << endl;
                    cout << E2.at(7)  << endl;
                    cout << E2.at(8)  << endl;
                    cout << E2.at(9)  << endl;
                    cout << E2.at(10) << endl;
                    cout << E2.at(11) << endl;
                }
                else if (playerYposition == 'A' && playerXposition == 3) {
                    cout << A3.at(0)  << endl;
                    cout << A3.at(1)  << endl;
                    cout << A3.at(2)  << endl;
                    cout << A3.at(3)  << endl;
                    cout << A3.at(4)  << endl;
                    cout << A3.at(5)  << endl;
                    cout << A3.at(6)  << endl;
                    cout << A3.at(7)  << endl;
                    cout << A3.at(8)  << endl;
                    cout << A3.at(9)  << endl;
                    cout << A3.at(10) << endl;
                    cout << A3.at(11) << endl;
                }
                 else if (playerYposition == 'B' && playerXposition == 3) {
                    cout << B3.at(0)  << endl;
                    cout << B3.at(1)  << endl;
                    cout << B3.at(2)  << endl;
                    cout << B3.at(3)  << endl;
                    cout << B3.at(4)  << endl;
                    cout << B3.at(5)  << endl;
                    cout << B3.at(6)  << endl;
                    cout << B3.at(7)  << endl;
                    cout << B3.at(8)  << endl;
                    cout << B3.at(9)  << endl;
                    cout << B3.at(10) << endl;
                    cout << B3.at(11) << endl;
                }
                 else if (playerYposition == 'C' && playerXposition == 3) {
                    cout << C3.at(0)  << endl;
                    cout << C3.at(1)  << endl;
                    cout << C3.at(2)  << endl;
                    cout << C3.at(3)  << endl;
                    cout << C3.at(4)  << endl;
                    cout << C3.at(5)  << endl;
                    cout << C3.at(6)  << endl;
                    cout << C3.at(7)  << endl;
                    cout << C3.at(8)  << endl;
                    cout << C3.at(9)  << endl;
                    cout << C3.at(10) << endl;
                    cout << C3.at(11) << endl;
                }
                 else if (playerYposition == 'D' && playerXposition == 3) {
                    cout << D3.at(0)  << endl;
                    cout << D3.at(1)  << endl;
                    cout << D3.at(2)  << endl;
                    cout << D3.at(3)  << endl;
                    cout << D3.at(4)  << endl;
                    cout << D3.at(5)  << endl;
                    cout << D3.at(6)  << endl;
                    cout << D3.at(7)  << endl;
                    cout << D3.at(8)  << endl;
                    cout << D3.at(9)  << endl;
                    cout << D3.at(10) << endl;
                    cout << D3.at(11) << endl;
                }
                 else if (playerYposition == 'E' && playerXposition == 3) {
                    cout << E3.at(0)  << endl;
                    cout << E3.at(1)  << endl;
                    cout << E3.at(2)  << endl;
                    cout << E3.at(3)  << endl;
                    cout << E3.at(4)  << endl;
                    cout << E3.at(5)  << endl;
                    cout << E3.at(6)  << endl;
                    cout << E3.at(7)  << endl;
                    cout << E3.at(8)  << endl;
                    cout << E3.at(9)  << endl;
                    cout << E3.at(10) << endl;
                    cout << E3.at(11) << endl;
                }
                else if (playerYposition == 'A' && playerXposition == 4) {
                    cout << A4.at(0)  << endl;
                    cout << A4.at(1)  << endl;
                    cout << A4.at(2)  << endl;
                    cout << A4.at(3)  << endl;
                    cout << A4.at(4)  << endl;
                    cout << A4.at(5)  << endl;
                    cout << A4.at(6)  << endl;
                    cout << A4.at(7)  << endl;
                    cout << A4.at(8)  << endl;
                    cout << A4.at(9)  << endl;
                    cout << A4.at(10) << endl;
                    cout << A4.at(11) << endl;
                }
                 else if (playerYposition == 'B' && playerXposition == 4) {
                    cout << B4.at(0)  << endl;
                    cout << B4.at(1)  << endl;
                    cout << B4.at(2)  << endl;
                    cout << B4.at(3)  << endl;
                    cout << B4.at(4)  << endl;
                    cout << B4.at(5)  << endl;
                    cout << B4.at(6)  << endl;
                    cout << B4.at(7)  << endl;
                    cout << B4.at(8)  << endl;
                    cout << B4.at(9)  << endl;
                    cout << B4.at(10) << endl;
                    cout << B4.at(11) << endl;
                }
                 else if (playerYposition == 'C' && playerXposition == 4) {
                    cout << C4.at(0)  << endl;
                    cout << C4.at(1)  << endl;
                    cout << C4.at(2)  << endl;
                    cout << C4.at(3)  << endl;
                    cout << C4.at(4)  << endl;
                    cout << C4.at(5)  << endl;
                    cout << C4.at(6)  << endl;
                    cout << C4.at(7)  << endl;
                    cout << C4.at(8)  << endl;
                    cout << C4.at(9)  << endl;
                    cout << C4.at(10) << endl;
                    cout << C4.at(11) << endl;
                }
                 else if (playerYposition == 'D' && playerXposition == 4) {
                    cout << D4.at(0)  << endl;
                    cout << D4.at(1)  << endl;
                    cout << D4.at(2)  << endl;
                    cout << D4.at(3)  << endl;
                    cout << D4.at(4)  << endl;
                    cout << D4.at(5)  << endl;
                    cout << D4.at(6)  << endl;
                    cout << D4.at(7)  << endl;
                    cout << D4.at(8)  << endl;
                    cout << D4.at(9)  << endl;
                    cout << D4.at(10) << endl;
                    cout << D4.at(11) << endl;
                }
                 else if (playerYposition == 'E' && playerXposition == 4) {
                    cout << E4.at(0)  << endl;
                    cout << E4.at(1)  << endl;
                    cout << E4.at(2)  << endl;
                    cout << E4.at(3)  << endl;
                    cout << E4.at(4)  << endl;
                    cout << E4.at(5)  << endl;
                    cout << E4.at(6)  << endl;
                    cout << E4.at(7)  << endl;
                    cout << E4.at(8)  << endl;
                    cout << E4.at(9)  << endl;
                    cout << E4.at(10) << endl;
                    cout << E4.at(11) << endl;
                }
                else if (playerYposition == 'A' && playerXposition == 5) {
                    cout << A5.at(0)  << endl;
                    cout << A5.at(1)  << endl;
                    cout << A5.at(2)  << endl;
                    cout << A5.at(3)  << endl;
                    cout << A5.at(4)  << endl;
                    cout << A5.at(5)  << endl;
                    cout << A5.at(6)  << endl;
                    cout << A5.at(7)  << endl;
                    cout << A5.at(8)  << endl;
                    cout << A5.at(9)  << endl;
                    cout << A5.at(10) << endl;
                    cout << A5.at(11) << endl;
                }
                 else if (playerYposition == 'B' && playerXposition == 5) {
                    cout << B5.at(0)  << endl;
                    cout << B5.at(1)  << endl;
                    cout << B5.at(2)  << endl;
                    cout << B5.at(3)  << endl;
                    cout << B5.at(4)  << endl;
                    cout << B5.at(5)  << endl;
                    cout << B5.at(6)  << endl;
                    cout << B5.at(7)  << endl;
                    cout << B5.at(8)  << endl;
                    cout << B5.at(9)  << endl;
                    cout << B5.at(10) << endl;
                    cout << B5.at(11) << endl;
                }
                 else if (playerYposition == 'C' && playerXposition == 5) {
                    cout << C5.at(0)  << endl;
                    cout << C5.at(1)  << endl;
                    cout << C5.at(2)  << endl;
                    cout << C5.at(3)  << endl;
                    cout << C5.at(4)  << endl;
                    cout << C5.at(5)  << endl;
                    cout << C5.at(6)  << endl;
                    cout << C5.at(7)  << endl;
                    cout << C5.at(8)  << endl;
                    cout << C5.at(9)  << endl;
                    cout << C5.at(10) << endl;
                    cout << C5.at(11) << endl;
                }
                 else if (playerYposition == 'D' && playerXposition == 5) {
                    cout << D5.at(0)  << endl;
                    cout << D5.at(1)  << endl;
                    cout << D5.at(2)  << endl;
                    cout << D5.at(3)  << endl;
                    cout << D5.at(4)  << endl;
                    cout << D5.at(5)  << endl;
                    cout << D5.at(6)  << endl;
                    cout << D5.at(7)  << endl;
                    cout << D5.at(8)  << endl;
                    cout << D5.at(9)  << endl;
                    cout << D5.at(10) << endl;
                    cout << D5.at(11) << endl;
                }
                 else if (playerYposition == 'E' && playerXposition == 5) {
                    cout << E5.at(0)  << endl;
                    cout << E5.at(1)  << endl;
                    cout << E5.at(2)  << endl;
                    cout << E5.at(3)  << endl;
                    cout << E5.at(4)  << endl;
                    cout << E5.at(5)  << endl;
                    cout << E5.at(6)  << endl;
                    cout << E5.at(7)  << endl;
                    cout << E5.at(8)  << endl;
                    cout << E5.at(9)  << endl;
                    cout << E5.at(10) << endl;
                    cout << E5.at(11) << endl;
                }
            }
            else if (movementOption == 'S'){
            cout << "You move to the South." << endl;
            playerYposition = playerYposition - 1;
            if (playerYposition == 'A' && playerXposition == 1) {
                    cout << A1.at(0)  << endl;
                    cout << A1.at(1)  << endl;
                    cout << A1.at(2)  << endl;
                    cout << A1.at(3)  << endl;
                    cout << A1.at(4)  << endl;
                    cout << A1.at(5)  << endl;
                    cout << A1.at(6)  << endl;
                    cout << A1.at(7)  << endl;
                    cout << A1.at(8)  << endl;
                    cout << A1.at(9)  << endl;
                    cout << A1.at(10) << endl;
                    cout << A1.at(11) << endl;
                }
                else if (playerYposition == 'B' && playerXposition == 1) {
                    cout << B1.at(0)  << endl;
                    cout << B1.at(1)  << endl;
                    cout << B1.at(2)  << endl;
                    cout << B1.at(3)  << endl;
                    cout << B1.at(4)  << endl;
                    cout << B1.at(5)  << endl;
                    cout << B1.at(6)  << endl;
                    cout << B1.at(7)  << endl;
                    cout << B1.at(8)  << endl;
                    cout << B1.at(9)  << endl;
                    cout << B1.at(10) << endl;
                    cout << B1.at(11) << endl;
                }
                else if (playerYposition == 'C' && playerXposition == 1) {
                    cout << C1.at(0)  << endl;
                    cout << C1.at(1)  << endl;
                    cout << C1.at(2)  << endl;
                    cout << C1.at(3)  << endl;
                    cout << C1.at(4)  << endl;
                    cout << C1.at(5)  << endl;
                    cout << C1.at(6)  << endl;
                    cout << C1.at(7)  << endl;
                    cout << C1.at(8)  << endl;
                    cout << C1.at(9)  << endl;
                    cout << C1.at(10) << endl;
                    cout << C1.at(11) << endl;
                }
                else if (playerYposition == 'D' && playerXposition == 1) {
                    cout << D1.at(0)  << endl;
                    cout << D1.at(1)  << endl;
                    cout << D1.at(2)  << endl;
                    cout << D1.at(3)  << endl;
                    cout << D1.at(4)  << endl;
                    cout << D1.at(5)  << endl;
                    cout << D1.at(6)  << endl;
                    cout << D1.at(7)  << endl;
                    cout << D1.at(8)  << endl;
                    cout << D1.at(9)  << endl;
                    cout << D1.at(10) << endl;
                    cout << D1.at(11) << endl;
                }
                else if (playerYposition == 'E' && playerXposition == 1) {
                    cout << E1.at(0)  << endl;
                    cout << E1.at(1)  << endl;
                    cout << E1.at(2)  << endl;
                    cout << E1.at(3)  << endl;
                    cout << E1.at(4)  << endl;
                    cout << E1.at(5)  << endl;
                    cout << E1.at(6)  << endl;
                    cout << E1.at(7)  << endl;
                    cout << E1.at(8)  << endl;
                    cout << E1.at(9)  << endl;
                    cout << E1.at(10) << endl;
                    cout << E1.at(11) << endl;
                }
                else if (playerYposition == 'A' && playerXposition == 2) {
                    cout << A2.at(0)  << endl;
                    cout << A2.at(1)  << endl;
                    cout << A2.at(2)  << endl;
                    cout << A2.at(3)  << endl;
                    cout << A2.at(4)  << endl;
                    cout << A2.at(5)  << endl;
                    cout << A2.at(6)  << endl;
                    cout << A2.at(7)  << endl;
                    cout << A2.at(8)  << endl;
                    cout << A2.at(9)  << endl;
                    cout << A2.at(10) << endl;
                    cout << A2.at(11) << endl;
                }
                 else if (playerYposition == 'B' && playerXposition == 2) {
                    cout << B2.at(0)  << endl;
                    cout << B2.at(1)  << endl;
                    cout << B2.at(2)  << endl;
                    cout << B2.at(3)  << endl;
                    cout << B2.at(4)  << endl;
                    cout << B2.at(5)  << endl;
                    cout << B2.at(6)  << endl;
                    cout << B2.at(7)  << endl;
                    cout << B2.at(8)  << endl;
                    cout << B2.at(9)  << endl;
                    cout << B2.at(10) << endl;
                    cout << B2.at(11) << endl;
                }
                 else if (playerYposition == 'C' && playerXposition == 2) {
                    cout << C2.at(0)  << endl;
                    cout << C2.at(1)  << endl;
                    cout << C2.at(2)  << endl;
                    cout << C2.at(3)  << endl;
                    cout << C2.at(4)  << endl;
                    cout << C2.at(5)  << endl;
                    cout << C2.at(6)  << endl;
                    cout << C2.at(7)  << endl;
                    cout << C2.at(8)  << endl;
                    cout << C2.at(9)  << endl;
                    cout << C2.at(10) << endl;
                    cout << C2.at(11) << endl;
                }
                 else if (playerYposition == 'D' && playerXposition == 2) {
                    cout << D2.at(0)  << endl;
                    cout << D2.at(1)  << endl;
                    cout << D2.at(2)  << endl;
                    cout << D2.at(3)  << endl;
                    cout << D2.at(4)  << endl;
                    cout << D2.at(5)  << endl;
                    cout << D2.at(6)  << endl;
                    cout << D2.at(7)  << endl;
                    cout << D2.at(8)  << endl;
                    cout << D2.at(9)  << endl;
                    cout << D2.at(10) << endl;
                    cout << D2.at(11) << endl;
                }
                 else if (playerYposition == 'E' && playerXposition == 2) {
                    cout << E2.at(0)  << endl;
                    cout << E2.at(1)  << endl;
                    cout << E2.at(2)  << endl;
                    cout << E2.at(3)  << endl;
                    cout << E2.at(4)  << endl;
                    cout << E2.at(5)  << endl;
                    cout << E2.at(6)  << endl;
                    cout << E2.at(7)  << endl;
                    cout << E2.at(8)  << endl;
                    cout << E2.at(9)  << endl;
                    cout << E2.at(10) << endl;
                    cout << E2.at(11) << endl;
                }
                else if (playerYposition == 'A' && playerXposition == 3) {
                    cout << A3.at(0)  << endl;
                    cout << A3.at(1)  << endl;
                    cout << A3.at(2)  << endl;
                    cout << A3.at(3)  << endl;
                    cout << A3.at(4)  << endl;
                    cout << A3.at(5)  << endl;
                    cout << A3.at(6)  << endl;
                    cout << A3.at(7)  << endl;
                    cout << A3.at(8)  << endl;
                    cout << A3.at(9)  << endl;
                    cout << A3.at(10) << endl;
                    cout << A3.at(11) << endl;
                }
                 else if (playerYposition == 'B' && playerXposition == 3) {
                    cout << B3.at(0)  << endl;
                    cout << B3.at(1)  << endl;
                    cout << B3.at(2)  << endl;
                    cout << B3.at(3)  << endl;
                    cout << B3.at(4)  << endl;
                    cout << B3.at(5)  << endl;
                    cout << B3.at(6)  << endl;
                    cout << B3.at(7)  << endl;
                    cout << B3.at(8)  << endl;
                    cout << B3.at(9)  << endl;
                    cout << B3.at(10) << endl;
                    cout << B3.at(11) << endl;
                }
                 else if (playerYposition == 'C' && playerXposition == 3) {
                    cout << C3.at(0)  << endl;
                    cout << C3.at(1)  << endl;
                    cout << C3.at(2)  << endl;
                    cout << C3.at(3)  << endl;
                    cout << C3.at(4)  << endl;
                    cout << C3.at(5)  << endl;
                    cout << C3.at(6)  << endl;
                    cout << C3.at(7)  << endl;
                    cout << C3.at(8)  << endl;
                    cout << C3.at(9)  << endl;
                    cout << C3.at(10) << endl;
                    cout << C3.at(11) << endl;
                }
                 else if (playerYposition == 'D' && playerXposition == 3) {
                    cout << D3.at(0)  << endl;
                    cout << D3.at(1)  << endl;
                    cout << D3.at(2)  << endl;
                    cout << D3.at(3)  << endl;
                    cout << D3.at(4)  << endl;
                    cout << D3.at(5)  << endl;
                    cout << D3.at(6)  << endl;
                    cout << D3.at(7)  << endl;
                    cout << D3.at(8)  << endl;
                    cout << D3.at(9)  << endl;
                    cout << D3.at(10) << endl;
                    cout << D3.at(11) << endl;
                }
                 else if (playerYposition == 'E' && playerXposition == 3) {
                    cout << E3.at(0)  << endl;
                    cout << E3.at(1)  << endl;
                    cout << E3.at(2)  << endl;
                    cout << E3.at(3)  << endl;
                    cout << E3.at(4)  << endl;
                    cout << E3.at(5)  << endl;
                    cout << E3.at(6)  << endl;
                    cout << E3.at(7)  << endl;
                    cout << E3.at(8)  << endl;
                    cout << E3.at(9)  << endl;
                    cout << E3.at(10) << endl;
                    cout << E3.at(11) << endl;
                }
                else if (playerYposition == 'A' && playerXposition == 4) {
                    cout << A4.at(0)  << endl;
                    cout << A4.at(1)  << endl;
                    cout << A4.at(2)  << endl;
                    cout << A4.at(3)  << endl;
                    cout << A4.at(4)  << endl;
                    cout << A4.at(5)  << endl;
                    cout << A4.at(6)  << endl;
                    cout << A4.at(7)  << endl;
                    cout << A4.at(8)  << endl;
                    cout << A4.at(9)  << endl;
                    cout << A4.at(10) << endl;
                    cout << A4.at(11) << endl;
                }
                 else if (playerYposition == 'B' && playerXposition == 4) {
                    cout << B4.at(0)  << endl;
                    cout << B4.at(1)  << endl;
                    cout << B4.at(2)  << endl;
                    cout << B4.at(3)  << endl;
                    cout << B4.at(4)  << endl;
                    cout << B4.at(5)  << endl;
                    cout << B4.at(6)  << endl;
                    cout << B4.at(7)  << endl;
                    cout << B4.at(8)  << endl;
                    cout << B4.at(9)  << endl;
                    cout << B4.at(10) << endl;
                    cout << B4.at(11) << endl;
                }
                 else if (playerYposition == 'C' && playerXposition == 4) {
                    cout << C4.at(0)  << endl;
                    cout << C4.at(1)  << endl;
                    cout << C4.at(2)  << endl;
                    cout << C4.at(3)  << endl;
                    cout << C4.at(4)  << endl;
                    cout << C4.at(5)  << endl;
                    cout << C4.at(6)  << endl;
                    cout << C4.at(7)  << endl;
                    cout << C4.at(8)  << endl;
                    cout << C4.at(9)  << endl;
                    cout << C4.at(10) << endl;
                    cout << C4.at(11) << endl;
                }
                 else if (playerYposition == 'D' && playerXposition == 4) {
                    cout << D4.at(0)  << endl;
                    cout << D4.at(1)  << endl;
                    cout << D4.at(2)  << endl;
                    cout << D4.at(3)  << endl;
                    cout << D4.at(4)  << endl;
                    cout << D4.at(5)  << endl;
                    cout << D4.at(6)  << endl;
                    cout << D4.at(7)  << endl;
                    cout << D4.at(8)  << endl;
                    cout << D4.at(9)  << endl;
                    cout << D4.at(10) << endl;
                    cout << D4.at(11) << endl;
                }
                 else if (playerYposition == 'E' && playerXposition == 4) {
                    cout << E4.at(0)  << endl;
                    cout << E4.at(1)  << endl;
                    cout << E4.at(2)  << endl;
                    cout << E4.at(3)  << endl;
                    cout << E4.at(4)  << endl;
                    cout << E4.at(5)  << endl;
                    cout << E4.at(6)  << endl;
                    cout << E4.at(7)  << endl;
                    cout << E4.at(8)  << endl;
                    cout << E4.at(9)  << endl;
                    cout << E4.at(10) << endl;
                    cout << E4.at(11) << endl;
                }
                else if (playerYposition == 'A' && playerXposition == 5) {
                    cout << A5.at(0)  << endl;
                    cout << A5.at(1)  << endl;
                    cout << A5.at(2)  << endl;
                    cout << A5.at(3)  << endl;
                    cout << A5.at(4)  << endl;
                    cout << A5.at(5)  << endl;
                    cout << A5.at(6)  << endl;
                    cout << A5.at(7)  << endl;
                    cout << A5.at(8)  << endl;
                    cout << A5.at(9)  << endl;
                    cout << A5.at(10) << endl;
                    cout << A5.at(11) << endl;
                }
                 else if (playerYposition == 'B' && playerXposition == 5) {
                    cout << B5.at(0)  << endl;
                    cout << B5.at(1)  << endl;
                    cout << B5.at(2)  << endl;
                    cout << B5.at(3)  << endl;
                    cout << B5.at(4)  << endl;
                    cout << B5.at(5)  << endl;
                    cout << B5.at(6)  << endl;
                    cout << B5.at(7)  << endl;
                    cout << B5.at(8)  << endl;
                    cout << B5.at(9)  << endl;
                    cout << B5.at(10) << endl;
                    cout << B5.at(11) << endl;
                }
                 else if (playerYposition == 'C' && playerXposition == 5) {
                    cout << C5.at(0)  << endl;
                    cout << C5.at(1)  << endl;
                    cout << C5.at(2)  << endl;
                    cout << C5.at(3)  << endl;
                    cout << C5.at(4)  << endl;
                    cout << C5.at(5)  << endl;
                    cout << C5.at(6)  << endl;
                    cout << C5.at(7)  << endl;
                    cout << C5.at(8)  << endl;
                    cout << C5.at(9)  << endl;
                    cout << C5.at(10) << endl;
                    cout << C5.at(11) << endl;
                }
                 else if (playerYposition == 'D' && playerXposition == 5) {
                    cout << D5.at(0)  << endl;
                    cout << D5.at(1)  << endl;
                    cout << D5.at(2)  << endl;
                    cout << D5.at(3)  << endl;
                    cout << D5.at(4)  << endl;
                    cout << D5.at(5)  << endl;
                    cout << D5.at(6)  << endl;
                    cout << D5.at(7)  << endl;
                    cout << D5.at(8)  << endl;
                    cout << D5.at(9)  << endl;
                    cout << D5.at(10) << endl;
                    cout << D5.at(11) << endl;
                }
                 else if (playerYposition == 'E' && playerXposition == 5) {
                    cout << E5.at(0)  << endl;
                    cout << E5.at(1)  << endl;
                    cout << E5.at(2)  << endl;
                    cout << E5.at(3)  << endl;
                    cout << E5.at(4)  << endl;
                    cout << E5.at(5)  << endl;
                    cout << E5.at(6)  << endl;
                    cout << E5.at(7)  << endl;
                    cout << E5.at(8)  << endl;
                    cout << E5.at(9)  << endl;
                    cout << E5.at(10) << endl;
                    cout << E5.at(11) << endl;
                }
            }



            }
    }

