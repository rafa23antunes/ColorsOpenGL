#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <math.h>

void orange() {
	glColor3f(1.0f, 0.52f, 0.2f);
}

void soft_orange() {
	glColor3f(1.0f, 0.58f, 0.3f); 
}

void brown() {
	glColor3f(0.7f, 0.28f, 0.0f);
}

void pink() {
	glColor3f(1.0f, 0.313f, 0.313f); 
}

void purple() {
	glColor3f(0.6f, 0.0f, 0.6f);
}

void red() {
	glColor3f(1.0f, 0.0f, 0.0f); 
}

void dark_red() {
	glColor3f(0.6f, 0.0f, 0.0f);
}

void green() {
	glColor3f(0.0f, 0.6f, 0.0f);
}

void fl_green() { //Fluorescent Green
	glColor3f(0.2f, 1.0f, 0.2f);
}

void dark_green() {
	glColor3f(0.0f, 0.4f, 0.0f);
}

void blue() {
	glColor3f(0.10f, 0.69f, 1.0f);
}

void soft_blue() {
	glColor3f(0.6f, 0.86f, 1.0f);
}

void dark_blue() {
	glColor3f(0.0f, 0.3f, 0.6f);
}

void black() {
	glColor3f(0.0f, 0.0f, 0.0f);
}

void white() {
	glColor3f(1.0f, 1.0f, 1.0f);
}

void gray() {
	glColor3f(0.5f, 0.5f, 0.5f);
}

void yellow() {
	glColor3f(1.0f, 1.0f, 0.0f);
}