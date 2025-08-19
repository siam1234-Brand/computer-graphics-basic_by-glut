#include <windows.h>
#include <GL/glut.h>
void display() {
glClearColor(0.5f, 0.5f, 0.5f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glLineWidth(2);
glBegin(GL_LINES);
glColor3f(0.0f, 1.0f, 0.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(1.0f, 0.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(-1.0f, 0.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(0.0f, 1.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(0.0f, -1.0f);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(0.4f,0.2f);
glVertex2f(0.6f,0.2f);
glVertex2f(0.7f,0.4f);
glVertex2f(0.6f,0.6f);
glVertex2f(0.4f,0.6f);
glVertex2f(0.3f,0.4f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(1.0,0.0,0.0);
glVertex2f(-0.9f,0.3f);
glVertex2f(-0.5,0.3f);
glVertex2f(-0.7f,0.6f);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.0,1.0,0.0);
glVertex2f(-0.8f,-0.8f);
glVertex2f(-0.5f,-0.8f);
glVertex2f(-0.5f,-0.5f);
glVertex2f(-0.8f,-0.5f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.9,0.6,0.025);
glVertex2f(0.5f,-0.8f);
glVertex2f(0.7f,-0.8f);
glVertex2f(0.6f,-0.4f);
glEnd();
glFlush();
}
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitWindowSize(400, 400);
glutInitWindowPosition(80, 50);
glutCreateWindow("lab Task 1");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
