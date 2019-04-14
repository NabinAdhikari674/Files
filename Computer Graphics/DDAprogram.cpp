#include<stdio.h>
#include<GL/gl.h>
#include<GL/glut.h>
int GetCoordinates(int a,int b)
{
	int x1,y1,x2,y2,dx,dy,xinc,yinc,x,y,step,m;
	printf("Enter the coordinates of the end points of the line : ");
	printf("\n\tStarting Points  : ");
	scanf("%d %d",&x1,&y1);
	printf("\n\tEnding Points    :  ");
	scanf("%d %d",&x2,&y2);
	printf("The points are : (%d,%d) and (%d,%d)",x1,y1,x2,y2);
	dx=x2-x1; dy=y2-y1;
	m=dx/dy;
	if(dx>dy)
	{step=dx;}
	else {step=dy;}
	xinc=dx/step; yinc=dy/step;
	x=x1; y=y1;
	
}
void Display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	gl
	glColor3f(0.4,0.5,0.6);
	glBegin(GL_LINE);
	glVertex2f(-0.5,-0.5);
	glEnd();
	glFlush();
}

int main(int argc,char** argv)
{
	int a,b;
	GetCoordinates(a,b);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(500,500);
	glutCreateWindow("Drawing Window");
	glutInitWindowPosition(0,0);
	glutDisplayFunc(Display);
	glutMainLoop();
}
