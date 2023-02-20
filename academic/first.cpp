#include<GL/glut.h>

void mydisplay(){
	glClearColor(117.0/255,250.0/255,97.0/255,1);
	glColor3f(1,1,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
		glVertex2f(-0.5,-0.5);
		glVertex2f(-0.5,0.5);
		glVertex2f(0.5,0.5);
		glVertex2f(0.5,-0.5);
	glEnd();
	glFlush();
}

int main(int argc, char* argv[]){
	glutInit(&argc,argv);
	glutCreateWindow("simple");
	glutDisplayFunc(mydisplay);
	glutMainLoop();
}
