#include <stdlib.h>
#include <GL/glut.h>

int w=400, h=400, z=-80;
int x1=0, y1=0, sudut=0, z1=0, skalaX=0, skalaY=0;

//pohon
    void pohon(void){
    //batang
    GLUquadricObj *pObj;
    pObj =gluNewQuadric();
    gluQuadricNormals(pObj, GLU_SMOOTH);

    glPushMatrix();
    glColor3ub(104,70,14);
    glRotatef(270,1,0,0);
    gluCylinder(pObj, 4, 0.7, 30, 25, 25);
    glPopMatrix();
    }

    //ranting
    void ranting(void){
    GLUquadricObj *pObj;
    pObj =gluNewQuadric();
    gluQuadricNormals(pObj, GLU_SMOOTH);
    glPushMatrix();
    glColor3ub(104,70,14);
    glTranslatef(0,27,0);
    glRotatef(330,1,0,0);
    gluCylinder(pObj, 0.6, 0.1, 15, 25, 25);
    glPopMatrix();

    //daun
    glPushMatrix();
    glColor3ub(18,118,13);
    glScaled(5, 5, 5);
    glTranslatef(0,7,3);
    glutSolidDodecahedron();
    glPopMatrix();
    }

void drawScene(){
    GLfloat LightPosition[] = {x1, y1, 2.0f, 0.0f};
    glLightfv(GL_LIGHT0, GL_POSITION, LightPosition);

    glEnable(GL_COLOR_MATERIAL);

    //gedungdepan
    glPushMatrix();
        glColor3f(2.1 , 2.1, 2.1);
        glTranslated(-7.5, 0, 0);
        glScaled(40, 10, 10);
        glutSolidCube(3.0);
    glPopMatrix();

    //atapdepankecil
    glPushMatrix ();
        glColor3f (1,1,1);
        glTranslatef (-7.5 , 5, 20);
        glRotatef (90, 0, 0, 1);
        glScaled(1 ,30 , 20);
        glutSolidCube(1.3);
    glPopMatrix ();


    //alasdepankecil
    glPushMatrix ();
        glColor3f (1.5,1.5,1);
        glTranslatef (-7.5 , -16, 20);
        glRotatef (90, 0, 0, 1);
        glScaled(1 ,30 , 13);
        glutSolidCube(1.3);
    glPopMatrix ();

    //gedungatas
    glPushMatrix();
        glColor3f(2.1 , 2.1, 2.1);
        glTranslated(-7.5,13.0,0);
        glScaled(10, 18, 10);
        glutSolidCube(3.0);
    glPopMatrix();

    //gedungkanan
    glPushMatrix();
        glColor3f(2.1 , 2.1, 2.1);
        glTranslated( 70, 0.0, -80.0 );
        glScaled(10, 10, 30);
        glutSolidCube(3.0);
    glPopMatrix();

    //gedungkiri
    glPushMatrix();
        glColor3f(2.1 , 2.1, 2.1);
        glTranslated( -80, 0.0, -80.0 );
        glScaled(10, 10, 30);
        glutSolidCube(3.0);
    glPopMatrix();

    //pintu depan
    glPushMatrix ();
        glColor3f (0.415, 0.537, 0.745);
        glTranslated(-7.5 , -7, 15);
        glScaled(20 ,20 , 1);
        glutSolidCube(1);
    glPopMatrix ();

    //jendela tengah
    glPushMatrix ();
        glColor3f (0.415, 0.537, 0.745);
        glTranslated(10 , -4, 15);
        glScaled(20 ,20 , 1);
        glutSolidCube(0.4);
    glPopMatrix ();

    glPushMatrix ();
        glColor3f (0.415, 0.537, 0.745);
        glTranslated(-24.5 , -4, 15);
        glScaled(20 ,20 , 1);
        glutSolidCube(0.4);
    glPopMatrix ();


    //jendela kanan
    glPushMatrix ();
        glColor3f (0.415, 0.537, 0.745);
        glTranslated(25.5 , -4, 15);
        glScaled(20 ,20 , 1);
        glutSolidCube(0.4);
    glPopMatrix ();

    glPushMatrix ();
        glColor3f (0.415, 0.537, 0.745);
        glTranslated(35.5 , -4, 15);
        glScaled(20 ,20 , 1);
        glutSolidCube(0.4);
    glPopMatrix ();

    glPushMatrix ();
        glColor3f (0.415, 0.537, 0.745);
        glTranslated(45.5 , -4, 15);
        glScaled(20 ,20 , 1);
        glutSolidCube(0.4);
    glPopMatrix ();

    //jendela kiri
    glPushMatrix ();
        glColor3f (0.415, 0.537, 0.745);
        glTranslated(-40.5 , -4, 15);
        glScaled(20 ,20 , 1);
        glutSolidCube(0.4);
    glPopMatrix ();

    glPushMatrix ();
        glColor3f (0.415, 0.537, 0.745);
        glTranslated(-50.5 , -4, 15);
        glScaled(20 ,20 , 1);
        glutSolidCube(0.4);
    glPopMatrix ();

    glPushMatrix ();
        glColor3f (0.415, 0.537, 0.745);
        glTranslated(-60.5 , -4, 15);
        glScaled(20 ,20 , 1);
        glutSolidCube(0.4);
    glPopMatrix ();


    //pintu belakang
    glPushMatrix ();
        glColor3f (0.415, 0.537, 0.745);
        glTranslated(-7.5 , -5, -15);
        glScaled(20 ,20 , 1);
        glutSolidCube(1);
    glPopMatrix ();

    //jendela tengah belakang
    glPushMatrix ();
        glColor3f (0.415, 0.537, 0.745);
        glTranslated(10 , -4, -15);
        glScaled(20 ,20 , 1);
        glutSolidCube(0.4);
    glPopMatrix ();

    glPushMatrix ();
        glColor3f (0.415, 0.537, 0.745);
        glTranslated(-24.5 , -4, -15);
        glScaled(20 ,20 , 1);
        glutSolidCube(0.4);
    glPopMatrix ();


    //jendela kanan belakang
    glPushMatrix ();
        glColor3f (0.415, 0.537, 0.745);
        glTranslated(25.5 , -4, -15);
        glScaled(20 ,20 , 1);
        glutSolidCube(0.4);
    glPopMatrix ();

    glPushMatrix ();
        glColor3f (0.415, 0.537, 0.745);
        glTranslated(35.5 , -4, -15);
        glScaled(20 ,20 , 1);
        glutSolidCube(0.4);
    glPopMatrix ();

    glPushMatrix ();
        glColor3f (0.415, 0.537, 0.745);
        glTranslated(45.5 , -4, -15);
        glScaled(20 ,20 , 1);
        glutSolidCube(0.4);
    glPopMatrix ();

    //jendela kiri belakang
    glPushMatrix ();
        glColor3f (0.415, 0.537, 0.745);
        glTranslated(-40.5 , -4, -15);
        glScaled(20 ,20 , 1);
        glutSolidCube(0.4);
    glPopMatrix ();

    glPushMatrix ();
        glColor3f (0.415, 0.537, 0.745);
        glTranslated(-50.5 , -4, -15);
        glScaled(20 ,20 , 1);
        glutSolidCube(0.4);
    glPopMatrix ();

    glPushMatrix ();
        glColor3f (0.415, 0.537, 0.745);
        glTranslated(-60.5 , -4, -15);
        glScaled(20 ,20 , 1);
        glutSolidCube(0.4);
    glPopMatrix ();

    //jendela belakang atas
    glPushMatrix ();
        glColor3f (0.415, 0.537, 0.745);
        glTranslated(0 , 20, -15);
        glScaled(20 ,20 , 1);
        glutSolidCube(0.4);
    glPopMatrix ();

    glPushMatrix ();
        glColor3f (0.415, 0.537, 0.745);
        glTranslated(-14.5 , 20, -15);
        glScaled(20 ,20 , 1);
        glutSolidCube(0.4);
    glPopMatrix ();

    //lapangan
    glPushMatrix();
        glColor3f(0.270, 0.509, 0.294);
        glTranslated( -7.5, -16.0, -80 );
        glRotatef (90, 0, 0, 1);
        glScaled(0.5, 100, 80 );
        glutSolidCube(1.0);
    glPopMatrix();

    //alasbendera
    glPushMatrix ();
        glColor3f (1,1,1);
        glTranslatef (-7.5 , -16, -35);
        glRotatef (90, 0, 0, 1);
        glScaled(1 ,10 , 5);
        glutSolidCube(1.5);
    glPopMatrix ();

    //tiang
    glPushMatrix ();
        glColor3f (1,1,1);
        glTranslatef (-7.5 , 9, -35);
        glScaled(2 ,260 , 2);
        glutSolidCube(0.2);
    glPopMatrix ();

    //bendera



    //jalan depan
    glPushMatrix ();
        glColor3f (1,1,1);
        glTranslatef (-7.5 , -16.0, 40);
        glRotatef (90, 0, 0, 1);
        glScaled(0.5 ,160 , 27);
        glutSolidCube(1.);
    glPopMatrix ();


    //pohon 2
    glPushMatrix();
        glTranslatef(-55, -16, 60);
        glScalef(0.5, 0.5, 0.5);
        glRotatef(90,0,1,0);
        pohon();

    //ranting1
    ranting();

    //ranting2
    glPushMatrix();
    glScalef(1.5, 1.5, 1.5);
    glTranslatef(0,25,25);
    glRotatef(250,1,0,0);
    ranting();
    glPopMatrix();

    //ranting3
    glPushMatrix();
    glScalef(1.8, 1.8, 1.8);
    glTranslatef(0,-6,21.5);
    glRotatef(-55,1,0,0);
    ranting();
    glPopMatrix();

    glPopMatrix();

    glPushMatrix();
        glTranslatef(40, -16, 60);
        glScalef(0.5, 0.5, 0.5);
        glRotatef(90,0,1,0);
        pohon();

    //ranting1
    ranting();

    //ranting2
    glPushMatrix();
    glScalef(1.5, 1.5, 1.5);
    glTranslatef(0,25,25);
    glRotatef(250,1,0,0);
    ranting();
    glPopMatrix();

    //ranting3
    glPushMatrix();
    glScalef(1.8, 1.8, 1.8);
    glTranslatef(0,-6,21.5);
    glRotatef(-55,1,0,0);
    ranting();
    glPopMatrix();

    glPopMatrix();


    //pohon 3
    glPushMatrix();
        glTranslatef(-40, -16, -130);
        glScalef(0.5, 0.5, 0.5);
        glRotatef(90,0,1,0);
        pohon();

    //ranting1
    ranting();

    //ranting2
    glPushMatrix();
    glScalef(1.5, 1.5, 1.5);
    glTranslatef(0,25,25);
    glRotatef(250,1,0,0);
    ranting();
    glPopMatrix();

    //ranting3
    glPushMatrix();
    glScalef(1.8, 1.8, 1.8);
    glTranslatef(0,-6,21.5);
    glRotatef(-55,1,0,0);
    ranting();
    glPopMatrix();

    glPopMatrix();

    glPushMatrix();
        glTranslatef(40, -16, 60);
        glScalef(0.5, 0.5, 0.5);
        glRotatef(90,0,1,0);
        pohon();

    //ranting1
    ranting();

    //ranting2
    glPushMatrix();
    glScalef(1.5, 1.5, 1.5);
    glTranslatef(0,25,25);
    glRotatef(250,1,0,0);
    ranting();
    glPopMatrix();

    //ranting3
    glPushMatrix();
    glScalef(1.8, 1.8, 1.8);
    glTranslatef(0,-6,21.5);
    glRotatef(-55,1,0,0);
    ranting();
    glPopMatrix();

    glPopMatrix();


    //pohon 4
    glPushMatrix();
        glTranslatef(-7.5, -16, -130);
        glScalef(0.5, 0.5, 0.5);
        glRotatef(90,0,1,0);
        pohon();

    //ranting1
    ranting();

    //ranting2
    glPushMatrix();
    glScalef(1.5, 1.5, 1.5);
    glTranslatef(0,25,25);
    glRotatef(250,1,0,0);
    ranting();
    glPopMatrix();

    //ranting3
    glPushMatrix();
    glScalef(1.8, 1.8, 1.8);
    glTranslatef(0,-6,21.5);
    glRotatef(-55,1,0,0);
    ranting();
    glPopMatrix();

    glPopMatrix();

    glPushMatrix();
        glTranslatef(40, -16, 60);
        glScalef(0.5, 0.5, 0.5);
        glRotatef(90,0,1,0);
        pohon();

    //ranting1
    ranting();

    //ranting2
    glPushMatrix();
    glScalef(1.5, 1.5, 1.5);
    glTranslatef(0,25,25);
    glRotatef(250,1,0,0);
    ranting();
    glPopMatrix();

    //ranting3
    glPushMatrix();
    glScalef(1.8, 1.8, 1.8);
    glTranslatef(0,-6,21.5);
    glRotatef(-55,1,0,0);
    ranting();
    glPopMatrix();

    glPopMatrix();

    //pohon 4
    glPushMatrix();
        glTranslatef(25, -16, -130);
        glScalef(0.5, 0.5, 0.5);
        glRotatef(90,0,1,0);
        pohon();

    //ranting1
    ranting();

    //ranting2
    glPushMatrix();
    glScalef(1.5, 1.5, 1.5);
    glTranslatef(0,25,25);
    glRotatef(250,1,0,0);
    ranting();
    glPopMatrix();

    //ranting3
    glPushMatrix();
    glScalef(1.8, 1.8, 1.8);
    glTranslatef(0,-6,21.5);
    glRotatef(-55,1,0,0);
    ranting();
    glPopMatrix();

    glPopMatrix();

    glPushMatrix();
        glTranslatef(40, -16, 60);
        glScalef(0.5, 0.5, 0.5);
        glRotatef(90,0,1,0);
        pohon();

    //ranting1
    ranting();

    //ranting2
    glPushMatrix();
    glScalef(1.5, 1.5, 1.5);
    glTranslatef(0,25,25);
    glRotatef(250,1,0,0);
    ranting();
    glPopMatrix();

    //ranting3
    glPushMatrix();
    glScalef(1.8, 1.8, 1.8);
    glTranslatef(0,-6,21.5);
    glRotatef(-55,1,0,0);
    ranting();
    glPopMatrix();

    glPopMatrix();


    glDisable(GL_COLOR_MATERIAL);
}

void rendering(void){

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(10, 0, z);
    glRotatef(sudut, x1, y1, z1);
    drawScene();
    glutSwapBuffers();
}

void myKeyboard(unsigned char key, int x, int y){
    if (key == 'x') {
      x1=1;
      y1=0;
      z1=0;
      sudut+=10;
     }
    else if (key == 'y') {
      y1=1;
      x1=0;
      z1=0;
      sudut+=-10;
    }
    else if (key == 't') {
      y1=1;
      x1=0;
      z1=0;
      sudut+=+10;
    }
    else if (key == 'z') {
      y1=0;
      x1=0;
      z1=1;
      sudut+=-10;
    }
}

void mySpecialKeyboard(int key, int x, int y){
    switch(key){
    case GLUT_KEY_UP:
        z+=5;
    break;
    case GLUT_KEY_DOWN:
        z-=5;
    break;

    case GLUT_KEY_RIGHT:
      y1=1;
      x1=0;
      z1=0;
      sudut+=-10;
    break;

    case GLUT_KEY_LEFT:
      y1=1;
      x1=0;
      z1=0;
      sudut+=+10;
    break;
    }
}

void handleResize(int width, int height){
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (float) width/(float) height, 1.0, 300.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void initRendering(){
    GLfloat LightPosition[] = {10.0f, 10.0f, 30.0f, 0.0f};
    GLfloat LightAmbient[] = {0.0f, 1.0f, 0.0f, 1.0f};
    GLfloat LightDiffuse[] = {0.7f, 0.7f, 0.7f, 1.0f};
    GLfloat LightSpecular[] = {1.0f, 1.0f, 1.0f, 1.0f};
    GLfloat Shine[] = {100};
    glShadeModel(GL_SMOOTH);
    //glClearColor(0.0f, 0.0f, 0.0f, 0.5f);
    glClearDepth(1.0f);
    glLightfv(GL_LIGHT0, GL_SHININESS, Shine);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_PROJECTION);
    glClearColor(0.1725, 0.1725, 0.251, 1);
    glLoadIdentity();
    gluPerspective(45.0, (GLdouble) w/(GLdouble) h, 1.0, 300.0);
    glMatrixMode(GL_MODELVIEW);
}

//kayak timer
void idle(){
    glutPostRedisplay();
}

int main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(-20, .0);
    glutInitWindowSize(600, 600);
    glutCreateWindow("3D School");
    initRendering();
    glutDisplayFunc(rendering);
    glutReshapeFunc(handleResize);
    glutIdleFunc(idle);
    glutKeyboardFunc(myKeyboard);
    glutSpecialFunc(mySpecialKeyboard);
    glutMainLoop();
    return 0;
}
