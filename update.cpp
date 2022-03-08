#include<cstdio>
#include<iostream>
#include<cmath>
#include<ctime>
#include <stdio.h>
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>

using namespace std;

extern GLfloat position;
extern GLfloat position1;
extern GLfloat position2;
extern GLfloat position3;
extern GLfloat position4;
extern void trigger(int value);
extern void toggle(int value);
extern void toggle1(int value);
GLfloat speed = 2;
GLfloat speedc = 0.1;


void update(int value)
{

    if(position < -60)
        speedc = -0.1;
    if(position > 50)
        speedc = 0.1;

        position -= speedc;

    if(position1 < -120)
        position1 = 695;
        position1 -= speed;
    if(position2 < -620)
        position2 = 195;
        position2 -=speed;

    if(position3 < -420)
        position3 = 395;
        position3 -=speed;

    if(position4 < -220)
        position4 = 595;
        position4 -=speed;



    glutPostRedisplay();
    glutTimerFunc(10, update, 0);

}

void handleKeypress(unsigned char key, int x, int y)

{
	switch (key)
	{

        case 'r':
            toggle(1);
            PlaySound(TEXT("rain01.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
            speedc = 0;
            break;
        case 's':
            toggle(0);
            toggle1(0);
            PlaySound(NULL, 0, 0);
            PlaySound(TEXT("Traffic.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
            speedc = 0.1;
            break;
        case 'n':
            toggle(2);
            toggle1(1);
            PlaySound(NULL, 0, 0);
            PlaySound(TEXT("Chirping.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
        glutPostRedisplay();
    }
}


void handleMouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
            int a= x;
            int b= 460 - y;


		    if((a>305) && (a< 315) && (b>205) && (b<215))
            {
                trigger(1);

            }

            if((a>305) && (a<315) && (b>190) && (b<200))
            {
                trigger(2);
            }

            if((a>305) && (a< 315) && (b>175) && (b<185))
            {
                trigger(3);
            }

		}
	}

}
