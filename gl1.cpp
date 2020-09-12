#include<iostream>
#include<GL/glut.h>

void disp(void){
    glClearColor(1, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 50);
    glutInitWindowSize(200, 100);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);

    glutCreateWindow("window name");
    glutDisplayFunc(disp);
    glutMainLoop();
    return 0;
}
