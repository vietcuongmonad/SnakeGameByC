#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int width = 20, height = 20;

int GameOver = 0;
int HeadX, HeadY, FruitX, FruitY; // lie from (1->width, 1->height)

void SetUp() {
    HeadX = (width+1) / 2, HeadY = (height+1) / 2;

    do {
        FruitX = rand() % width+1;
        FruitY = rand() % height+1;
    } while (FruitX==HeadX && FruitY==HeadY);
}

void Draw() {
    system("clear");
    
    for(int i=0; i<width+1; i++) printf("#"); printf("\n");
    
    for(int i=1; i<=width; i++) {
        for(int j=0; j<width+1; j++) {
            if (j==0 || j==width) printf("#");
            else printf(" ");
        }
        printf("\n");
    }

    for(int i=0; i<width+1; i++) printf("#"); printf("\n");
}

void Input() {};

void Logic(){};

int main() {
    srand(time(NULL));

    SetUp();

    while (!GameOver) {
        Draw();
        Input();
        Logic();
    }

    return 0;
}