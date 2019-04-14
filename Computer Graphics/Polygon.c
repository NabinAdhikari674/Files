#include<GL/glut.h>
#include<GL/gl.h>
void Display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	//glColor3f(0.4,0.5,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(-0.5,-0.5);
	glVertex2f(-0.5,0.5);
	glVertex2f(0.0,0.8);
	glVertex2f(0.5,0.5);
	glVertex2f(0.5,-0.5);
	glVertex2f(0.0,-0.8);
	
	//glVertex2f(-0.3,0.8);
	//glVertex2f(0.3,0.8);
	glEnd();
	glFlush();
}

int main(int argc,char** argv)
{
	//glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(500,500);
	glutCreateWindow("Simple");
	glutInitWindowPosition(0,0);
	//init();
	glutDisplayFunc(Display);
	glutMainLoop();
}
