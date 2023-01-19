#include <iostream>
#include <windows.h>

using namespace std;
void printMaze();
void gotoxy (int x, int y);
void clearGhost (int x, int y, char previous);
void clearPacman (int x, int y);
void showPacman (int x, int y);
void showGhost (int x, int y);
char getCharAtxy(short int x, short int y);
void gameOver (int score);
void printScore (int score);

main ()
{
    int gx1 = 2;
    int gy1 = 1;
    int gx2 = 3;
    int gy2 = 3;
    int gx3 = 25;
    int gy3 = 12;
    int score = 0;
    string direction1 = "right";
    string direction2 = "down";
    bool gameRunning = true;
    system ("cls");
    printMaze();
    printScore (score);
    char previousChar1 = getCharAtxy (gx1, gy2);
    char previousChar2 = getCharAtxy (gx2, gy2);
    char previousChar3 = getCharAtxy (gx3, gy3);
    showPacman (gx3, gy3);
    showGhost (gx1, gy1);
    showGhost (gx2, gy2);
    while (gameRunning == true)
    {
        Sleep (100);
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation3 = getCharAtxy (gx3 - 1, gy3);
            if (nextLocation3 == ' ' || nextLocation3 == '.')
            {
                clearPacman (gx3, gy3);
                gx3 = gx3 - 1;
                showPacman (gx3, gy3);
                if (nextLocation3 == '.')
                {
                    score = score + 1;
                    printScore (score);
                }
            }
            else if (nextLocation3 == 'G')
            {
                gameRunning = false;
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation3 = getCharAtxy (gx3 + 1, gy3);
            if (nextLocation3 == ' ' || nextLocation3 == '.')
            {
                clearPacman (gx3, gy3);
                gx3 = gx3 + 1;
                showPacman (gx3, gy3);
                if (nextLocation3 == '.')
                {
                    score = score + 1;
                    printScore (score);
                }
            }
            else if (nextLocation3 == 'G')
            {
                gameRunning = false;
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            char nextLocation3 = getCharAtxy (gx3, gy3 - 1);
            if (nextLocation3 == ' ' || nextLocation3 == '.')
            {
                clearPacman (gx3, gy3);
                gy3 = gy3 - 1;
                showPacman (gx3, gy3);
                if (nextLocation3 == '.')
                {
                    score = score + 1;
                    printScore (score);
                }
            }
            else if (nextLocation3 == 'G')
            {
                gameRunning = false;
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation3 = getCharAtxy (gx3, gy3 + 1);
            if (nextLocation3 == ' ' || nextLocation3 == '.')
            {
                clearGhost (gx3, gy3, previousChar3);
                gy3 = gy3 + 1;
                showPacman(gx3, gy3);
                if (nextLocation3 == '.')
                {
                    score = score + 1;
                    printScore (score);
                }
            }
            else if (nextLocation3 == 'G')
            {
                gameRunning = false;
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false;
        }

        if (direction1 == "right")
        {
            char nextLocation1 = getCharAtxy (gx1 + 1, gy1);
            if (nextLocation1 == '%' || nextLocation1 == '|' || nextLocation1 == '#')
            {
                direction1 = "left";
            }
            else if (nextLocation1 == ' ' || nextLocation1 == '.')
            {
                clearGhost (gx1, gy1, previousChar1);
                gx1 = gx1 + 1;
                previousChar1 = nextLocation1;
                showGhost (gx1, gy1);
            }
            else if (nextLocation1 == 'P')
            {
                gameRunning = false;
            }
        }
        if (direction1 == "left")
        {
            char nextLocation1 = getCharAtxy (gx1 - 1, gy1);
            if (nextLocation1 == '%' || nextLocation1 == '|' || nextLocation1 == '#')
            {
                direction1 = "right";
            }
            else if (nextLocation1 == ' ' || nextLocation1 == '.')
            {
                clearGhost (gx1, gy1, previousChar1);
                gx1 = gx1 - 1;
                previousChar1 = nextLocation1;
                showGhost (gx1, gy1);
            }
            else if (nextLocation1 == 'P')
            {
                gameRunning = false;
            }
        }
        if (direction2 == "down")
        {
            char nextLocation2 = getCharAtxy (gx2, gy2 - 1);
            if (nextLocation2 == '%' || nextLocation2 == '|' || nextLocation2 == '#')
            {
                direction2 = "up";
            }
            else if (nextLocation2 == ' ' || nextLocation2 == '.')
            {
                clearGhost (gx2, gy2, previousChar2);
                gy2 = gy2 - 1;
                previousChar2 = nextLocation2;
                showGhost (gx2, gy2);
            }
            else if (nextLocation2 == 'P')
            {
                gameRunning = false;
            }
        }
        if (direction2 == "up")
        {
            char nextLocation2 = getCharAtxy (gx2, gy2 + 1);
            if (nextLocation2 == '%' || nextLocation2 == '|' || nextLocation2 == '#')
            {
                direction2 = "down";
            }
            else if (nextLocation2 == ' ' || nextLocation2 == '.')
            {
                clearGhost (gx2, gy2, previousChar2);
                gy2 = gy2 + 1;
                previousChar2 = nextLocation2;
                showGhost (gx2, gy2);
            }
            else if (nextLocation2 == 'P')
            {
                gameRunning = false;
            }
        }
    }
    if (gameRunning == false)
    {
        gameOver(score);
    }
}

void printMaze()
{
	cout << "##########################################################################" << endl;
	cout << "||.. .........................................................  ......  ||" << endl;
	cout << "||.. %%%%%%%%%%%%%%%%%       ...         %%%%%%%%%%%%%   |%|..   %%%%   ||" << endl;
	cout << "||..        |%|    |%|    |%|...         |%|       |%|   |%|      |%|   ||" << endl;
	cout << "||..        |%|    |%|    |%|...         |%|       |%|   |%|..    |%|   ||" << endl;
	cout << "||..        %%%%%%%%%  . .|%|...         %%%%%%%%%%%%%      ..   %%%%.  ||" << endl;
	cout << "||..        |%|        . .|%|...         .............. |%| ..       .  ||" << endl;
	cout << "||..        %%%%%%%%%  . .|%|...         %%%%%%%%%%%%%  |%| ..   %%%%.  ||" << endl;
	cout << "||..              |%|.                   |%|......      |%| ..    |%|.  ||" << endl;
	cout << "||..    ......... |%|.                   |%|......|%|       ..    |%|.  ||" << endl;
	cout << "||..|%| |%|%%%|%|.|%|. |%|                  ......|%|       ..|%| |%|.  ||" << endl;
	cout << "||..|%| |%|   |%|..    %%%%%%%%%%%%%%%%%%   ......|%|        .|%|.      ||" << endl;
	cout << "||..|%| |%|   |%|..                ...|%|      %%%%%%       . |%|.      ||" << endl;
	cout << "||..|%|           .                ...|%|              |%|  ..|%|.      ||" << endl;
	cout << "||..|%| %%%%%%%%%%%%%%             ...|%|%%%%%%%%%%%   |%|  ..|%|%%%%%  ||" << endl;
	cout << "||.................................................... |%|  ..........  ||" << endl;
	cout << "||   .................................................         .......  ||" << endl;
	cout << "||..|%| |%|   |%|..    %%%%%%%%%%%%%%%%%%   ......|%|    |%|  ..|%|.    ||" << endl;
	cout << "||..|%| |%|   |%|..                ...|%|     %%%%%%     |%|  ..|%|.    ||" << endl;
	cout << "||..|%|           .                ...|%|                |%|  ..|%|.    ||" << endl;
	cout << "||..|%| %%%%%%%%%%%%%%             ...|%|%%%%%%%%%%%   |%|  ..|%|%%%%%  ||" << endl;
	cout << "||.................................................... |%|  ..........  ||" << endl;
	cout << "||   .................................................         .......  ||" << endl;
	cout << "##########################################################################" << endl;
    cout << endl << endl;
}

void gotoxy (int x, int y)
{
    COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void clearGhost (int x, int y, char previous)
{
    gotoxy (x, y);
    cout << previous;
}

void clearPacman (int x, int y)
{
    gotoxy (x, y);
    cout << " ";
}

void showPacman (int x, int y)
{
    gotoxy (x, y);
    cout << "P";
}

void showGhost (int x, int y)
{
    gotoxy (x, y);
    cout << "G";
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void gameOver (int score)
{
    system ("cls");
    cout << endl << endl << "                                       Game Over";
    cout << endl <<         "                                   Your score was: " << score;
    cout << endl << endl;
}

void printScore (int score)
{
    gotoxy (0, 27);
    cout << "                               Score = " << score;
}