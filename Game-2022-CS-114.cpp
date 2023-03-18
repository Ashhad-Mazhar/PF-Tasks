#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>

using namespace std;

char box = 219;
char firstAidKit = 43;
char ammoCrate = 127;

char mainPlayer[4][6] = {{' ', '_', '_', '_', ' ', ' '},
                         {'(', 'O', 'v', 'O', ')', ' '},
                         {' ', '|', ' ', '|', '-', '>'},
                         {' ', '|', '_', '|', ' ', ' '}};

char enemyA[4][6] = {{' ', ' ', '_', '_', '_', ' '},
                     {' ', '(', 'O', 'v', 'O', ')'},
                     {'<', '-', '|', ' ', '|', ' '},
                     {' ', ' ', '|', '_', '|', ' '}};

char enemyB[4][6] = {{' ', ' ', '_', '_', '_', ' '},
                     {' ', '(', 'O', 'v', 'O', ')'},
                     {'<', '-', '|', ' ', '|', ' '},
                     {' ', ' ', '|', '_', '|', ' '}};

char enemyC[4][6] = {{' ', ' ', '_', '_', '_', ' '},
                     {' ', '(', 'O', 'v', 'O', ')'},
                     {'<', '-', '|', ' ', '|', ' '},
                     {' ', ' ', '|', '_', '|', ' '}};

char redFalconCommander[9][10] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', box, box},
                                  {' ', ' ', ' ', ' ', ' ', ' ', box, box, box, box},
                                  {' ', ' ', ' ', ' ', box, box, box, box, box, box},
                                  {' ', ' ', box, box, box, box, box, box, box, box},
                                  {box, box, box, box, box, box, box, box, box, box},
                                  {' ', ' ', box, box, box, box, box, box, box, box},
                                  {' ', ' ', ' ', ' ', box, box, box, box, box, box},
                                  {' ', ' ', ' ', ' ', ' ', ' ', box, box, box, box},
                                  {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', box, box}};

string enemyAStanding = "true";
string enemyBStanding = "true";
string enemyCStanding = "true";
string redFalconCommanderStanding = "true";

string redFalconCommanderActive = "false";

int playerBulletX[100];
int playerBulletY[100];
int playerBulletCount = 0;
int enemyABulletX[100];
int enemyABulletY[100];
int enemyABulletCount = 0;
int enemyBBulletX[100];
int enemyBBulletY[100];
int enemyBBulletCount = 0;
int enemyCBulletX[100];
int enemyCBulletY[100];
int enemyCBulletCount = 0;
int redFalconCommanderBulletX[100];
int redFalconCommanderBulletY[100];
int redFalconCommanderBulletCount = 0;

int playerHealth = 100;
int enemyAHealth = 50;
int enemyBHealth = 50;
int enemyCHealth = 50;
int redFalconCommanderHealth = 500;

int remainingLives = 5;

int bulletsRemaining = 100;

int mainPlayerX = 5;
int mainPlayerY = 42;

int enemyAX = 135;
int enemyAY = 10;
int enemyBX = 125;
int enemyBY = 10;
int enemyCX = 115;
int enemyCY = 40;
int redFalconCommanderX = 105;
int redFalconCommanderY = 20;

string enemyADirection = "Up";
string enemyBDirection = "Left";
string enemyCDirection = "DiagonalUpLeft";
string redFalconCommanderDirection = "Down";

int timer = 0;

int score = 0;

void loadMazeFromFile();
void saveMazeToFile();

void printLogo();
void printHeader();
void printSubHeader(string heading);
string printMainMenu();
void playGame();
string printOptionsMenu();
void showControls();
void showInstructions();
void gameWinningScreen();
void gameOverScreen();

void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);

void printPlayer();
void erasePlayer();
void printMaze();
void movePlayerBullet();
void generatePlayerBullet();
void removePlayerBulletFromArray(int index);
void movePlayerUp();
void movePlayerDown();
void movePlayerLeft();
void movePlayerRight();

void printPlayerHealth();
void reducePlayerHealth();

void moveEnemyA();
void printEnemyA();
void eraseEnemyA();
void moveEnemyABullet();
void removeEnemyABulletFromArray(int index);
void generateEnemyABullet();
void reduceEnemyAHealth();

void moveEnemyB();
void printEnemyB();
void eraseEnemyB();
void moveEnemyBBullet();
void removeEnemyBBulletFromArray(int index);
void generateEnemyBBullet();
void reduceEnemyBHealth();

void moveEnemyC();
void printEnemyC();
void eraseEnemyC();
void moveEnemyCBullet();
void removeEnemyCBulletFromArray(int index);
void generateEnemyCBullet();
void reduceEnemyCHealth();

void moveRedFalconCommander();
void printRedFalconCommander();
void eraseRedFalconCommander();
void moveRedFalconCommanderBullet();
void removeRedFalconCommanderBulletFromArray(int index);
void generateRedFalconCommanderBullet();
void reduceRedFalconCommanderHealth();

void addScore();
void printScore();

void reduceBullets();
void printBulletsRemaining();

void reduceLives();
void printLivesRemaining();

void bulletCollisionWithEnemyA();
void bulletCollisionWithEnemyB();
void bulletCollisionWithEnemyC();
void bulletCollisionWithRedFalconCommander();

void enemyABulletCollisionWithPlayer();
void enemyBBulletCollisionWithPlayer();
void enemyCBulletCollisionWithPlayer();
void redFalconCommanderBulletCollisionWithPlayer();

void printBullet(int x, int y);
void eraseBullet(int x, int y);

void printFirstAidKit();
void printAmmoCrate();

void increaseHealth();
void increaseAmmo();

main()
{
    string menuChoice;
    printLogo();
mainMenu:
    menuChoice = printMainMenu();
    if (menuChoice == "1")
    {
        playGame();
        if (redFalconCommanderStanding == "false")
        {
            gameWinningScreen();
        }
        else
        {
            gameOverScreen();
        }
    }
    else if (menuChoice == "2")
    {
    optionsMenu:
        string optionsChoice = printOptionsMenu();
        if (optionsChoice == "1")
        {
            showControls();
            goto optionsMenu;
        }
        else if (optionsChoice == "2")
        {
            showInstructions();
            goto optionsMenu;
        }
        else if (optionsChoice == "3")
        {
            goto mainMenu;
        }
    }
}


void printLogo()
{
    // Used to print the logo of the game
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 10);
    cout << "                                 .:----:                                           " << endl;
    cout << "                               :+********=-                                        " << endl;
    cout << "                              :************:                                       " << endl;
    cout << "                              +************=                                       " << endl;
    cout << "                              +************-                                       " << endl;
    cout << "                         .:::.=**********-    -                     -              " << endl;
    cout << "                       :+****************=--=+**===================-+:             " << endl;
    cout << "                      =********************************************+++:::::==--    " << endl;
    cout << "                     =************************************=:.......                " << endl;
    cout << "                    .****************************+-.=***=.                         " << endl;
    cout << "                    -***************************+  =****:                          " << endl;
    cout << "                    -****************************++*****=                          " << endl;
    cout << "                    :**********************************-.                          " << endl;
    cout << "                 =++**********************************+                            " << endl;
    cout << "                .************************-:=+********+:                            " << endl;
    cout << "                :************************=:  .:==++=:                              " << endl;
    cout << "                -**************************.                                       " << endl;
    cout << "                +**************************.                                       " << endl;
    cout << "                 :=+**********************+                                        " << endl;
    cout << "                 +************************+                                        " << endl;
    cout << "                 =************************-                                        " << endl;
    cout << "                 -*********************:-:                                         " << endl;
    cout << "                 :*********************                                            " << endl;
    cout << "                .=*********************=.                                          " << endl;
    cout << "                =************************-                                         " << endl;
    cout << "                -*************************+                                        " << endl;
    cout << "                .**************************+.                                      " << endl;
    cout << "                .***********-:**************+                                      " << endl;
    cout << "                -*********+:   .:************=                                     " << endl;
    cout << "                =*********.      .+***********-                                    " << endl;
    cout << "                +********-         =***********=                                   " << endl;
    cout << "                +*******+           :+++********:                                  " << endl;
    cout << "               :*******+:               =*******-                                  " << endl;
    cout << "              :*******=                 -*******:                                  " << endl;
    cout << "             =******+:                 .+*******.                                  " << endl;
    cout << "            =*******:                  :*******+                                   " << endl;
    cout << "           :********:                  :*******=                                   " << endl;
    cout << "           =*******=                    *******+                                   " << endl;
    cout << "          =*******=                     =******+                                   " << endl;
    cout << "         .*******+                      .+*****:                                   " << endl;
    cout << "          +*****=.                       =*****.                                   " << endl;
    cout << "         .*****:                         -*****.                                   " << endl;
    cout << "         =****=                          =*****+:                                  " << endl;
    cout << "        .*****-                         :********=.                                " << endl;
    cout << "        =*****-                         =***********+-                             " << endl;
    cout << "        +*****+                         .....:-======-                             " << endl;
    cout << "        .::::::                                                                    " << endl;
    SetConsoleTextAttribute(hConsole, 15);
    cout << endl
         << endl
         << endl;
    cout << "Press any key to continue";
    getch();
}

void printHeader()
{
    // Used to print the header of the menu
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 10);
    cout << "   ____  __              __                    _      __                     _            " << endl;
    cout << "  / __/ / /   ___ _  ___/ / ___  _     __     | | /| / / ___ _  ____  ____  (_) ___   ____" << endl;
    cout << " _\\ \\  / _ \\ / _ `/ / _  / / _ \\ | |/|/ /     | |/ |/ / / _ `/ / __/ / __/ / / / _ \\ / __/" << endl;
    cout << "/___/ /_//_/ \\_,_/  \\_,_/  \\___/ |__,__/      |__/|__/  \\_,_/ /_/   /_/   /_/  \\___//_/   " << endl;
    cout << endl
         << endl
         << endl;
    SetConsoleTextAttribute(hConsole, 15);
}

void printSubHeader(string heading)
{
    // Used to print the subheader of the menu
    cout << heading << endl;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 10);
    cout << "--------------------------------------------------" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 15);
}

string printMainMenu()
{
    // Used to print the main menu of the game and get the choice from the user
    string choice = "0";
    while (choice != "1" && choice != "2" && choice != "3")
    {
        printHeader();
        printSubHeader("Main Menu");
        cout << "1.     Start Game" << endl;
        cout << "2.     Options" << endl;
        cout << "3.     Quit Game" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> ws;
        getline(cin, choice);
        if (choice == "1" || choice == "2" || choice == "3")
        {
            return choice;
        }
        cout << endl;
        cout << "Invalid Input" << endl;
        cout << "Please Try Again" << endl;
        cout << endl;
        cout << "Press any key to continue";
        getch();
    }
}

void playGame()
{
    // Used to execute the game loop
    system("cls");
    printMaze();
    printPlayer();
    printEnemyA();
    printEnemyB();
    printEnemyC();
    while ("true")
    {
        printScore();
        printBulletsRemaining();
        printPlayerHealth();
        printLivesRemaining();
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePlayerLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePlayerRight();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            movePlayerUp();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            movePlayerDown();
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            if (bulletsRemaining > 0)
            {
                generatePlayerBullet();
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            break;
        }

        if (timer % 3 == 0)
        {
            if (enemyAStanding == "true")
            {
                moveEnemyA();
            }
            if (enemyBStanding == "true")
            {
                moveEnemyB();
            }
            if (enemyCStanding == "true")
            {
                moveEnemyC();
            }
            if (redFalconCommanderActive == "true")
            {
                moveRedFalconCommander();
            }
            if (timer % 30 == 0)
            {
                if (enemyAStanding == "true")
                {
                    generateEnemyABullet();
                }
                if (enemyBStanding == "true")
                {
                    generateEnemyBBullet();
                }
                if (enemyCStanding == "true")
                {
                    generateEnemyCBullet();
                }
                if (redFalconCommanderActive == "true")
                {
                    generateRedFalconCommanderBullet();
                }
            }
            if (timer == 300)
            {
                printFirstAidKit();
            }
            if (timer == 600)
            {
                printAmmoCrate();
                timer = 0;
            }
        }
        movePlayerBullet();
        if (enemyAStanding == "true")
        {
            moveEnemyABullet();
        }
        if (enemyBStanding == "true")
        {
            moveEnemyBBullet();
        }
        if (enemyCStanding == "true")
        {
            moveEnemyCBullet();
        }
        if (redFalconCommanderActive == "true")
        {
            moveRedFalconCommanderBullet();
        }
        if (enemyAStanding == "true")
        {
            bulletCollisionWithEnemyA();
        }
        if (enemyBStanding == "true")
        {
            bulletCollisionWithEnemyB();
        }
        if (enemyCStanding == "true")
        {
            bulletCollisionWithEnemyC();
        }
        if (redFalconCommanderActive == "true")
        {
            bulletCollisionWithRedFalconCommander();
        }
        if (enemyAStanding == "true")
        {
            enemyABulletCollisionWithPlayer();
        }
        if (enemyBStanding == "true")
        {
            enemyBBulletCollisionWithPlayer();
        }
        if (enemyCStanding == "true")
        {
            enemyCBulletCollisionWithPlayer();
        }
        if (redFalconCommanderActive == "true")
        {
            redFalconCommanderBulletCollisionWithPlayer();
        }
        timer++;
        Sleep(1);
        if (remainingLives <= 0)
        {
            break;
        }
        if (redFalconCommanderStanding == "false")
        {
            gameWinningScreen();
            break;
        }
    }
}

string printOptionsMenu()
{
    // Used to print the options menu and get the choice from the user
    string choice = "0";
    while (choice != "1" && choice != "2" && choice != "3")
    {
        system("cls");
        printHeader();
        printSubHeader("Options");
        cout << "1.     View Controls" << endl;
        cout << "2.     View Instructions" << endl;
        cout << "3.     Go to Main Menu" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> ws;
        getline(cin, choice);
        if (choice == "1" || choice == "2" || choice == "3")
        {
            return choice;
        }
        cout << endl;
        cout << "Invalid Input" << endl;
        cout << "Please Try Again" << endl;
        cout << endl;
        cout << "Press any key to continue";
        getch();
    }
}

void showControls()
{
    // Used to display the cotrols
    system("cls");
    printHeader();
    printSubHeader("Controls");
    cout << "Key                Action" << endl;
    cout << endl;
    cout << "Right Arrow        Move Right" << endl;
    cout << "Left Arrow         Move Left" << endl;
    cout << "Up Arrow           Move Up" << endl;
    cout << "Down Arrow         Move Down" << endl;
    cout << "Spacebar           Shoot" << endl;
    cout << "Esc                Quit Game" << endl;
    cout << endl;
    cout << "Press any key to continue";
    getch();
}

void showInstructions()
{
    // Used to display the game instructions
    system("cls");
    printHeader();
    printSubHeader("Instructions");
    cout << "--> Your total health is shown at the bottom of the screen." << endl;
    cout << "--> Your total lives are also shown at the bottom of the screen." << endl;
    cout << "--> You lose a life every time your health falls to zero." << endl;
    cout << "--> You have a total of 5 lives." << endl;
    cout << "--> The game will end once you have lost all 5 of your lives." << endl;
    cout << "--> The goal of the game is to defeat the Red Falcon Commander" << endl;
    cout << "    after shooting your way through all of the previous enemies" << endl;
    cout << "    before you lose all 5 of your lives." << endl;
    cout << "--> You and your enemies have assault rifles to fight each other." << endl;
    cout << "--> You can pick up twp power ups throughout the game which" << endl;
    cout << "    are: First-Aid Kits and Ammo Crates" << endl;
    cout << endl;
    cout << "Press any key to continue";
    getch();
}

void gotoxy(int x, int y)
{
    // Used to move the cursor to the coordinates specified
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    // Used to return the character at the specified coordinates
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void printScore()
{
    // Used to print the player's current score
    gotoxy(65, 50);
    cout << "Score: " << score;
}

void moveEnemyA()
{
    // Used to change enemy A's position
    if (enemyADirection == "Up")
    {
        char next = getCharAtxy(enemyAX, enemyAY - 1);
        if (next == ' ')
        {
            eraseEnemyA();
            enemyAY--;
            printEnemyA();
        }
        if (next == box)
        {
            enemyADirection = "Down";
        }
    }
    if (enemyADirection == "Down")
    {
        char next = getCharAtxy(enemyAX, enemyAY + 4);
        if (next == ' ')
        {
            eraseEnemyA();
            enemyAY++;
            printEnemyA();
        }
        if (next == box)
        {
            enemyADirection = "Up";
        }
    }
}

void moveEnemyB()
{
    // Used to change enemy B's position
    if (enemyBDirection == "Left")
    {
        char next = getCharAtxy(enemyBX - 3, enemyBY);
        if (next == ' ')
        {
            eraseEnemyB();
            enemyBX--;
            printEnemyB();
        }
        if (next == box)
        {
            enemyBDirection = "Right";
        }
    }
    if (enemyBDirection == "Right")
    {
        char next = getCharAtxy(enemyBX + 6, enemyBY);
        if (next == ' ')
        {
            eraseEnemyB();
            enemyBX++;
            printEnemyB();
        }
        if (next == box)
        {
            enemyBDirection = "Left";
        }
    }
}

void moveEnemyC()
{
    // Used to change enemy C's position
    if (enemyCDirection == "DiagonalUpLeft")
    {
        char next = getCharAtxy(enemyCX - 1, enemyCY - 1);
        if (next == ' ')
        {
            eraseEnemyC();
            enemyCX--;
            enemyCY--;
            printEnemyC();
        }
        if (next == box)
        {
            enemyCDirection = "DiagonalDownLeft";
        }
    }
    if (enemyCDirection == "DiagonalDownRight")
    {
        char next = getCharAtxy(enemyCX + 6, enemyCY + 4);
        if (next == ' ')
        {
            eraseEnemyC();
            enemyCX++;
            enemyCY++;
            printEnemyC();
        }
        if (next == box)
        {
            enemyCDirection = "DiagonalUpLeft";
        }
    }
    if (enemyCDirection == "DiagonalDownLeft")
    {
        char next = getCharAtxy(enemyCX - 1, enemyCY + 4);
        if (next == ' ')
        {
            eraseEnemyC();
            enemyCX--;
            enemyCY++;
            printEnemyC();
        }
        if (next == box)
        {
            enemyCDirection = "DiagonalUpRight";
        }
    }
    if (enemyCDirection == "DiagonalUpRight")
    {
        char next = getCharAtxy(enemyCX + 6, enemyCY - 1);
        if (next == ' ')
        {
            eraseEnemyC();
            enemyCX++;
            enemyCY--;
            printEnemyC();
        }
        if (next == box)
        {
            enemyCDirection = "DiagonalDownRight";
        }
    }
}

void moveRedFalconCommander()
{
    // Used to change Red Falcon Commander's position
    if (redFalconCommanderDirection == "Up")
    {
        char next = getCharAtxy(redFalconCommanderX, redFalconCommanderY - 1);
        if (next == ' ')
        {
            eraseRedFalconCommander();
            redFalconCommanderY--;
            printRedFalconCommander();
        }
        if (next == box)
        {
            redFalconCommanderDirection = "Down";
        }
    }
    if (redFalconCommanderDirection == "Down")
    {
        char next = getCharAtxy(redFalconCommanderX, redFalconCommanderY + 10);
        if (next == ' ')
        {
            eraseRedFalconCommander();
            redFalconCommanderY++;
            printRedFalconCommander();
        }
        if (next == box)
        {
            redFalconCommanderDirection = "Up";
        }
    }
}

void printEnemyA()
{
    // Used to display enemy A on the screen
    if (enemyAHealth <= 50 && enemyAHealth >= 35)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 10);
        for (int i = 0; i < 4; i++)
        {
            gotoxy(enemyAX, enemyAY + i);
            for (int j = 0; j < 6; j++)
            {
                cout << enemyA[i][j];
            }
        }
        SetConsoleTextAttribute(hConsole, 15);
    }
    if (enemyAHealth < 35 && enemyAHealth >= 20)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 14);
        gotoxy(enemyAX, enemyAY);
        for (int i = 0; i < 4; i++)
        {
            gotoxy(enemyAX, enemyAY + i);
            for (int j = 0; j < 6; j++)
            {
                cout << enemyA[i][j];
            }
        }
        SetConsoleTextAttribute(hConsole, 15);
    }
    if (enemyAHealth < 20)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(enemyAX, enemyAY);
        for (int i = 0; i < 4; i++)
        {
            gotoxy(enemyAX, enemyAY + i);
            for (int j = 0; j < 6; j++)
            {
                cout << enemyA[i][j];
            }
        }
        SetConsoleTextAttribute(hConsole, 15);
    }
}

void printEnemyB()
{
    // Used to display enemy B on the screen
    if (enemyBHealth <= 50 && enemyBHealth >= 35)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 10);
        for (int i = 0; i < 4; i++)
        {
            gotoxy(enemyBX, enemyBY + i);
            for (int j = 0; j < 6; j++)
            {
                cout << enemyB[i][j];
            }
        }
        SetConsoleTextAttribute(hConsole, 15);
    }
    if (enemyBHealth < 35 && enemyBHealth >= 20)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 14);
        for (int i = 0; i < 4; i++)
        {
            gotoxy(enemyBX, enemyBY + i);
            for (int j = 0; j < 6; j++)
            {
                cout << enemyB[i][j];
            }
        }
        SetConsoleTextAttribute(hConsole, 15);
    }
    if (enemyBHealth < 20)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 12);
        for (int i = 0; i < 4; i++)
        {
            gotoxy(enemyBX, enemyBY + i);
            for (int j = 0; j < 6; j++)
            {
                cout << enemyB[i][j];
            }
        }
        SetConsoleTextAttribute(hConsole, 15);
    }
}

void printEnemyC()
{
    // Used to display enemy C on the screen
    if (enemyCHealth <= 50 && enemyCHealth >= 35)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 10);
        for (int i = 0; i < 4; i++)
        {
            gotoxy(enemyCX, enemyCY + i);
            for (int j = 0; j < 6; j++)
            {
                cout << enemyC[i][j];
            }
        }
        SetConsoleTextAttribute(hConsole, 15);
    }
    if (enemyCHealth < 35 && enemyCHealth >= 20)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 14);
        for (int i = 0; i < 4; i++)
        {
            gotoxy(enemyCX, enemyCY + i);
            for (int j = 0; j < 6; j++)
            {
                cout << enemyC[i][j];
            }
        }
        SetConsoleTextAttribute(hConsole, 15);
    }
    if (enemyCHealth < 20)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 12);
        for (int i = 0; i < 4; i++)
        {
            gotoxy(enemyCX, enemyCY + i);
            for (int j = 0; j < 6; j++)
            {
                cout << enemyC[i][j];
            }
        }
        SetConsoleTextAttribute(hConsole, 15);
    }
}

void printRedFalconCommander()
{
    // Used to display the Red Falcon Commander on the screen
    if (redFalconCommanderHealth <= 500 && redFalconCommanderHealth >= 350)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 10);
        for (int i = 0; i < 9; i++)
        {
            gotoxy(redFalconCommanderX, redFalconCommanderY + i);
            for (int j = 0; j < 10; j++)
            {
                cout << redFalconCommander[i][j];
            }
        }
        SetConsoleTextAttribute(hConsole, 15);
    }
    if (redFalconCommanderHealth < 350 && redFalconCommanderHealth >= 150)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 14);
        for (int i = 0; i < 9; i++)
        {
            gotoxy(redFalconCommanderX, redFalconCommanderY + i);
            for (int j = 0; j < 10; j++)
            {
                cout << redFalconCommander[i][j];
            }
        }
        SetConsoleTextAttribute(hConsole, 15);
    }
    if (redFalconCommanderHealth < 150)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 12);
        for (int i = 0; i < 9; i++)
        {
            gotoxy(redFalconCommanderX, redFalconCommanderY + i);
            for (int j = 0; j < 10; j++)
            {
                cout << redFalconCommander[i][j];
            }
        }
        SetConsoleTextAttribute(hConsole, 15);
    }
}

void eraseEnemyA()
{
    // Used to erase the enemy A from the screen
    for (int i = 0; i < 4; i++)
    {
        gotoxy(enemyAX, enemyAY + i);
        for (int index = 0; index < 6; index++)
        {
            cout << " ";
        }
    }
}

void eraseEnemyB()
{
    // Used to erase the enemy B from the screen
    for (int i = 0; i < 4; i++)
    {
        gotoxy(enemyAX, enemyAY + i);
        for (int index = 0; index < 6; index++)
        {
            cout << " ";
        }
    }
}

void eraseEnemyC()
{
    // Used to erase the enemy C from the screen
    for (int i = 0; i < 4; i++)
    {
        gotoxy(enemyAX, enemyAY + i);
        for (int index = 0; index < 6; index++)
        {
            cout << " ";
        }
    }
}

void eraseRedFalconCommander()
{
    // Used to erase the Red Falcon Commander from the screen
    for (int i = 0; i < 9; i++)
    {
        gotoxy(redFalconCommanderX, redFalconCommanderY + i);
        for (int index = 0; index < 10; index++)
        {
            cout << " ";
        }
    }
}

void moveEnemyABullet()
{
    // Used to move enemy A's bullet from the screen
    for (int x = 0; x < enemyABulletCount; x++)
    {
        char next = getCharAtxy(enemyABulletX[x] - 1, enemyABulletY[x]);
        if (next != ' ')
        {
            eraseBullet(enemyABulletX[x], enemyABulletY[x]);
            removeEnemyABulletFromArray(x);
        }
        else
        {
            eraseBullet(enemyABulletX[x], enemyABulletY[x]);
            enemyABulletX[x] = enemyABulletX[x] - 1;
            printBullet(enemyABulletX[x], enemyABulletY[x]);
        }
    }
}

void moveEnemyBBullet()
{
    // Used to move enemy B's bullet from the screen
    for (int x = 0; x < enemyBBulletCount; x++)
    {
        char next = getCharAtxy(enemyBBulletX[x] - 1, enemyBBulletY[x]);
        if (next != ' ')
        {
            eraseBullet(enemyBBulletX[x], enemyBBulletY[x]);
            removeEnemyBBulletFromArray(x);
        }
        else
        {
            eraseBullet(enemyBBulletX[x], enemyBBulletY[x]);
            enemyBBulletX[x] = enemyBBulletX[x] - 1;
            printBullet(enemyBBulletX[x], enemyBBulletY[x]);
        }
    }
}

void moveEnemyCBullet()
{
    // Used to move enemy C's bullet from the screen
    for (int x = 0; x < enemyCBulletCount; x++)
    {
        char next = getCharAtxy(enemyCBulletX[x] - 1, enemyCBulletY[x]);
        if (next != ' ')
        {
            eraseBullet(enemyCBulletX[x], enemyCBulletY[x]);
            removeEnemyCBulletFromArray(x);
        }
        else
        {
            eraseBullet(enemyCBulletX[x], enemyCBulletY[x]);
            enemyCBulletX[x] = enemyCBulletX[x] - 1;
            printBullet(enemyCBulletX[x], enemyCBulletY[x]);
        }
    }
}
void moveRedFalconCommanderBullet()
{
    // Used to move Red Falcon Commander's bullet from the screen
    for (int x = 0; x < redFalconCommanderBulletCount; x++)
    {
        char next = getCharAtxy(redFalconCommanderBulletX[x] - 1, redFalconCommanderBulletY[x]);
        if (next != ' ')
        {
            eraseBullet(redFalconCommanderBulletX[x], redFalconCommanderBulletY[x]);
            removeRedFalconCommanderBulletFromArray(x);
        }
        else
        {
            eraseBullet(redFalconCommanderBulletX[x], redFalconCommanderBulletY[x]);
            redFalconCommanderBulletX[x] = redFalconCommanderBulletX[x] - 1;
            printBullet(redFalconCommanderBulletX[x], redFalconCommanderBulletY[x]);
        }
    }
}

void generateEnemyABullet()
{
    // Used to generate enemy A's bullet on the screen
    enemyABulletX[enemyABulletCount] = enemyAX - 1;
    enemyABulletY[enemyABulletCount] = enemyAY + 2;
    gotoxy(enemyAX - 1, enemyAY + 2);
    cout << ".";
    enemyABulletCount++;
}

void generateEnemyBBullet()
{
    // Used to generate enemy B's bullet on the screen
    enemyBBulletX[enemyBBulletCount] = enemyBX - 1;
    enemyBBulletY[enemyBBulletCount] = enemyBY + 2;
    gotoxy(enemyBX - 1, enemyBY + 2);
    cout << ".";
    enemyBBulletCount++;
}

void generateEnemyCBullet()
{
    // Used to generate enemy C's bullet on the screen
    enemyCBulletX[enemyCBulletCount] = enemyCX - 1;
    enemyCBulletY[enemyCBulletCount] = enemyCY + 2;
    gotoxy(enemyCX - 1, enemyCY + 2);
    cout << ".";
    enemyCBulletCount++;
}

void generateRedFalconCommanderBullet()
{
    // Used to generate Red Falcon Commander's bullet on the screen
    redFalconCommanderBulletX[redFalconCommanderBulletCount] = redFalconCommanderX - 1;
    redFalconCommanderBulletY[redFalconCommanderBulletCount] = redFalconCommanderY + 5;
    gotoxy(redFalconCommanderX - 1, redFalconCommanderY + 5);
    cout << ".";
    redFalconCommanderBulletCount++;
}

void removeEnemyABulletFromArray(int index)
{
    // Used to remove enemy A's bullet from its array
    for (int x = index; x < enemyABulletCount - 1; x++)
    {
        enemyABulletX[x] = enemyABulletX[x + 1];
        enemyABulletY[x] = enemyABulletY[x + 1];
    }
    enemyABulletCount--;
}

void removeEnemyBBulletFromArray(int index)
{
    // Used to remove enemy B's bullet from its array
    for (int x = index; x < enemyBBulletCount - 1; x++)
    {
        enemyBBulletX[x] = enemyBBulletX[x + 1];
        enemyBBulletY[x] = enemyBBulletY[x + 1];
    }
    enemyBBulletCount--;
}

void removeEnemyCBulletFromArray(int index)
{
    // Used to remove enemy C's bullet from its array
    for (int x = index; x < enemyCBulletCount - 1; x++)
    {
        enemyCBulletX[x] = enemyCBulletX[x + 1];
        enemyCBulletY[x] = enemyCBulletY[x + 1];
    }
    enemyCBulletCount--;
}

void removeRedFalconCommanderBulletFromArray(int index)
{
    // Used to remove Red Falcon Commander's bullet from its array
    for (int x = index; x < redFalconCommanderBulletCount - 1; x++)
    {
        redFalconCommanderBulletX[x] = redFalconCommanderBulletX[x + 1];
        redFalconCommanderBulletY[x] = redFalconCommanderBulletY[x + 1];
    }
    redFalconCommanderBulletCount--;
}

void movePlayerLeft()
{
    // Used to move the player one space to the left
    char next = getCharAtxy(mainPlayerX - 1, mainPlayerY);
    char location2 = getCharAtxy(mainPlayerX - 1, mainPlayerY + 1);
    char location3 = getCharAtxy(mainPlayerX - 1, mainPlayerY + 2);
    char location4 = getCharAtxy(mainPlayerX - 1, mainPlayerY + 3);
    if (next == ' ')
    {
        erasePlayer();
        mainPlayerX = mainPlayerX - 1;
        printPlayer();
    }
    if (next == firstAidKit || location2 == firstAidKit || location3 == firstAidKit || location4 == firstAidKit)
    {
        erasePlayer();
        mainPlayerX = mainPlayerX - 1;
        printPlayer();
        increaseHealth();
    }
    if (next == ammoCrate || location2 == ammoCrate || location3 == ammoCrate || location4 == ammoCrate)
    {
        erasePlayer();
        mainPlayerX = mainPlayerX - 1;
        printPlayer();
        increaseAmmo();
    }
}

void movePlayerRight()
{
    // Used to move the player one space to the right
    char next = getCharAtxy(mainPlayerX + 6, mainPlayerY);
    char location2 = getCharAtxy(mainPlayerX + 6, mainPlayerY + 1);
    char location3 = getCharAtxy(mainPlayerX + 6, mainPlayerY + 2);
    char location4 = getCharAtxy(mainPlayerX + 6, mainPlayerY + 3);
    if (next == ' ')
    {
        erasePlayer();
        mainPlayerX = mainPlayerX + 1;
        printPlayer();
    }
    if (next == firstAidKit || location2 == firstAidKit || location3 == firstAidKit || location4 == firstAidKit)
    {
        erasePlayer();
        mainPlayerX = mainPlayerX + 1;
        printPlayer();
        increaseHealth();
    }
    if (next == ammoCrate || location2 == ammoCrate || location3 == ammoCrate || location4 == ammoCrate)
    {
        erasePlayer();
        mainPlayerX = mainPlayerX + 1;
        printPlayer();
        increaseAmmo();
    }
}

void movePlayerUp()
{
    // Used to move the player one space upward
    char next = getCharAtxy(mainPlayerX, mainPlayerY - 1);
    char location2 = getCharAtxy(mainPlayerX + 1, mainPlayerY - 1);
    char location3 = getCharAtxy(mainPlayerX + 2, mainPlayerY - 1);
    char location4 = getCharAtxy(mainPlayerX + 3, mainPlayerY - 1);
    char location5 = getCharAtxy(mainPlayerX + 4, mainPlayerY - 1);
    char location6 = getCharAtxy(mainPlayerX + 5, mainPlayerY - 1);
    if (next == ' ')
    {
        erasePlayer();
        mainPlayerY = mainPlayerY - 1;
        printPlayer();
    }
    if (next == firstAidKit || location2 == firstAidKit || location3 == firstAidKit || location4 == firstAidKit || location5 == firstAidKit || location6 == firstAidKit)
    {
        erasePlayer();
        mainPlayerY = mainPlayerY - 1;
        printPlayer();
        increaseHealth();
    }
    if (next == ammoCrate || location2 == ammoCrate || location3 == ammoCrate || location4 == ammoCrate || location5 == ammoCrate || location6 == ammoCrate)
    {
        erasePlayer();
        mainPlayerY = mainPlayerY - 1;
        printPlayer();
        increaseAmmo();
    }
}

void movePlayerDown()
{
    // Used to move the player one space downward
    char next = getCharAtxy(mainPlayerX, mainPlayerY + 5);
    char location2 = getCharAtxy(mainPlayerX + 1, mainPlayerY + 5);
    char location3 = getCharAtxy(mainPlayerX + 2, mainPlayerY + 5);
    char location4 = getCharAtxy(mainPlayerX + 3, mainPlayerY + 5);
    char location5 = getCharAtxy(mainPlayerX + 4, mainPlayerY + 5);
    char location6 = getCharAtxy(mainPlayerX + 5, mainPlayerY + 5);
    if (next == ' ')
    {
        erasePlayer();
        mainPlayerY = mainPlayerY + 1;
        printPlayer();
    }
    if (next == firstAidKit || location2 == firstAidKit || location3 == firstAidKit || location4 == firstAidKit || location5 == firstAidKit || location6 == firstAidKit)
    {
        erasePlayer();
        mainPlayerY = mainPlayerY + 1;
        printPlayer();
        increaseHealth();
    }
    if (next == ammoCrate || location2 == ammoCrate || location3 == ammoCrate || location4 == ammoCrate || location5 == ammoCrate || location6 == ammoCrate)
    {
        erasePlayer();
        mainPlayerY = mainPlayerY + 1;
        printPlayer();
        increaseAmmo();
    }
}

void generatePlayerBullet()
{
    // Used to generate the player's bullet on the screen
    char next = getCharAtxy(mainPlayerX + 7, mainPlayerY + 2);
    if (next == ' ')
    {
        playerBulletX[playerBulletCount] = mainPlayerX + 6;
        playerBulletY[playerBulletCount] = mainPlayerY + 2;
        printBullet(mainPlayerX + 6, mainPlayerY + 2);
        playerBulletCount++;
        reduceBullets();
        printBulletsRemaining();
    }
}

void removePlayerBulletFromArray(int index)
{
    // Used to remove the player's bullet from its array
    for (int x = index; x < playerBulletCount - 1; x++)
    {
        playerBulletX[x] = playerBulletX[x + 1];
        playerBulletY[x] = playerBulletY[x + 1];
    }
    playerBulletCount--;
}

void printPlayer()
{
    // Used to display the player on the screen
    if (playerHealth >= 70)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 10);
        for (int i = 0; i < 4; i++)
        {
            gotoxy(mainPlayerX, mainPlayerY + i);
            for (int j = 0; j < 6; j++)
            {
                cout << mainPlayer[i][j];
            }
        }
        SetConsoleTextAttribute(hConsole, 15);
    }
    if (playerHealth < 70 && playerHealth >= 30)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 14);
        for (int i = 0; i < 4; i++)
        {
            gotoxy(mainPlayerX, mainPlayerY + i);
            for (int j = 0; j < 6; j++)
            {
                cout << mainPlayer[i][j];
            }
        }
        SetConsoleTextAttribute(hConsole, 15);
    }
    if (playerHealth < 30)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 12);
        for (int i = 0; i < 4; i++)
        {
            gotoxy(mainPlayerX, mainPlayerY + i);
            for (int j = 0; j < 6; j++)
            {
                cout << mainPlayer[i][j];
            }
        }
        SetConsoleTextAttribute(hConsole, 15);
    }
}

void erasePlayer()
{
    // Used to erase the player from the screen
    gotoxy(mainPlayerX, mainPlayerY);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(mainPlayerX, mainPlayerY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(mainPlayerX, mainPlayerY + 2);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(mainPlayerX, mainPlayerY + 3);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
}

void printMaze()
{
    // Used to display the maze of the game on the screen
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 11);
    for (int i = 0; i < 151; i++)
    {
        cout << box;
    }
    gotoxy(0, 0);
    for (int i = 0; i < 46; i++)
    {
        cout << box;
        cout << endl;
    }
    gotoxy(1, 0);
    for (int i = 0; i < 48; i++)
    {
        cout << box;
        gotoxy(1, i);
    }
    gotoxy(0, 46);
    for (int i = 0; i < 151; i++)
    {
        cout << box;
    }
    gotoxy(151, 0);
    for (int i = 0; i < 48; i++)
    {
        cout << box;
        gotoxy(151, i);
    }
    gotoxy(150, 0);
    for (int i = 0; i < 48; i++)
    {
        cout << box;
        gotoxy(150, i);
    }
    SetConsoleTextAttribute(hConsole, 15);
}

void movePlayerBullet()
{
    // Used to move the player's bullet on the screen
    for (int x = 0; x < playerBulletCount; x++)
    {
        char next = getCharAtxy(playerBulletX[x] + 1, playerBulletY[x]);
        if (next != ' ')
        {
            eraseBullet(playerBulletX[x], playerBulletY[x]);
            removePlayerBulletFromArray(x);
        }
        else
        {
            eraseBullet(playerBulletX[x], playerBulletY[x]);
            playerBulletX[x] = playerBulletX[x] + 1;
            printBullet(playerBulletX[x], playerBulletY[x]);
        }
    }
}

void printBullet(int x, int y)
{
    // Used to display the player's bullet on the screen
    gotoxy(x, y);
    cout << ".";
}

void eraseBullet(int x, int y)
{
    // Used to erase the player's bullet from the screen
    gotoxy(x, y);
    cout << " ";
}

void bulletCollisionWithEnemyA()
{
    // Used to detect the player's bullet collision with the enemy A
    for (int x = 0; x < playerBulletCount; x++)
    {
        if (playerBulletX[x] + 1 == enemyAX && (playerBulletY[x] == enemyAY || playerBulletY[x] == enemyAY + 1 || playerBulletY[x] == enemyAY + 2 || playerBulletY[x] == enemyAY + 3))
        {
            addScore();
            reduceEnemyAHealth();
            eraseBullet(playerBulletX[x], playerBulletY[x]);
            removePlayerBulletFromArray(x);
        }
    }
}

void bulletCollisionWithEnemyB()
{
    // Used to detect the player's bullet collision with the enemy B
    for (int x = 0; x < playerBulletCount; x++)
    {
        if (playerBulletX[x] + 1 == enemyBX && (playerBulletY[x] == enemyBY || playerBulletY[x] == enemyBY + 1 || playerBulletY[x] == enemyBY + 2 || playerBulletY[x] == enemyBY + 3))
        {
            addScore();
            reduceEnemyBHealth();
            eraseBullet(playerBulletX[x], playerBulletY[x]);
            removePlayerBulletFromArray(x);
        }
    }
}

void bulletCollisionWithEnemyC()
{
    // Used to detect the player's bullet collision with the enemy C
    for (int x = 0; x < playerBulletCount; x++)
    {
        if (playerBulletX[x] + 1 == enemyCX && (playerBulletY[x] == enemyCY || playerBulletY[x] == enemyCY + 1 || playerBulletY[x] == enemyCY + 2 || playerBulletY[x] == enemyCY + 3))
        {
            addScore();
            reduceEnemyCHealth();
            eraseBullet(playerBulletX[x], playerBulletY[x]);
            removePlayerBulletFromArray(x);
        }
    }
}

void bulletCollisionWithRedFalconCommander()
{
    // Used to detect the player's bullet collision with the Red Falcon Commander
    for (int x = 0; x < playerBulletCount; x++)
    {
        if (playerBulletX[x] + 1 == redFalconCommanderX && (playerBulletY[x] == redFalconCommanderY || playerBulletY[x] == redFalconCommanderY + 1 || playerBulletY[x] == redFalconCommanderY + 2 || playerBulletY[x] == redFalconCommanderY + 3 || playerBulletY[x] == redFalconCommanderY + 4 || playerBulletY[x] == redFalconCommanderY + 5 || playerBulletY[x] == redFalconCommanderY + 6 || playerBulletY[x] == redFalconCommanderY + 7 || playerBulletY[x] == redFalconCommanderY + 8 || playerBulletY[x] == redFalconCommanderY + 9))
        {
            addScore();
            reduceRedFalconCommanderHealth();
            eraseBullet(playerBulletX[x], playerBulletY[x]);
            removePlayerBulletFromArray(x);
        }
    }
}

void enemyABulletCollisionWithPlayer()
{
    // Used to detect the enemy A's bullet collision with the player
    for (int x = 0; x < enemyABulletCount; x++)
    {
        if (enemyABulletX[x] - 1 == (mainPlayerX + 7) && (enemyABulletY[x] == mainPlayerY || enemyABulletY[x] == mainPlayerY + 1 || enemyABulletY[x] == mainPlayerY + 2 || enemyABulletY[x] == mainPlayerY + 3))
        {
            reducePlayerHealth();
            eraseBullet(enemyABulletX[x], enemyABulletY[x]);
            removeEnemyABulletFromArray(x);
        }
    }
}

void enemyBBulletCollisionWithPlayer()
{
    // Used to detect the enemy B's bullet collision with the player
    for (int x = 0; x < enemyBBulletCount; x++)
    {
        if (enemyBBulletX[x] - 1 == (mainPlayerX + 7) && (enemyBBulletY[x] == mainPlayerY || enemyBBulletY[x] == mainPlayerY + 1 || enemyBBulletY[x] == mainPlayerY + 2 || enemyBBulletY[x] == mainPlayerY + 3))
        {
            reducePlayerHealth();
            eraseBullet(enemyBBulletX[x], enemyBBulletY[x]);
            removeEnemyBBulletFromArray(x);
        }
    }
}

void enemyCBulletCollisionWithPlayer()
{
    // Used to detect the enemy C's bullet collision with the player
    for (int x = 0; x < enemyCBulletCount; x++)
    {
        if (enemyCBulletX[x] - 1 == (mainPlayerX + 7) && (enemyCBulletY[x] == mainPlayerY || enemyCBulletY[x] == mainPlayerY + 1 || enemyCBulletY[x] == mainPlayerY + 2 || enemyCBulletY[x] == mainPlayerY + 3))
        {
            reducePlayerHealth();
            eraseBullet(enemyCBulletX[x], enemyCBulletY[x]);
            removeEnemyCBulletFromArray(x);
        }
    }
}

void redFalconCommanderBulletCollisionWithPlayer()
{
    // Used to detect the Red Falcon Commander's bullet collision with the player
    for (int x = 0; x < redFalconCommanderBulletCount; x++)
    {
        if (redFalconCommanderBulletX[x] - 1 == (mainPlayerX + 7) && (redFalconCommanderBulletY[x] == mainPlayerY || redFalconCommanderBulletY[x] == mainPlayerY + 1 || redFalconCommanderBulletY[x] == mainPlayerY + 2 || redFalconCommanderBulletY[x] == mainPlayerY + 3))
        {
            reducePlayerHealth();
            reducePlayerHealth();
            reducePlayerHealth();
            reducePlayerHealth();
            reducePlayerHealth();
            eraseBullet(redFalconCommanderBulletX[x], redFalconCommanderBulletY[x]);
            removeRedFalconCommanderBulletFromArray(x);
        }
    }
}

void addScore()
{
    // Used to increment the player's score
    score++;
}

void reduceBullets()
{
    // Used to reduce the number of bullets remaining
    bulletsRemaining--;
}

void printBulletsRemaining()
{
    // Used to display the number of bullets remaining
    gotoxy(65, 52);
    cout << "Bullets:          ";
    gotoxy(65, 52);
    cout << "Bullets: " << bulletsRemaining;
}

void printPlayerHealth()
{
    // Used to display the player's health
    gotoxy(65, 54);
    cout << "Health:           ";
    gotoxy(65, 54);
    cout << "Health: " << playerHealth;
}

void reducePlayerHealth()
{
    // Used to reduce the player's health and reduce lives if required
    playerHealth = playerHealth - 10;
    if (playerHealth <= 0)
    {
        reduceLives();
        playerHealth = 100;
    }
}

void reduceEnemyAHealth()
{
    // Used to reduce the enemy A's health and remove it from the game if required
    enemyAHealth = enemyAHealth - 5;
    if (enemyAHealth == 0)
    {
        eraseEnemyA();
        enemyAStanding = "false";
        if (enemyBStanding == "false" && enemyCStanding == "false")
        {
            redFalconCommanderActive = "true";
        }
        for (int x = 0; x < enemyABulletCount; x++)
        {
            eraseBullet(enemyABulletX[x], enemyABulletY[x]);
        }
        enemyABulletCount = 0;
    }
}

void reduceEnemyBHealth()
{
    // Used to reduce the enemy B's health and remove it from the game if required
    enemyBHealth = enemyBHealth - 5;
    if (enemyBHealth == 0)
    {
        eraseEnemyB();
        enemyBStanding = "false";
        if (enemyAStanding == "false" && enemyCStanding == "false")
        {
            redFalconCommanderActive = "true";
        }
        for (int x = 0; x < enemyBBulletCount; x++)
        {
            eraseBullet(enemyBBulletX[x], enemyBBulletY[x]);
        }
        enemyBBulletCount = 0;
    }
}

void reduceEnemyCHealth()
{
    // Used to reduce the enemy C's health and remove it from the game if required
    enemyCHealth = enemyCHealth - 5;
    if (enemyCHealth == 0)
    {
        eraseEnemyC();
        enemyCStanding = "false";
        if (enemyBStanding == "false" && enemyAStanding == "false")
        {
            redFalconCommanderActive = "true";
        }
        for (int x = 0; x < enemyCBulletCount; x++)
        {
            eraseBullet(enemyCBulletX[x], enemyCBulletY[x]);
        }
        enemyCBulletCount = 0;
    }
}

void reduceRedFalconCommanderHealth()
{
    // Used to reduce the Red Falcon Commander's health and remove it from the game if required
    redFalconCommanderHealth = redFalconCommanderHealth - 5;
    if (redFalconCommanderHealth == 0)
    {
        redFalconCommanderStanding = "false";
    }
}

void reduceLives()
{
    // Used to decrement the player's lives
    remainingLives--;
}

void printLivesRemaining()
{
    // Used to print the number of lives remaining on the screen
    char lives = 3;
    gotoxy(65, 56);
    cout << "Lives:           ";
    gotoxy(65, 56);
    cout << "Lives: ";
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 12);
    for (int i = 0; i < remainingLives; i++)
    {
        cout << lives << " ";
    }
    SetConsoleTextAttribute(hConsole, 15);
}

void gameOverScreen()
{
    // Used to print the game over screen
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 12);
    cout << "      _____                  " << endl;
    cout << "     / ___/ ___ _  __ _  ___ " << endl;
    cout << "    / (_ / / _ `/ /  ' \\/ -_)" << endl;
    cout << "    \\___/  \\_,_/ /_/_/_/\\__/ " << endl;
    cout << endl;
    cout << "      ____                   " << endl;
    cout << "     / __ \\ _  __ ___   ____ " << endl;
    cout << "    / /_/ /| |/ // -_) / __/ " << endl;
    cout << "    \\____/ |___/ \\__/ /_/    " << endl;
    cout << endl;
    cout << endl;
    cout << "     Your score: " << score << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 15);
    getch();
}

void gameWinningScreen()
{
    // Used to print the winning screen
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 10);
    cout << "  _____                                __      " << endl;
    cout << " / ___/ ___   ___   ___ _  ____ ___ _ / /_  ___" << endl;
    cout << "/ /__  / _ \\ / _ \\ / _ `/ / __// _ `// __/ (_-<" << endl;
    cout << "\\___/  \\___//_//_/ \\_, / /_/   \\_,_/ \\__/ /___/" << endl;
    cout << "                  /___/                        " << endl;
    cout << endl;
    cout << endl;
    cout << "    You have defeated the Red Falcon Commander and won the game" << endl;
    cout << endl;
    cout << "    Your Score: " << score << endl;
    SetConsoleTextAttribute(hConsole, 15);
    getch();
}

void printFirstAidKit()
{
    // Used to display the first aid kit on the screen
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 12);
    gotoxy(20, 37);
    cout << firstAidKit;
    SetConsoleTextAttribute(hConsole, 15);
}

void printAmmoCrate()
{
    // Used to print the ammo crate on the screen
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 10);
    gotoxy(30, 35);
    cout << ammoCrate;
    SetConsoleTextAttribute(hConsole, 15);
}

void increaseHealth()
{
    // Used to increase the player's health
    playerHealth = playerHealth + 20;
}

void increaseAmmo()
{
    // Used to increase the player's ammo
    bulletsRemaining = bulletsRemaining + 20;
}