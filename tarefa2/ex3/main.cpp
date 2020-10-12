
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>

void desenha(void){
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(8);
    glBegin(GL_TRIANGLES);
        glColor3f(1, 0, 0);
        glVertex2d(50,80);
        glColor3f(0,0 , 1);
        glVertex2d(100,80);
        glColor3f(0, 1, 0);
        glVertex2d(75,140);
     glEnd();
     glFlush();

    glBegin(GL_QUAD_STRIP);
        glColor3f (0.0, 1.0, 0.5);
        glVertex2d(65,0);
        glVertex2d(65,40);
        glColor3f (0.0, 1, 0.2);
        glVertex2d(85,0);
        glVertex2d(85,40);
     glEnd();
     glFlush();

    glLineWidth(3);
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_QUADS);
        glColor3f(1, 0, 0);
        glVertex2d(50,0);
        glVertex2d(50,80);
        glVertex2d(100,80);
        glVertex2d(100,0);
     glEnd();
     glFlush();

     glPointSize(15);
     glBegin(GL_POINTS);
        glColor3f(0, 0, 1);
        glVertex2f(57,50);
        glVertex2f(93,50);
        glColor3f(0, 0, 0);
        glVertex2f(80,20);
     glEnd();
     glFlush();
}

void tecla(unsigned char key, int x, int y){
    if (key == 'q')
        exit(0);
}

void inicializa(void){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,200,0,200);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(800,500);
    glutInitWindowPosition(200,10);
    glutCreateWindow("Tarefa2, ex3 - Júlia");
    glutDisplayFunc(desenha);
    inicializa();
    glutKeyboardFunc(tecla);
    glutMainLoop();
    return 0;
}



