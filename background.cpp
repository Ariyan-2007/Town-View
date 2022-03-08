#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

extern double sizeX;
extern double sizeY;

double Red1 = 220;
double Green1 = 250;
double Blue1 = 250;

double Red2 = 200;
double Green2 = 250;
double Blue2 = 250;

double Red3 = 160;
double Green3 = 250;
double Blue3 = 250;

double Red4 = 120;
double Green4 = 250;
double Blue4 = 250;
//Primary Background
void bg()
{
    //colour code variables
    int X1,X2,Y1,Y2;
    //increment variables
    int i,j;

    //Road
    glBegin(GL_QUADS);
    glColor3ub(25, 25, 25);
    glVertex2i(0, 0);
    glVertex2i(0, 460);
    glVertex2i(755, 460);
    glVertex2i(755, 0);
    glEnd();

    //Road Border
    glBegin(GL_QUADS);
    X1 = 0; X2 = 5; Y1 = 140; Y2 = 145;
    glColor3ub(169, 169, 169);
    for(i=0;i<2;i++)
    {
        for(j=0;j<150;j++)
        {
            glVertex2i(X1, Y1);
            glVertex2i(X1, Y2);
            glVertex2i(X2, Y2);
            glVertex2i(X2, Y1);
            X1 += 10; X2 += 10;
        }
        X1 = 5; X2 = 10; Y1 += 5; Y2 += 5;
    }
    glEnd();

    //Yellow Line On Road
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 0);
    X1 = 120; X2 = X1+90; Y1 = 70; Y2 = 75;
    for(i=0; i<3; i++)
    {
        glVertex2i(X1, Y1);
        glVertex2i(X1, Y2);
        glVertex2i(X2, Y2);
        glVertex2i(X2, Y1);

        X1 += 200; X2 = X1+90;
    }


    //Grass
    glBegin(GL_QUADS);
    glColor3ub(0, 90, 0);
    glVertex2i(0, 150);
    glVertex2i(0, 160);
    glVertex2i(755, 160);
    glVertex2i(755, 150);
    glEnd();

    //Sky_Layers
    //1
    glBegin(GL_QUADS);
    glColor3ub(Red1,Green1,Blue1);
    glVertex2i(0, 160);
    glVertex2i(0, 460);
    glVertex2i(755, 460);
    glVertex2i(755, 160);
    //2
    glColor3ub(Red2,Green2,Blue2);
    glVertex2i(0, 280);
    glVertex2i(0, 460);
    glVertex2i(755, 460);
    glVertex2i(755, 280);
    //3
    glColor3ub(Red3,Green3,Blue3);
    glVertex2i(0, 360);
    glVertex2i(0, 460);
    glVertex2i(755, 460);
    glVertex2i(755, 360);
    //4
    glColor3ub(Red4,Green4,Blue4);
    glVertex2i(0, 420);
    glVertex2i(0, 460);
    glVertex2i(755, 460);
    glVertex2i(755, 420);
    glEnd();
}

//Trees
void tree()
{
    //Bush
    //1
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2i(50, 160);
    glVertex2i(50, 175);
    glVertex2i(80, 175);
    glVertex2i(80, 160);

    glVertex2i(47, 164);
    glVertex2i(47, 169);
    glVertex2i(83, 169);
    glVertex2i(83, 164);

    glVertex2i(57, 175);
    glVertex2i(57, 180);
    glVertex2i(76, 180);
    glVertex2i(76, 175);

    glColor3ub(0, 160, 0);
    glVertex2i(57, 164);
    glVertex2i(57, 175);
    glVertex2i(67, 175);
    glVertex2i(67, 164);

    glVertex2i(54, 168);
    glVertex2i(54, 172);
    glVertex2i(70, 172);
    glVertex2i(70, 168);
    glEnd();

    //2
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2i(250, 160);
    glVertex2i(250, 175);
    glVertex2i(280, 175);
    glVertex2i(280, 160);

    glVertex2i(247, 164);
    glVertex2i(247, 169);
    glVertex2i(283, 169);
    glVertex2i(283, 164);

    glVertex2i(257, 175);
    glVertex2i(257, 180);
    glVertex2i(276, 180);
    glVertex2i(276, 175);

    glColor3ub(0, 160, 0);
    glVertex2i(257, 164);
    glVertex2i(257, 175);
    glVertex2i(267, 175);
    glVertex2i(267, 164);

    glVertex2i(254, 168);
    glVertex2i(254, 172);
    glVertex2i(270, 172);
    glVertex2i(270, 168);
    glEnd();

    //3
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2i(650, 160);
    glVertex2i(650, 175);
    glVertex2i(680, 175);
    glVertex2i(680, 160);

    glVertex2i(647, 164);
    glVertex2i(647, 169);
    glVertex2i(683, 169);
    glVertex2i(683, 164);

    glVertex2i(657, 175);
    glVertex2i(657, 180);
    glVertex2i(676, 180);
    glVertex2i(676, 175);

    glColor3ub(0, 160, 0);
    glVertex2i(657, 164);
    glVertex2i(657, 175);
    glVertex2i(667, 175);
    glVertex2i(667, 164);

    glVertex2i(654, 168);
    glVertex2i(654, 172);
    glVertex2i(670, 172);
    glVertex2i(670, 168);
    glEnd();

    //Big Bush
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2i(450, 160);
    glVertex2i(450, 175);
    glVertex2i(500, 175);
    glVertex2i(500, 160);

    glVertex2i(447, 164);
    glVertex2i(447, 169);
    glVertex2i(503, 169);
    glVertex2i(503, 164);

    glVertex2i(453, 175);
    glVertex2i(453, 180);
    glVertex2i(496, 180);
    glVertex2i(496, 175);

    glVertex2i(460, 180);
    glVertex2i(460, 184);
    glVertex2i(487, 184);
    glVertex2i(487, 180);

    glColor3ub(0, 160, 0);
    glVertex2i(457, 164);
    glVertex2i(457, 175);
    glVertex2i(467, 175);
    glVertex2i(467, 164);

    glVertex2i(454, 168);
    glVertex2i(454, 172);
    glVertex2i(470, 172);
    glVertex2i(470, 168);

    glVertex2i(472, 168);
    glVertex2i(472, 178);
    glVertex2i(475, 178);
    glVertex2i(475, 168);

    glVertex2i(475, 174);
    glVertex2i(475, 178);
    glVertex2i(479, 178);
    glVertex2i(479, 174);
    glEnd();

    //Tree
    //1
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2i(120, 160);
    glVertex2i(120, 200);
    glVertex2i(128, 200);
    glVertex2i(128, 160);

    glVertex2i(110, 183);
    glVertex2i(110, 188);
    glVertex2i(138, 188);
    glVertex2i(138, 183);

    glVertex2i(110, 183);
    glVertex2i(110, 200);
    glVertex2i(113, 200);
    glVertex2i(113, 183);

    glVertex2i(135, 183);
    glVertex2i(135, 200);
    glVertex2i(138, 200);
    glVertex2i(138, 183);

    glColor3ub(0, 100, 0);
    glVertex2i(105, 195);
    glVertex2i(105, 214);
    glVertex2i(143, 214);
    glVertex2i(143, 195);

    glVertex2i(127, 192);
    glVertex2i(126, 195);
    glVertex2i(140, 195);
    glVertex2i(140, 192);

    glVertex2i(102, 198);
    glVertex2i(102, 203);
    glVertex2i(146, 203);
    glVertex2i(146, 198);

    glVertex2i(108, 214);
    glVertex2i(108, 219);
    glVertex2i(140, 219);
    glVertex2i(140, 214);

    glVertex2i(112, 219);
    glVertex2i(112, 223);
    glVertex2i(136, 223);
    glVertex2i(136, 219);

    glVertex2i(102, 205);
    glVertex2i(102, 209);
    glVertex2i(146, 209);
    glVertex2i(146, 205);

    glColor3ub(0, 160, 0);
    glVertex2i(115, 205);
    glVertex2i(115, 213);
    glVertex2i(119, 213);
    glVertex2i(119, 205);

    glVertex2i(115, 210);
    glVertex2i(115, 213);
    glVertex2i(125, 213);
    glVertex2i(125, 210);

    glEnd();

    //2
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2i(620, 160);
    glVertex2i(620, 200);
    glVertex2i(628, 200);
    glVertex2i(628, 160);

    glVertex2i(610, 183);
    glVertex2i(610, 188);
    glVertex2i(638, 188);
    glVertex2i(638, 183);

    glVertex2i(610, 183);
    glVertex2i(610, 200);
    glVertex2i(613, 200);
    glVertex2i(613, 183);

    glVertex2i(635, 183);
    glVertex2i(635, 200);
    glVertex2i(638, 200);
    glVertex2i(638, 183);

    glColor3ub(0, 100, 0);
    glVertex2i(605, 195);
    glVertex2i(605, 214);
    glVertex2i(643, 214);
    glVertex2i(643, 195);

    glVertex2i(627, 192);
    glVertex2i(626, 195);
    glVertex2i(640, 195);
    glVertex2i(640, 192);

    glVertex2i(602, 198);
    glVertex2i(602, 203);
    glVertex2i(646, 203);
    glVertex2i(646, 198);

    glVertex2i(608, 214);
    glVertex2i(608, 219);
    glVertex2i(640, 219);
    glVertex2i(640, 214);

    glVertex2i(612, 219);
    glVertex2i(612, 223);
    glVertex2i(636, 223);
    glVertex2i(636, 219);

    glVertex2i(602, 205);
    glVertex2i(602, 209);
    glVertex2i(646, 209);
    glVertex2i(646, 205);

    glColor3ub(0, 160, 0);
    glVertex2i(615, 205);
    glVertex2i(615, 213);
    glVertex2i(619, 213);
    glVertex2i(619, 205);

    glVertex2i(615, 210);
    glVertex2i(615, 213);
    glVertex2i(625, 213);
    glVertex2i(625, 210);

    glEnd();

}

void toggle(int value)
{
    if(value == 0)
    {
        Red1 = 220;
        Green1 = 250;
        Blue1 = 250;

        Red2 = 200;
        Green2 = 250;
        Blue2 = 250;

        Red3 = 160;
        Green3 = 250;
        Blue3 = 250;

        Red4 = 120;
        Green4 = 250;
        Blue4 = 250;

        sizeX = 1;
        sizeY = 1;
    }
    else if(value == 1)
    {
        Red1 = 133;
        Green1 = 152;
        Blue1 = 171;

        Red2 = 126;
        Green2 = 144;
        Blue2 = 162;

        Red3 = 119;
        Green3 = 136;
        Blue3 = 153;

        Red4 = 112;
        Green4 = 128;
        Blue4 = 144;

        sizeX = 1;
        sizeY = 1;
    }

    else if(value == 2)
    {
        Red1 = 25;
        Green1 = 25;
        Blue1 = 25;

        Red2 = 25;
        Green2 = 25;
        Blue2 = 25;

        Red3 = 25;
        Green3 = 25;
        Blue3 = 25;

        Red4 = 25;
        Green4 = 25;
        Blue4 = 25;

        sizeX = 0;
        sizeY = 0;
    }
}
