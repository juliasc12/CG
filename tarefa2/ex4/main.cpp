
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>

void desenha(void){
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(5);
    glBegin(GL_LINES);
        glColor3f(1, 1, 1); //eixo x e eixo y
        glVertex2f(100,0);
        glVertex2f(100,300);
        glVertex2f(0,100);
        glVertex2f(300,100);
        glColor3f(0, 1, 1); //letra J
        glVertex2f(10,170);
        glVertex2f(40,170);
        glVertex2f(10,130);
        glVertex2f(25,130);
        glVertex2f(25,130);
        glVertex2f(25,170);
        glColor3f(1, 1, 0); //letra U
        glVertex2f(50,170);
        glVertex2f(50,130);
        glVertex2f(70,170);
        glVertex2f(70,130);
        glVertex2f(50,130);
        glVertex2f(70,130);
        glVertex2f(60,170); //acento U
        glVertex2f(70,190);
        glColor3f(1, 0, 0); //Letra J
        glVertex2f(130,170);
        glVertex2f(130,130);
        glVertex2f(130,130);
        glVertex2f(150,130);
        glColor3f(0, 1, 0); //letra I
        glVertex2f(45,80);
        glVertex2f(45,30);
        glColor3f(0.2, 0.5, 1); //letra A
        glVertex2f(130,30);
        glVertex2f(150,80);
        glVertex2f(150,80);
        glVertex2f(170,30);
        glVertex2f(139,50);
        glVertex2f(162,50);
    glEnd();
    glFlush();

    glPointSize(5);
    glBegin(GL_POINTS);
        glColor3f(1.0, 0.0, 1.0);
        glVertex2f(45,85);

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
