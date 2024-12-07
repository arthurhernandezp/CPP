#include <iostream>
#include <gl/glut.h>

// Fun��o para alterar o tamanho da jane


// Fun��o callback chamada para fazer o desenho

void Desenha(void) {
	//Limpa a janela de visualiza��o com a cor branca
	glClearColor(1, 1, 1, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	//Define a cor de desenho: vermelho
	glColor3f(1, 0, 0);
	//Desenha um tri�ngulo no centro da janela
	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(-0.5, -0.5);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0, 0.5);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(0.5, -0.5);
	glEnd();
	//Executa os comandos OpenGL
	glFlush();
}

//Fun��o callback chamada para gerenciar eventos de teclas
void Teclado(unsigned char key, int x, int y) {
	if (key == 27)
	{
		glutReshapeWindow(1000,500);;
		//exit(0);
	}
		
}
// Inicializa par�metros e vari�veis
void Inicializa(void) {
	// Define a janela de visualiza��o 2D
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);
}

// Programa Principal
int main(int argc, char** argv) 
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Segundo Programa");
	glutDisplayFunc(Desenha);
	glutKeyboardFunc(Teclado);
	Inicializa();
	glutMainLoop();
	return 0;
}