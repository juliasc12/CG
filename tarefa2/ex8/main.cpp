#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <cmath>
int lados = 4;

void desenha(void){
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);
	float incr = 360/lados;
	float angulo = 0;
	int raio = 40;
	int centro[2] = {0,0};
	glColor3f(0,1,1);
	glBegin(GL_LINE_LOOP);

	for (int i=0;i<lados;i++){
        float radianos = 3.14 * angulo/180;
        float coordX = centro[0]+raio*cos(radianos);
        float coordY = centro[1]+raio*sin(radianos);
        glVertex2f(coordX,coordY);
        angulo+=incr;
        }
	glEnd();
	glFlush();
}

void tecla(unsigned char key, int x, int y){
    if(key=='j') lados=lados+1;
    if(key=='a') lados=lados-1;
    if (key == 'q') exit(0);
    desenha();
}

void inicializa(void){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-50,50,-50,50);

}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(800,500);
    glutInitWindowPosition(200,10);
    glutCreateWindow("Tarefa2, ex8 - Júlia");
    glutDisplayFunc(desenha);
    inicializa();
    glutKeyboardFunc(tecla);
    glutMainLoop();
    return 0;
}
