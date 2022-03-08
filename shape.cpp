#include <cstdio>
#include <cmath>
#include<GL/gl.h>
#include <GL/glut.h>


void drawCircle(double r, double x, double y, double red, double green, double blue)
    {
        double i = 0;

        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(red,green,blue);
        glVertex2i(x, y); // Center
        for(i = 0; i <= 361; i++)
                glVertex2i(r*cos(M_PI * i / 180.0) + x, r*sin(M_PI * i / 180.0) + y);

        glEnd();
    }
