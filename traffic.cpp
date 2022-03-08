#include <cstdio>
#include <cmath>
#include<GL/gl.h>
#include <GL/glut.h>
#include <iostream>
#include <windows.h>
using namespace std;

extern void drawCircle(double r, double x, double y, double red, double green, double blue);
extern void update(int value);

double RED1 = 80;
double GREEN1 = 80;
double BLUE1 = 80;

double RED2 = 80;
double GREEN2 = 80;
double BLUE2 = 80;

double RED3 = 0;
double GREEN3 = 220;
double BLUE3 = 0;

extern GLfloat speed;

void traffic()
{
    //holder
    glBegin(GL_QUADS);
    glColor3ub(25, 25, 25);
    glVertex2i(301, 172);
    glVertex2i(301, 218);
    glVertex2i(318, 218);
    glVertex2i(318, 172);
    glEnd();

    //stand
    glBegin(GL_QUADS);
    glColor3ub(25, 25, 25);
    glVertex2i(308, 140);
    glVertex2i(308, 172);
    glVertex2i(312, 172);
    glVertex2i(312, 140);
    glEnd();

    //light
    drawCircle(5,310,210,RED1,GREEN1,BLUE1);
    drawCircle(5,310,195,RED2,GREEN2,BLUE2);
    drawCircle(5,310,180,RED3,GREEN3,BLUE3);

}

void trigger(int value)
{
    if(value == 1)
    {
        RED1 = 220;
        GREEN1 = 0;
        BLUE1 = 0;

        RED2 = 80;
        GREEN2 = 80;
        BLUE2 = 80;

        RED3 = 80;
        GREEN3 = 80;
        BLUE3 = 80;

        speed = 0;
        PlaySound(NULL, 0, 0);
        PlaySound(TEXT("Brake.wav"), NULL, SND_ASYNC|SND_FILENAME);
    }
    if(value == 2)
    {
        RED1 = 80;
        GREEN1 = 80;
        BLUE1 = 80;

        RED2 = 255;
        GREEN2 = 255;
        BLUE2 = 80;

        RED3 = 80;
        GREEN3 = 80;
        BLUE3 = 80;

        speed = 0.5;
    }
    if(value == 3)
    {
        RED1 = 80;
        GREEN1 = 80;
        BLUE1 = 80;

        RED2 = 80;
        GREEN2 = 80;
        BLUE2 = 80;

        RED3 = 0;
        GREEN3 = 220;
        BLUE3 = 0;

        speed = 2;
        PlaySound(TEXT("Traffic.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    }
}


