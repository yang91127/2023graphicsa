#include <stdio.h>
#include <GL/glut.h>
float teapotX=0, teapot Y=0;
void display(){
  glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
  glutSolidTeapot(0.3);
glutSwapBuffers();
}
void mouse(int button,int state, int x, int y);
{
   if(stage==GLUT_DOWN){
    teapotX=(x-150)/150.0;
    teapotY=(150-y)/150.0;
   }
   display();

}
int main(int argc,char**argv){
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_DPUBLE |GLUT_DEPTH);
 glutCreateWindow("week12");

 glutDisplayFunc(display);
 glutMouseFunc(mouse);

 glutMainLoop();
}
