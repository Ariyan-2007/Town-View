#include<cstdio>
#include<iostream>
#include<cmath>
#include<ctime>
#include <stdio.h>
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glut.h>

GLfloat position1 = 0;
GLfloat position2 = 0;
GLfloat position3 = 0;
GLfloat position4 = 0;

void cars()
{
    //1
    glPushMatrix();
    glTranslated(position1,0, 0);
    glBegin(GL_QUADS);
    //Body
    glColor3ub(180, 0, 0);
    glVertex2i(60, 30);
    glVertex2i(60, 40);
    glVertex2i(120, 40);
    glVertex2i(120, 30);

    glVertex2i(70, 40);
    glVertex2i(70, 45);
    glVertex2i(115, 45);
    glVertex2i(115, 40);

    glVertex2i(75, 45);
    glVertex2i(75, 50);
    glVertex2i(115, 50);
    glVertex2i(115, 45);

    glVertex2i(80, 50);
    glVertex2i(80, 55);
    glVertex2i(110, 55);
    glVertex2i(110, 50);

    //Wheels
    glColor3ub(128, 128, 128);
    glVertex2i(71, 26);
    glVertex2i(71, 34);
    glVertex2i(79, 34);
    glVertex2i(79, 26);

    glVertex2i(101, 26);
    glVertex2i(101, 34);
    glVertex2i(109, 34);
    glVertex2i(109, 26);

    //Glass
    glColor3ub(220, 220, 220);
    glVertex2i(95, 40);
    glVertex2i(95, 50);
    glVertex2i(105, 50);
    glVertex2i(105, 40);

    glVertex2i(95, 40);
    glVertex2i(95, 45);
    glVertex2i(110, 45);
    glVertex2i(110, 40);

    glVertex2i(75, 40);
    glVertex2i(75, 45);
    glVertex2i(90, 45);
    glVertex2i(90, 40);

    glVertex2i(80, 45);
    glVertex2i(80, 50);
    glVertex2i(90, 50);
    glVertex2i(90, 45);

    //light
    glColor3ub(255, 255, 100);
    glVertex2i(60, 36);
    glVertex2i(60, 40);
    glVertex2i(64, 40);
    glVertex2i(64, 36);

    glEnd();
    glPopMatrix();

    //2
    glPushMatrix();
    glTranslated(position2,0, 0);
    glBegin(GL_QUADS);
    //Body
    glColor3ub(0, 80, 0);
    glVertex2i(560, 30);
    glVertex2i(560, 40);
    glVertex2i(620, 40);
    glVertex2i(620, 30);

    glVertex2i(570, 40);
    glVertex2i(570, 45);
    glVertex2i(615, 45);
    glVertex2i(615, 40);

    glVertex2i(575, 45);
    glVertex2i(575, 50);
    glVertex2i(615, 50);
    glVertex2i(615, 45);

    glVertex2i(580, 50);
    glVertex2i(580, 55);
    glVertex2i(610, 55);
    glVertex2i(610, 50);

    //Wheels
    glColor3ub(128, 128, 128);
    glVertex2i(571, 26);
    glVertex2i(571, 34);
    glVertex2i(579, 34);
    glVertex2i(579, 26);

    glVertex2i(601, 26);
    glVertex2i(601, 34);
    glVertex2i(609, 34);
    glVertex2i(609, 26);

    //Glass
    glColor3ub(220, 220, 220);
    glVertex2i(595, 40);
    glVertex2i(595, 50);
    glVertex2i(605, 50);
    glVertex2i(605, 40);

    glVertex2i(595, 40);
    glVertex2i(595, 45);
    glVertex2i(610, 45);
    glVertex2i(610, 40);

    glVertex2i(575, 40);
    glVertex2i(575, 45);
    glVertex2i(590, 45);
    glVertex2i(590, 40);

    glVertex2i(580, 45);
    glVertex2i(580, 50);
    glVertex2i(590, 50);
    glVertex2i(590, 45);

    //light
    glColor3ub(255, 255, 100);
    glVertex2i(560, 36);
    glVertex2i(560, 40);
    glVertex2i(564, 40);
    glVertex2i(564, 36);

    glEnd();
    glPopMatrix();
    //3
    glPushMatrix();
    glTranslated(position3,0, 0);
    glBegin(GL_QUADS);
    //Body
    glColor3ub(0, 0, 180);
    glVertex2i(360, 90);
    glVertex2i(360, 100);
    glVertex2i(420, 100);
    glVertex2i(420, 90);

    glVertex2i(370, 100);
    glVertex2i(370, 105);
    glVertex2i(415, 105);
    glVertex2i(415, 100);

    glVertex2i(375, 105);
    glVertex2i(375, 110);
    glVertex2i(415, 110);
    glVertex2i(415, 105);

    glVertex2i(380, 110);
    glVertex2i(380, 115);
    glVertex2i(410, 115);
    glVertex2i(410, 110);

    //Wheels
    glColor3ub(128, 128, 128);
    glVertex2i(371, 86);
    glVertex2i(371, 94);
    glVertex2i(379, 94);
    glVertex2i(379, 86);

    glVertex2i(401, 86);
    glVertex2i(401, 94);
    glVertex2i(409, 94);
    glVertex2i(409, 86);

    //Glass
    glColor3ub(220, 220, 220);
    glVertex2i(395, 100);
    glVertex2i(395, 110);
    glVertex2i(405, 110);
    glVertex2i(405, 100);

    glVertex2i(395, 100);
    glVertex2i(395, 105);
    glVertex2i(410, 105);
    glVertex2i(410, 100);

    glVertex2i(375, 100);
    glVertex2i(375, 105);
    glVertex2i(390, 105);
    glVertex2i(390, 100);

    glVertex2i(380, 105);
    glVertex2i(380, 110);
    glVertex2i(390, 110);
    glVertex2i(390, 105);

    //light
    glColor3ub(255, 255, 100);
    glVertex2i(360, 96);
    glVertex2i(360, 100);
    glVertex2i(364, 100);
    glVertex2i(364, 96);

    glEnd();
    glPopMatrix();

    //4
    glPushMatrix();
    glTranslated(position4,0, 0);
    glBegin(GL_QUADS);
    //Body
    glColor3ub(80, 80, 0);
    glVertex2i(160, 90);
    glVertex2i(160, 100);
    glVertex2i(220, 100);
    glVertex2i(220, 90);

    glVertex2i(170, 100);
    glVertex2i(170, 105);
    glVertex2i(215, 105);
    glVertex2i(215, 100);

    glVertex2i(175, 105);
    glVertex2i(175, 110);
    glVertex2i(215, 110);
    glVertex2i(215, 105);

    glVertex2i(180, 110);
    glVertex2i(180, 115);
    glVertex2i(210, 115);
    glVertex2i(210, 110);

    //Wheels
    glColor3ub(128, 128, 128);
    glVertex2i(171, 86);
    glVertex2i(171, 94);
    glVertex2i(179, 94);
    glVertex2i(179, 86);

    glVertex2i(201, 86);
    glVertex2i(201, 94);
    glVertex2i(209, 94);
    glVertex2i(209, 86);

    //Glass
    glColor3ub(220, 220, 220);
    glVertex2i(195, 100);
    glVertex2i(195, 110);
    glVertex2i(205, 110);
    glVertex2i(205, 100);

    glVertex2i(195, 100);
    glVertex2i(195, 105);
    glVertex2i(210, 105);
    glVertex2i(210, 100);

    glVertex2i(175, 100);
    glVertex2i(175, 105);
    glVertex2i(190, 105);
    glVertex2i(190, 100);

    glVertex2i(180, 105);
    glVertex2i(180, 110);
    glVertex2i(190, 110);
    glVertex2i(190, 105);

    //light
    glColor3ub(255, 255, 100);
    glVertex2i(160, 96);
    glVertex2i(160, 100);
    glVertex2i(164, 100);
    glVertex2i(164, 96);

    glEnd();
    glPopMatrix();

}
