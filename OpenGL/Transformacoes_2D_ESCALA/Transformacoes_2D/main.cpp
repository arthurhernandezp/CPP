#include "Windows.h"
#include <iostream>
#include "GL/glut.h"

void init(void);
void display(void);
void desenhaCasa(void);


int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(200, 0);
	glutInitWindowSize(400, 300);
	glutCreateWindow("Escala com ponto fixo");

	init();
	glutDisplayFunc(display);

	glutMainLoop();

	return 0;
}

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);		// Define a cor de fundo

	glMatrixMode(GL_PROJECTION);			// Carrega a matriz de projeção
	gluOrtho2D(0, 200, 0, 150);				// Define projeção ortogonal 2D que mapeia objetos da coordenada do mundo para coordenadas da tela

}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f, 0.0f, 0.0f);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();				//Só será feita está transformação uma vez 

	glTranslatef(100, 50, 0);
	glScalef(2.0, 2.0, 1.0);
	glTranslatef(-100, -50, 0);
	
	desenhaCasa();

	glFlush();
}

void desenhaCasa(void)
{
	glBegin(GL_POLYGON);
		glVertex2f(110, 50);
		glVertex2f(110, 70);
		glVertex2f(100, 80);
		glVertex2f(90, 70);
		glVertex2f(90, 50);
	glEnd();

}
