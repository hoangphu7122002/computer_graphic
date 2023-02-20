#include <GL/glut.h>

void draw(){
	glBegin(GL_POLYGON);
		glVertex2f(-2.0, 0.0);
		glVertex2f(-2.0, 2.0);
		glVertex2f(0.0, 2.0);
		glVertex2f(0.0, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f( 0.0, -4.0);
		glVertex2f( 2.0, 0.0);
		glVertex2f( 4.0, -4.0);
	glEnd();

	glFlush();
}

void mydisplay(){
	glClear(GL_COLOR_BUFFER_BIT);
	glViewport(320,240,240,240);
	draw();
	glViewport(0,240,240,240);
	draw();
	glViewport(320,0,240,240);
	draw();
	glViewport(0,0,240,240);
	draw();
}

void init(){
	glClearColor(0,0,0,1);
	glColor3f(1,1,1);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-2,4,-4,2,-1,1);
}

int main(int argc, char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640,480);
	glutInitWindowPosition(0,0);
	glutCreateWindow("simple");
	glutDisplayFunc(mydisplay);

	init();

	glutMainLoop();
}

