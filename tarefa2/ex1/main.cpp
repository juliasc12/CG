
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>

void desenha(){
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    int x=0;int y=100;int tam=3;

    for(int i=1; i<21;i++){
        glPointSize(i);
        glBegin(GL_POINTS);
        glColor3f(1, 0, 0);
        glVertex2f(x,y);
        x=x+i;
        glEnd();
        glFlush();
    }
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
    glutCreateWindow("Tarefa 2, ex1 - J�lia");
    glutDisplayFunc(desenha);
    inicializa();
    glutKeyboardFunc(tecla);
    glutMainLoop();
    return 0;
}

