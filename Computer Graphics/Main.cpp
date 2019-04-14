#include<GL/glut.h>
#include<GL/gl.h>
int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(500,500);
	glutCreateWindow("Simple");
	glutInitWindowPosition(0,0);
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(key);
	glutMainLoop();
}

