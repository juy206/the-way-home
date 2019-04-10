#include "main.h"

#ifndef KEY_CODE
#define KEY_CODE

// Ű���� ��  
#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4
#define SUBMIT 5 // ����(�����̽���)  

#endif

void gLoop(int);
void move(int*, int*, int, int, int*, int*); // x, y, _x, _y, key, playing
int keyControl();
void titleDraw();
int menuDraw();
int maplistDraw();
void infoDraw();
void drawMap(int*, int*);
void drawUI(int*, int*, int*);

#pragma once
