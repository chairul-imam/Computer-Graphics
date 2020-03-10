#include "GL/gl.h"
#include "GL/glut.h"
#include "cmath"

void display() {
        
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_DEPTH);
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    glBegin(GL_POLYGON);
        glColor3f(0.5f, 0.5f, 0.5f);

        for(int i = 0; i < 9; ++i) {
            glVertex2f(
                0.5 * cos(2 * M_PI * i / 9) + 0.25,
                0.5 * sin(2 * M_PI * i / 9) + 0.25); 
        }
    glEnd();

    glBegin(GL_POLYGON);
        for(int i = 0; i < 8; ++i) {
            glVertex2f(
                0.4 * cos(2 * M_PI * i / 8) - 0.45,
                0.4 * sin(2 * M_PI * i / 8) - 0.45); 
            //  radius * sin (2 * pi * vertice number / N-sided) + center
        }
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(1.0f, 0.f, 1.0f);
        glVertex2f(0.3f, -0.3f);
        glVertex2f(0.3f, -0.5f);
        glVertex2f(0.6f, -0.5f);
        glVertex2f(0.6f, -0.3f);
    glEnd();

    glutSwapBuffers();
}

int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE |  GLUT_RGBA);

    glutInitWindowPosition(50, 50);
    glutInitWindowSize(320, 320);
    glutCreateWindow("10-03-2020 | Primitives Chairul");

    glutDisplayFunc(display);

    glutMainLoop();
}

