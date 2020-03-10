#include "GL/gl.h"
#include "GL/glut.h"

void display() {
        
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_DEPTH);
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    glBegin(GL_QUADS);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f( 0.5,  0.5);
        glVertex2f(-0.5,  0.5);
        glVertex2f(-0.5, -0.5);
        glVertex2f( 0.5, -0.5);

        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f( 0.25, -0.25);
        glVertex2f( 0.75, -0.25);
        glVertex2f( 0.75,  0.25);
        glVertex2f( 0.25,  0.25);

        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f( -0.75,  -0.25);
        glVertex2f( -0.25,  -0.25);
        glVertex2f( -0.25, 0.25);
        glVertex2f( -0.75, 0.25);

        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f( -0.25, 0.25);        
        glVertex2f(  0.25, 0.25);
        glVertex2f(  0.25, 0.75);
        glVertex2f( -0.25, 0.75);

        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f( -0.25, -0.75);
        glVertex2f(  0.25, -0.75);
        glVertex2f(  0.25, -0.25);        
        glVertex2f( -0.25, -0.25);
    glEnd();

    glutSwapBuffers();
}

int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE |  GLUT_RGBA);

    glutInitWindowPosition(50, 50);
    glutInitWindowSize(320, 320);
    glutCreateWindow("10-03-2020 | Quads Overlapping");

    glutDisplayFunc(display);

    glutMainLoop();
}

