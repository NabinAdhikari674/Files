#include<GL/glut.h>
#include<GL/gl.h>
//#include<stdio.h>
//#include<stdlib.h>
#include<time.h>
int move;
void delay(int number_of_seconds)
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
  
    // Stroing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not acheived 
    while (clock() < start_time + milli_seconds) 
        ; 
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	//glColor3f(0.4,0.5,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(-0.1,-0.1);
	glVertex2f(-0.1,0.1);
	glVertex2f(0.0,0.2);
	glVertex2f(0.1,0.1);
	glVertex2f(0.1,-0.1);
	glVertex2f(0.0,-0.2);
	glEnd();
	glFlush();
}

void Time(int a)
{
	if(move==1)
	{
		glTranslatef(0.1,0,0);
		move=0;
	}
	if(move==2)
	{
		glTranslatef(-0.1,0,0);
		move=0;
	}
	if(move==3)
	{
		glTranslatef(0,0.2,0.1);
		move=0;
	    //delay(2);
		//glTranslatef(0,-0.2,-0.1);
	}
	if(move==4)
	{
		glTranslatef(0,-0.2,-0.1);
		move=0;
	}
	glutPostRedisplay();
	glutTimerFunc(100,Time,0);
}
void Key(unsigned char k,int x,int y)
{
	if(k=='d'||k=='D')
	{
		move=1;
	}
	if(k=='a'||k=='A')
	{
		move=2;
	}
	if(k=='w'||k=='W')
	{
		move=3;
	}
	if(k=='s'||k=='S')
	{
		move=4;
	}
}
void Mouse(int button,int state,int x,int y)
{
	if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
	{
		move=2;
	}
	if(button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
	{
		move=1;
	}
}
int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(700,700);
	glutCreateWindow("Movable");
	glutInitWindowPosition(0,0);
	//init();
	glutDisplayFunc(display);
	glutTimerFunc(100,Time,0);//delay time=1
	glutKeyboardFunc(Key);    //Keyboard Input Function
	glutMouseFunc(Mouse);
	glutMainLoop();
}

