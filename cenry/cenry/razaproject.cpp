#include<iostream>
#include<fstream>
#include<string>
#include<glut.h>
#include<windows.h>


using namespace std;

void semicircle(double radius,double xc, double yc) {
    double angle = 2*3.1415/200;
    glBegin(GL_POLYGON);
    for(int i=0 ; i<=100 ; i++) {
        double x = radius * cos (i * angle) + xc;
        double y = radius * sin (i * angle) + yc;
        glVertex2f(x,y);

    }
    glEnd();

}


void display() {

	glClearColor(0.0f,0.0f,0.0f,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	
	gluOrtho2D(-320, 320, -240, 240);
	
	/*
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
		glVertex2f (-160.0f, -40.0f);
		glVertex2f (-160.0f, 40.0f);
		glVertex2f (-150.0f, 40.0f);
		glVertex2f (-150.0f, 50.0f);
		glVertex2f (-100.0f, 50.0f);
		glVertex2f (-100.0f, 40.0f);
		glVertex2f (-100.0f, 40.0f);
		glVertex2f (-55.0f, 40.0f);
		glVertex2f (-55.0f, 50.0f);
		glVertex2f (-50.0f, 50.0f);
		glVertex2f (-50.0f, 40.0f);
		glVertex2f (50.0f, 40.0f);
		glVertex2f (50.0f, 50.0f);
		glVertex2f (55.0f, 50.0f);
		glVertex2f (55.0f, 40.0f);
		glVertex2f (100.0f, 40.0f);
		glVertex2f (100.0f, 50.0f);
		glVertex2f (150.0f, 50.0f);
		glVertex2f (150.0f, 40.0f);
		glVertex2f (160.0f, 40.0f);
		glVertex2f (160.0f, -40.0f);
		glVertex2f (-160.0f, -40.0f);
	glEnd();
	semicircle(45, 0, 45);
	*/
	
	glColor3f(1,1,1);
	
	glBegin(GL_POLYGON);
		glVertex2f (-160.0f, -40.0f);
		glVertex2f (160.0f, -40.0f);
		glVertex2f (160.0f, 40.0f);
		glVertex2f (-160.0f, 40.0f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f (-150.0f, 40.0f);
		glVertex2f (-150.0f, 45.0f);
		glVertex2f (-100.0f, 45.0f);
		glVertex2f (-100.0f, 40.0f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f (150.0f, 40.0f);
		glVertex2f (150.0f, 45.0f);
		glVertex2f (100.0f, 45.0f);
		glVertex2f (100.0f, 40.0f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f (-55.0f, 40.0f);
		glVertex2f (-55.0f, 45.0f);
		glVertex2f (-50.0f, 45.0f);
		glVertex2f (-50.0f, 40.0f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f (55.0f, 40.0f);
		glVertex2f (55.0f, 45.0f);
		glVertex2f (50.0f, 45.0f);
		glVertex2f (50.0f, 40.0f);
	glEnd();

	semicircle(47, 0, 42);

	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
		glVertex2f (-50.0f, 35.0f);
		glVertex2f (-40.0f, 35.0f);
		glVertex2f (-40.0f, -35.0f);
		glVertex2f (-50.0f, -35.0f);
		glVertex2f (-50.0f, 35.0f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f (-30.0f, 35.0f);
		glVertex2f (-20.0f, 35.0f);
		glVertex2f (-20.0f, -35.0f);
		glVertex2f (-30.0f, -35.0f);
		glVertex2f (-30.0f, 35.0f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f (-10.0f, 35.0f);
		glVertex2f (0.0f, 35.0f);
		glVertex2f (0.0f, -35.0f);
		glVertex2f (-10.0f, -35.0f);
		glVertex2f (-10.0f, 35.0f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f (10.0f, 35.0f);
		glVertex2f (20.0f, 35.0f);
		glVertex2f (20.0f, -35.0f);
		glVertex2f (10.0f, -35.0f);
		glVertex2f (10.0f, 35.0f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f (30.0f, 35.0f);
		glVertex2f (40.0f, 35.0f);
		glVertex2f (40.0f, -35.0f);
		glVertex2f (30.0f, -35.0f);
		glVertex2f (30.0f, 35.0f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f (50.0f, 35.0f);
		glVertex2f (60.0f, 35.0f);
		glVertex2f (60.0f, -35.0f);
		glVertex2f (50.0f, -35.0f);
		glVertex2f (50.0f, 35.0f);
	glEnd();

	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
		glVertex2f (-50.0f, -45.0f);
		glVertex2f (-50.0f, -47.5f);
		glVertex2f (50.0f, -47.5f);
		glVertex2f (50.0f, -45.0f);
		glVertex2f (-50.0f, -45.0f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f (-55.0f, -50.0f);
		glVertex2f (-55.0f, -52.5f);
		glVertex2f (55.0f, -52.5f);
		glVertex2f (55.0f, -50.0f);
		glVertex2f (-55.0f, -50.0f);
	glEnd();

	/*
	glBegin(GL_POLYGON);
		glVertex2f (-160.0f, -60.0f);
		glVertex2f (-160.0f, 60.0f);
		glVertex2f (160.0f, 60.0f);
		glVertex2f (160.0f, -60.0f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f (-150.0f, 60.0f);
		glVertex2f (-150.0f, 70.0f);
		glVertex2f (-100.0f, 70.0f);
		glVertex2f (-100.0f, 60.0f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f (150.0f, 60.0f);
		glVertex2f (150.0f, 70.0f);
		glVertex2f (100.0f, 70.0f);
		glVertex2f (100.0f, 60.0f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f (-50.0f, 60.0f);
		glVertex2f (50.0f, 60.0f);
		glVertex2f (50.0f, 50.0f);
		glVertex2f (-50.0f, 50.0f);
	glEnd();

	glColor3f(1, 1, 1);

	glBegin(GL_POLYGON);
		glVertex2f (-50.0f, 50.0f);
		glVertex2f (-35.0f, 50.0f);
		glVertex2f (-35.0f, -60.0f);
		glVertex2f (-50.0f, -60.0f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f (-25.0f, 50.0f);
		glVertex2f (-10.0f, 50.0f);
		glVertex2f (-10.0f, -60.0f);
		glVertex2f (-25.0f, -60.0f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f (10.0f, 50.0f);
		glVertex2f (25.0f, 50.0f);
		glVertex2f (25.0f, -60.0f);
		glVertex2f (10.0f, -60.0f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f (35.0f, 50.0f);
		glVertex2f (50.0f, 50.0f);
		glVertex2f (50.0f, -60.0f);
		glVertex2f (35.0f, -60.0f);
	glEnd();
	*/
	
	glFlush();
}

int screenwidth=640; int screenheight=480;

	void createGLPoint(){
		
	}

int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

	glutInitWindowSize(screenwidth,screenheight);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Scenery");

	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}