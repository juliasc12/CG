#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void desenha(void){
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    //red, green, blue
    glLineWidth(1);
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_TRIANGLE_STRIP);
        glColor3f (0, 0, 1);
        glVertex3f(20,193,0);
        glVertex3f(20,20,0);
        glVertex3f(45,60,0);
        glVertex3f(20,193,0);
        glVertex3f(45,160,0);
        glVertex3f(150,193,0);
        glVertex3f(120,160,0);
        glVertex3f(150,20,0);
        glVertex3f(120,60,0);
        glVertex3f(20,20,0);
        glVertex3f(45,60,0);
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

}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(800,500);
    glutInitWindowPosition(200,10);
    glutCreateWindow("Tarefa2, ex6 - Júlia");
    glutDisplayFunc(desenha);
    inicializa();
    glutKeyboardFunc(tecla);
    glutMainLoop();
    return 0;
}
