#include <iostream>
#include <gl/glut.h>

// Função callback chamada para fazer o desenho

void Desenha(void) {
	//Limpa a janela de visualização com a cor branca
	glClearColor(1, 1, 1, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	//Define a cor de desenho: vermelho
	glColor3f(1, 0, 0);
	//Desenha um triângulo no centro da janela
	glBegin(GL_LINES);
		glVertex2i(0, 0);
		glVertex2i(4, 4);
	glEnd();
	//Executa os comandos OpenGL
	glFlush();
}

//Função callback chamada para gerenciar eventos de teclas
void Teclado(unsigned char key, int x, int y) {
	if (key == 27)
	{
		exit(0);
	}
		
}
// Inicializa parâmetros e variáveis
void Inicializa(void) {
	// Define a janela de visualização 2D
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-1.0, 5.0, -1.0, 5.0);
	glMatrixMode(GL_MODELVIEW);
}

// Programa Principal
int main(int argc, char** argv) 
{
	glutInit(&argc, argv);								// Inicializa o GLUT
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);		// Configura o modo de display
	glutInitWindowSize(400, 400);						// Configura a largura e altura da janela de exibição
	glutCreateWindow("Segundo Programa");				// Cria a janela, passando o titulo dela
	glutDisplayFunc(Desenha);							// Estabelece a função desenha como função de callback de exibição
	glutKeyboardFunc(Teclado);
	Inicializa();
	glutMainLoop();
	return 0;
}