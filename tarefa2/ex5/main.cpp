
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>

void desenha(void){
    glClearColor(1,1,1,0);
    glClear(GL_COLOR_BUFFER_BIT);
    //blue,green,red
    glLineWidth(8);
      glBegin(GL_QUAD_STRIP);
        glColor3f (0, 1, 0); //primeiro quadrante
        glVertex2d(120,140);
        glColor3f (0, 0, 1);
        glVertex2d(120,200);
        glColor3f (1, 0, 0);
        glVertex2d(160,140);
        glColor3f (0, 0.8, 0);
        glVertex2d(160,200);
     glEnd();
     glFlush();
     glBegin(GL_QUAD_STRIP);
        glColor3f (0, 1, 0); //segundo quadrante
        glVertex2d(100,140);
        glColor3f (0, 0, 1);
        glVertex2d(100,200);
        glColor3f (1, 0, 0);
        glVertex2d(60,140);
        glColor3f (0, 0.8, 0);
        glVertex2d(60,200);
     glEnd();
     glFlush();
     glBegin(GL_QUAD_STRIP);
        glColor3f (0, 0.8, 0); //terceiro quadrante
        glVertex2d(60,40);
        glColor3f (1, 0, 0);
        glVertex2d(60,100);
        glColor3f (0, 0, 1);
        glVertex2d(100,40);
        glColor3f (0, 1, 0);
        glVertex2d(100,100);
     glEnd();
     glFlush();
     glBegin(GL_QUAD_STRIP);
        glColor3f (0, 1, 0); //quarto quadrante
        glVertex2d(120,100);
        glColor3f (0, 0, 1);
        glVertex2d(120,40);
        glColor3f (1, 0, 0);
        glVertex2d(160,100);
        glColor3f (0, 0.4, 0);
        glVertex2d(160,40);
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
    glutCreateWindow("Tarefa 2, ex4 - Júlia");
    glutDisplayFunc(desenha);
    inicializa();
    glutKeyboardFunc(tecla);
    glutMainLoop();
    return 0;
}
