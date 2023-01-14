#include <iostream>
#include <windows.h>

using namespace std;
void printMaze();
void gotoxy (int x, int y);
void clear (int x, int y, char previous);
void showPacMan (int x, int y);
void showGhost (int x, int y);
char getCharAtxy(short int x, short int y);

main ()
{
    int gx1 = 1;
    int gy1 = 1;
    int gx2 = 2;
    int gy2 = 2;
    string direction1 = "right";
    string direction2 = "down";
    char previousChar1 = ' ';
    char previousChar2 = ' ';
    system ("cls");
    printMaze();
    showGhost (gx1, gy1);
    showGhost (gx2, gy2);
    while (true)
    {
        Sleep (100);
        if (direction1 == "right")
        {
            char nextLocation1 = getCharAtxy (gx1 + 1, gy1);
            if (nextLocation1 == '%')
            {
                direction1 = "left";
            }
            else if (nextLocation1 == ' ' || nextLocation1 == '.')
            {
                clear (gx1, gy1, previousChar1);
                gx1 = gx1 + 1;
                previousChar1 = nextLocation1;
                showGhost (gx1, gy1);
            }
        }
        if (direction1 == "left")
        {
            char nextLocation1 = getCharAtxy (gx1 - 1, gy1);
            if (nextLocation1 == '%')
            {
                direction1 = "right";
            }
            else if (nextLocation1 == ' ' || nextLocation1 == '.')
            {
                clear (gx1, gy1, previousChar1);
                gx1 = gx1 - 1;
                previousChar1 = nextLocation1;
                showGhost (gx1, gy1);
            }
        }
        if (direction2 == "down")
        {
            char nextLocation2 = getCharAtxy (gx2, gy2 - 1);
            if (nextLocation2 == '%')
            {
                direction2 = "up";
            }
            else if (nextLocation2 == ' ' || nextLocation2 == '.')
            {
                clear (gx2, gy2, previousChar2);
                gy2 = gy2 - 1;
                previousChar2 = nextLocation2;
                showGhost (gx2, gy2);
            }
        }
        if (direction2 == "up")
        {
            char nextLocation2 = getCharAtxy (gx2, gy2 + 1);
            if (nextLocation2 == '%')
            {
                direction2 = "down";
            }
            else if (nextLocation2 == ' ' || nextLocation2 == '.')
            {
                clear (gx2, gy2, previousChar2);
                gy2 = gy2 + 1;
                previousChar2 = nextLocation2;
                showGhost (gx2, gy2);
            }
        }
    }
}

void printMaze()
{
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "%                                  %" << endl;
    cout << "%                                  %" << endl;
    cout << "%                                  %" << endl;
    cout << "%                                  %" << endl;
    cout << "%                                  %" << endl;
    cout << "%                                  %" << endl;
    cout << "%                                  %" << endl;
    cout << "%                                  %" << endl;
    cout << "%                                  %" << endl;
    cout << "%                                  %" << endl;
    cout << "%                                  %" << endl;
    cout << "%                                  %" << endl;
    cout << "%                                  %" << endl;
    cout << "%                                  %" << endl;
    cout << "%                                  %" << endl;
    cout << "%                                  %" << endl;
    cout << "%                                  %" << endl;
    cout << "%                                  %" << endl;
    cout << "%                                  %" << endl;
    cout << "%                                  %" << endl;
    cout << "%                                  %" << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}

void gotoxy (int x, int y)
{
    COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void clear (int x, int y, char previous)
{
    gotoxy (x, y);
    cout << previous;
}

void showPacMan (int x, int y)
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