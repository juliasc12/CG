#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <cmath>

void desenha(void){
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    //eixos
    glColor3f(0,0,1.0);
	glLineWidth(3);
	glBegin(GL_LINES);
    glVertex2f(100,0);
    glVertex2f(-100,0);
    glVertex2f(0,100);
    glVertex2f(0,-100);
	glEnd();
	glFlush();

    //grafico letra b
	int numPts=200;
	float x = -10;
	float incr=0.1;

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_STRIP);

    for(int i=1;i<=numPts;i++){
        float y=((3*pow(x,2))+(5*x)-6);
        glVertex2f(x,y);
        x+=incr;
		}
	glEnd();
	glFlush();

    glPointSize(10);
    glBegin(GL_POINTS);
    glColor3f(1, 0, 0);
    glVertex2f(0,-6);
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
    gluOrtho2D(-10,10,-10,10);

}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(800,500);
    glutInitWindowPosition(200,10);
    glutCreateWindow("Tarefa2, ex7b - Júlia");
    glutDisplayFunc(desenha);
    inicializa();
    glutKeyboardFunc(tecla);
    glutMainLoop();
    return 0;
}
