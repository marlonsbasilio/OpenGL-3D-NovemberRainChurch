#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

float posX=0.0,posY=0.0,posZ=0.0;
float transX=0.0,transY=0.0,transZ=0.0;

void lapide(float x, float y, float z, float proporcao, float rotate){

  glColor3f(0.3, 0.3, 0.3);
  glPushMatrix();
  glTranslatef(x,y,z);
  glRotatef(rotate,0,1,1); 
  glScalef(0.2,0.5,0.03);
  glutSolidCube(1*proporcao);
  glPopMatrix();
}

void cerca_frente(float x, float y, float z){
  
  float incr = 0.02;
  //PARTE VERTICAL ESQUERDA
  glColor3f(0.9, 0.9, 0.9);
  glPushMatrix();
  glTranslatef(x-0.15,y,z+incr); 
  glScalef(0.03,0.7,0.03);
  glutSolidCube(1);
  glPopMatrix();

  //PARTE VERTICAL DIREITA
  glColor3f(0.9, 0.9, 0.9);
  glPushMatrix();
  glTranslatef(x+0.15,y,z+incr); 
  glScalef(0.03,0.7,0.03);
  glutSolidCube(1);
  glPopMatrix();


  //PARTE HORIZONTAL BAIXO
  glColor3f(0.9, 0.9, 0.9);
  glPushMatrix();
  glTranslatef(x+incr,y-0.2,z); 
  glScalef(0.5,0.02,0.02);
  glutSolidCube(1);
  glPopMatrix();

  //PARTE HORIZONTAL CIMA
  glColor3f(0.9, 0.9, 0.9);
  glPushMatrix();
  glTranslatef(x+incr,y+0.2,z); 
  glScalef(0.5,0.02,0.02);
  glutSolidCube(1);
  glPopMatrix();


}

void cerca_lado(float x, float y, float z){
  float incr = 0.02;
  //PARTE VERTICAL ESQUERDA
  glColor3f(0.9, 0.9, 0.9);
  glPushMatrix();
  glTranslatef(x+incr,y,z-0.15); 
  glScalef(0.03,0.7,0.03);
  glutSolidCube(1);
  glPopMatrix();

  //PARTE VERTICAL DIREITA
  glColor3f(0.9, 0.9, 0.9);
  glPushMatrix();
  glTranslatef(x+incr,y,z+0.15); 
  glScalef(0.03,0.7,0.03);
  glutSolidCube(1);
  glPopMatrix();


  //PARTE HORIZONTAL BAIXO
  glColor3f(0.9, 0.9, 0.9);
  glPushMatrix();
  glTranslatef(x+incr,y-0.2,z); 
  glScalef(0.02,0.02,0.5);
  glutSolidCube(1);
  glPopMatrix();

  //PARTE HORIZONTAL CIMA
  glColor3f(0.9, 0.9, 0.9);
  glPushMatrix();
  glTranslatef(x+incr,y+0.2,z); 
  glScalef(0.02,0.02,0.5);
  glutSolidCube(1);
  glPopMatrix();

}
void Janela(float x, float y, float z, int lado){

  float incr;
  if (lado == 1){
    incr = -0.02;
  }
  else{
    incr = +0.02;
  }
  
  //VIDRO
  glColor3f(0.2,0.2,0.15);
  glPushMatrix();
  glTranslatef(x,y,z); 
  glScalef(0.03,0.7,0.6);
  glutSolidCube(1);
  glPopMatrix();


  //PARTE VERTICAL ESQUERDA
  glColor3f(0.9, 0.9, 0.9);
  glPushMatrix();
  glTranslatef(x+incr,y,z-0.25); 
  glScalef(0.04,0.7,0.04);
  glutSolidCube(1);
  glPopMatrix();

  //PARTE VERTICAL DIREITA
  glColor3f(0.9, 0.9, 0.9);
  glPushMatrix();
  glTranslatef(x+incr,y,z+0.25); 
  glScalef(0.04,0.7,0.04);
  glutSolidCube(1);
  glPopMatrix();


  //PARTE VERTICAL FINA

  //PARTE VERTICAL MEIO
  glColor3f(0.9, 0.9, 0.9);
  glPushMatrix();
  glTranslatef(x+incr,y,z); 
  glScalef(0.02,0.7,0.02);
  glutSolidCube(1);
  glPopMatrix();
  

  //////////

  //PARTE HORIZONTAL BAIXO
  glColor3f(0.9, 0.9, 0.9);
  glPushMatrix();
  glTranslatef(x+incr,y-0.35,z); 
  glScalef(0.02,0.05,0.5);
  glutSolidCube(1);
  glPopMatrix();

  //PARTE HORIZONTAL CIMA
  glColor3f(0.9, 0.9, 0.9);
  glPushMatrix();
  glTranslatef(x+incr,y+0.35,z); 
  glScalef(0.02,0.05,0.5);
  glutSolidCube(1);
  glPopMatrix();


  //PARTE HORIZONTAL MEIO
  glColor3f(0.9, 0.9, 0.9);
  glPushMatrix();
  glTranslatef(x+incr,y+0.1,z); 
  glScalef(0.01,0.01,0.5);
  glutSolidCube(1);
  glPopMatrix();


    //PARTE HORIZONTAL MEIO
  glColor3f(0.9, 0.9, 0.9);
  glPushMatrix();
  glTranslatef(x+incr,y-0.1,z); 
  glScalef(0.01,0.01,0.5);
  glutSolidCube(1);
  glPopMatrix();

  
}
void Cruz(float x, float y, float z, float proporcao){

  
  //PARTE VERTICAL
  glColor3f(0.4, 0.4, 0.4);
  glPushMatrix();
  glTranslatef(x,y,z); /// 0, 4, 0.08
  glScalef(0.02,0.5,0.02);
  glutSolidCube(1*proporcao);
  glPopMatrix();

  //PARTE Horizontal
  glColor3f(0.4, 0.4, 0.4);
  glPushMatrix();
  glTranslatef(x, y+0.1*proporcao,z); 
  glScalef(0.2,0.02,0.02);
  glutSolidCube(1*proporcao);
  glPopMatrix();

}

void myKeyboardSpecial(int key, int x, int y){
  //Movimento
  switch (key){

    case GLUT_KEY_RIGHT:
      posY += 0.5;
    break;

    case GLUT_KEY_LEFT:
      posY -= 0.5;
    break;

    case GLUT_KEY_UP:
      posX += 0.5;
    break;

    case GLUT_KEY_DOWN:
      posX -= 0.5;
    break;

    default:
    break;
    }
    glutPostRedisplay();
}

void myKeyboard(unsigned char key, int x, int y){

switch (key){
  case 'q':
  case 'Q':
    transZ += 0.5;
  break;

  case 'e':
  case 'E':
    transZ -= 0.5;
  break;

  case 's':
  case 'S':
    transY += 0.5;
  break;

  case 'w':
  case 'W':
    transY -= 0.5;
  break;

  case 'a':
  case 'A':
    transX += 0.5;
  break;

  case 'd':
  case 'D':
    transX -= 0.5;
  break;

  case 'Z':
  case 'z':
    transX = 0.0;
    transY = 0.0;
    transZ = 0.0;
  break;


  case 'X':
  case 'x':
    posX = 0.0;
    posY = 0.0;
    posZ = 0.0;
  break;

  default:
  break;

  }
  glutPostRedisplay();
}


void desenha () {

  if (posX==360)
    posX=0;

  if (posY==360)
    posY=0;

  /* clear window */
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  /* future matrix manipulations should affect the modelview matrix */
  glMatrixMode(GL_MODELVIEW);

  glColor3f(0.5f,0.5f,0.5f);

  glPushMatrix();
  //movimentos de rotacao e translacao
  glRotatef(posX,1.0,0.0,0.0);
  glRotatef(posY,0.0,1.0,0.0);
  glTranslatef(transX, transY, transZ);
		

  //Terreno
  glColor3f(0.95, 0.65, 0.37);
  glPushMatrix();
  glTranslatef(0,-0.5,0);
  glScalef(100.0,0.01, 100);
  glutSolidCube(1);
  glPopMatrix();
  



  //PISO PARTE DE DENTRO

  glColor3f(0.2, 0.2, 0.2);
  glPushMatrix();
  glTranslatef(0,-0.45,-1);
  glScalef(1.8,0.15,3.8);
  glutSolidCube(1);
  glPopMatrix();

  //PISO COBERTA

  glColor3f(0.2, 0.2, 0.2);
  glPushMatrix();
  glTranslatef(0,-0.45,1);
  glScalef(0.8,0.15,1.2);
  glutSolidCube(1);
  glPopMatrix();


  //Parede_frente_1
  glColor3f(0.8, 0.8, 0.8);
  glPushMatrix();
  glTranslatef(-0.5,0.2,0.8);
  glScalef(0.5,1.5,0.1);
  glutSolidCube(1);
  glPopMatrix();

  //Parede_frente_2
  glColor3f(0.8, 0.8, 0.8);
  glPushMatrix();
  glTranslatef(0.5,0.2,0.8);
  glScalef(0.5,1.5,0.1);
  glutSolidCube(1);
  glPopMatrix();
  
  //Parede_frente_meio
  glColor3f(0.8, 0.8, 0.8);
  glPushMatrix();
  glTranslatef(0,0.8,0.8);
  glScalef(0.5,0.3,0.1);
  glutSolidCube(1);
  glPopMatrix();

  //Parede_frente_triangulo
  glColor3f(0.8, 0.8, 0.8);
  glPushMatrix();
  glRotatef(180,0,1,1);
  glRotatef(0,0,0,1);

  glTranslatef(0,0.8,0.9);
  glScalef(0.78, 1, 1);
  glutSolidCone(1,1,2,5);
  glPopMatrix();




  // LATERAL ESQUERDA

  //Parede lateral_esquerda_inicio

  glColor3f(0.7, 0.7, 0.7);
  glPushMatrix();
  glTranslatef(-0.8,0.16,0.5);
  glScalef(0.1,1.45,0.5);
  glutSolidCube(1);
  glPopMatrix();

  //Parede lateral_esquerda_janela_parte_baixa
  glColor3f(0.7, 0.7, 0.7);
  glPushMatrix();
  glTranslatef(-0.8,-0.3,-1);
  glScalef(0.1,0.4,3.4);
  glutSolidCube(1);
  glPopMatrix();


  //Parede lateral_esquerda_janela_parte_alta
  glColor3f(0.7, 0.7, 0.7);
  glPushMatrix();
  glTranslatef(-0.8,0.7,-1);
  glScalef(0.1,0.35,3.4);
  glutSolidCube(1);
  glPopMatrix();


  //Parede lateral_esquerda_meio

  glColor3f(0.7, 0.7, 0.7);
  glPushMatrix();
  glTranslatef(-0.8,0.1,-0.5);
  glScalef(0.1,1.4,0.5);
  glutSolidCube(1);
  glPopMatrix();



  //Parede lateral_esquerda_meio2

  glColor3f(0.7, 0.7, 0.7);
  glPushMatrix();
  glTranslatef(-0.8,0.1,-1.5);
  glScalef(0.1,1.4,0.5);
  glutSolidCube(1);
  glPopMatrix();



  //Parede lateral_esquerda_final

  glColor3f(0.7, 0.7, 0.7);
  glPushMatrix();
  glTranslatef(-0.8,0.1,-2.5);
  glScalef(0.1,1.4,0.5);
  glutSolidCube(1);
  glPopMatrix();



// LATERAL DIREITA

  //Parede lateral_DIREITA_inicio

    glColor3f(0.7, 0.7, 0.7);
  glPushMatrix();
  glTranslatef(0.8,0.16,0.5);
  glScalef(0.1,1.45,0.5);
  glutSolidCube(1);
  glPopMatrix();

  //Parede lateral_DIREITA_janela_parte_baixa
  glColor3f(0.7, 0.7, 0.7);
  glPushMatrix();
  glTranslatef(0.8,-0.3,-1);
  glScalef(0.1,0.4,3.4);
  glutSolidCube(1);
  glPopMatrix();



  //Parede lateral_DIREITA_janela_parte_alta
  glColor3f(0.7, 0.7, 0.7);
  glPushMatrix();
  glTranslatef(0.8,0.7,-1);
  glScalef(0.1,0.35,3.4);
  glutSolidCube(1);
  glPopMatrix();



  //Parede lateral_DIREITA_meio

  glColor3f(0.7, 0.7, 0.7);
  glPushMatrix();
  glTranslatef(0.8,0.1,-0.5);
  glScalef(0.1,1.4,0.5);
  glutSolidCube(1);
  glPopMatrix();




  //Parede lateral_DIREITA_meio2

  glColor3f(0.7, 0.7, 0.7);
  glPushMatrix();
  glTranslatef(0.8,0.1,-1.5);
  glScalef(0.1,1.4,0.5);
  glutSolidCube(1);
  glPopMatrix();



  //Parede lateral_DIREITA_final

  glColor3f(0.7, 0.7, 0.7);
  glPushMatrix();
  glTranslatef(0.8,0.1,-2.5);
  glScalef(0.1,1.4,0.5);
  glutSolidCube(1);
  glPopMatrix();


  //Parede de tras

  glColor3f(0.8, 0.8, 0.8);
  glPushMatrix();
  glTranslatef(0,0.1,-2.8);
  glScalef(1.7,1.4,0.1);
  glutSolidCube(1);
  glPopMatrix();

  //Parede_tras_triangulo
  glColor3f(0.8, 0.8, 0.8);
  glPushMatrix();
  glRotatef(180,0,1,1);
  glRotatef(0,0,0,1);

  glTranslatef(0,-2.8,0.8);
  glScalef(0.85, 1, 1);
  glutSolidCone(1,1,2,5);
  glPopMatrix();


// HALL
  //PAREDE FRENTE ESQUERDA
  glColor3f(0.7, 0.7, 0.7);
  glPushMatrix();
  glTranslatef(-0.3,0.8,0.8);
  glScalef(0.1,3,0.5);
  glutSolidCube(1);
  glPopMatrix();
  //PAREDE FRENTE DIREITA
  glColor3f(0.7, 0.7, 0.7);
  glPushMatrix();
  glTranslatef(0.3,0.8,0.8);
  glScalef(0.1,3,0.5);
  glutSolidCube(1);
  glPopMatrix();


  //PAREDE FRENTE MEIO
  glColor3f(0.8, 0.8, 0.8);
  glPushMatrix();
  glTranslatef(0.0,1.5,1);
  glScalef(0.55,1.6,0.1);
  glutSolidCube(1);
  glPopMatrix();


  //PAREDE FRENTE ATRAS
  glColor3f(0.8, 0.8, 0.8);
  glPushMatrix();
  glTranslatef(0,1.5,0.6);
  glScalef(0.55,1.6,0.1);
  glutSolidCube(1);
  glPopMatrix();


  //Telhado BAIXO
  glColor3f(0.55, 0.19, 0.07);
  glPushMatrix();
  glRotatef(180,0.0,1.0,1.0);
  glRotatef(45,0.0,0.0,1.0);

  glTranslatef(0.57,0.57,2.3);
  glScalef(0.42, 0.42, 0.35);
  glutSolidCone(1,1,4,10);
  glPopMatrix();

  // SANCA 1
  glColor3f(0.9, 0.9, 0.9);
  glPushMatrix();
  glTranslatef(0,2.3,0.8);
  glScalef(0.7,0.02,0.7);
  glutSolidCube(1);
  glPopMatrix();


  //PAREDE EM CIMA DO TELHADO
  glColor3f(0.75, 0.75, 0.75);
  glPushMatrix();
  glTranslatef(0,2.65,0.8);
  glScalef(0.45,0.5,0.40);
  glutSolidCube(1);
  glPopMatrix();

  // SANCA 2

  glColor3f(0.9, 0.9, 0.9);
  glPushMatrix();
  glTranslatef(0,2.9,0.8);
  glScalef(0.5,0.02,0.5);
  glutSolidCube(1);
  glPopMatrix();

  // PILARES do Telhado

    // PILARES DA FRENTE

  //MEIO
  glColor3f(0.8, 0.8, 0.8);
  glPushMatrix();
  glTranslatef(0,3.1,0.95);
  glScalef(0.08,0.4,0.08);
  glutSolidCube(1);
  glPopMatrix();

  //DIREITA
  glColor3f(0.8, 0.8, 0.8);
  glPushMatrix();
  glTranslatef(0.18,3.1,0.95);
  glScalef(0.06,0.4,0.06);
  glutSolidCube(1);
  glPopMatrix();

  //ESQUERDA
  glColor3f(0.8, 0.8, 0.8);
  glPushMatrix();
  glTranslatef(-0.18,3.1,0.95);
  glScalef(0.06,0.4,0.06);
  glutSolidCube(1);
  glPopMatrix();



      // PILARES DE TRAS

  //MEIO
  glColor3f(0.8, 0.8, 0.8);
  glPushMatrix();
  glTranslatef(0,3.1,0.65);
  glScalef(0.08,0.4,0.08);
  glutSolidCube(1);
  glPopMatrix();

  //DIREITA
  glColor3f(0.8, 0.8, 0.8);
  glPushMatrix();
  glTranslatef(0.18,3.1,0.65);
  glScalef(0.06,0.4,0.06);
  glutSolidCube(1);
  glPopMatrix();

  //ESQUERDA
  glColor3f(0.8, 0.8, 0.8);
  glPushMatrix();
  glTranslatef(-0.18,3.1,0.65);
  glScalef(0.06,0.4,0.06);
  glutSolidCube(1);
  glPopMatrix();

  //Parede de CIMA DOS PILARES

  glColor3f(0.8, 0.8, 0.8);
  glPushMatrix();
  glTranslatef(0,3.3,0.8);
  glScalef(0.42,0.1,0.42);
  glutSolidCube(1);
  glPopMatrix();
  //SANCA 3
  glColor3f(0.9, 0.9, 0.9);
  glPushMatrix();
  glTranslatef(0,3.35,0.8);
  glScalef(0.5,0.02,0.5);
  glutSolidCube(1);
  glPopMatrix();

  //TELHADO ALTO

  glColor3f(0.8, 0.8, 0.8);
  glPushMatrix();
  glRotatef(180,0.0,1.0,1.0);
  glRotatef(45,0.0,0.0,1.0);

  glTranslatef(0.57,0.57,3.35);
  glScalef(0.35, 0.35, 0.7);
  glutSolidCone(1,1,4,10);
  glPopMatrix();




  //COBERTA FRENTE


  //PILAR ESQUERDO
  glColor3f(0.8, 0.8,0.75);
  glPushMatrix();
  glTranslatef(-0.3,0,1.5);
  glScalef(0.1,1,0.1);
  glutSolidCube(1);
  glPopMatrix();

  //PILAR DIREITO
  glColor3f(0.8, 0.8, 0.75);
  glPushMatrix();
  glTranslatef(0.3,0,1.5);
  glScalef(0.1,1,0.1);
  glutSolidCube(1);
  glPopMatrix();

  //PILAR DO MEIO
  glColor3f(0.8, 0.8, 0.75);
  glPushMatrix();
  glTranslatef(0,0.45,1.5);
  glScalef(0.6,0.1,0.1);
  glutSolidCube(1);
  glPopMatrix();

  //PAREDE TRIANGULAR DA COBERTA

  glColor3f(0.8, 0.8, 0.75);  
  glPushMatrix();
  glRotatef(180,0,1,1);
  glRotatef(0,0,0,1);

  glTranslatef(0,1.55,0.49);
  glScalef(0.36, 0.5, 0.45);
  glutSolidCone(1,1,2,5);
  glPopMatrix();

  //LAJES LATERAIS HORIZONTAIS

  //LAJE ESQUERDA
  glColor3f(0.7, 0.7, 0.7);
  glPushMatrix();
  glTranslatef(-0.3,0.45,1.2);
  glScalef(0.1,0.1,0.5);
  glutSolidCube(1);
  glPopMatrix();

  //LAJE DIREITA
  glColor3f(0.7, 0.7, 0.7);
  glPushMatrix();
  glTranslatef(0.3,0.45,1.2);
  glScalef(0.1,0.1,0.5);
  glutSolidCube(1);
  glPopMatrix();

  //TELHADOS


  //TELHADO ESQUERDO
  glColor3f(0.45, 0.19, 0.09);  
  glPushMatrix();
  glRotatef(50,0,0,1);

  glTranslatef(0.75,1.2,-1);
  glScalef(1.45, 0.05, 3.7);
  glutSolidCube(1);
  glPopMatrix();

  //TELHADO DIREITO
  glColor3f(0.45, 0.19, 0.09);  
  glPushMatrix();
  glRotatef(310,0,0,1);

  glTranslatef(-0.7,1.2,-1);
  glScalef(1.4, 0.05, 3.7);
  glutSolidCube(1);
  glPopMatrix();

  //TELHADO COBERTA

  //TELHADO ESQUERDO
  glColor3f(0.45, 0.19, 0.09);  
  glPushMatrix();
  glRotatef(50,0,0,1);

  glTranslatef(0.4,0.6,1.35);
  glScalef(0.6, 0.05, 0.6);
  glutSolidCube(1);
  glPopMatrix();

  //TELHADO DIREITO
  glColor3f(0.45, 0.19, 0.09);  
  glPushMatrix();
  glRotatef(310,0,0,1);

  glTranslatef(-0.4,0.6,1.35);
  glScalef(0.7, 0.05, 0.6);
  glutSolidCube(1);
  glPopMatrix();


 
  //Cruz mais alta
  
  Cruz(0.0f,4.2f,0.8f,1.0f);

  //Cruz na parede do meio
  Cruz(0.0f,2.6f,1.0f,1.0f);

  //Cruz em cima da coberta
  Cruz(0.0f,1.1f,1.6f,0.8f);


  // //JANELA
  Janela(-0.8,0.2,0,1);
  Janela(-0.8,0.2,-1,1);
  Janela(-0.8,0.2,-2,1);


  Janela(0.8,0.2,0,0);
  Janela(0.8,0.2,-1,0);
  Janela(0.8,0.2,-2,0);


  for (float i = -4.5; i < 5; i=i+0.5){
  cerca_frente(i,-0.2,-4.2);
  }

  for (float i = -4; i < 6; i=i+0.5){
  cerca_lado(-4.7 ,-0.2,i);
  }

  for (float i = -4; i < 6; i=i+0.5){
  cerca_lado(4.6,-0.2,i);
  }

  for (float i = -4.5; i < -2.5; i=i+0.5){
  cerca_frente(i,-0.2,5.8);
  }

  for (float i = 2; i < 4.8; i=i+0.5){
  cerca_frente(i,-0.2,5.8);
  }

  lapide(-1.5,-0.4, -2, 1, 330);
  lapide(-2.5,-0.2,-1,0.8,0);
  lapide(-1.5,-0.4, -0, 1, 0);
  lapide(-3,-0.2,-2.5,0.8,0);
  lapide(-3.5,-0.4, -1, 1.2, 40);
  lapide(-2.5,-0.2,-1,0.8,0);
  lapide(-3,-0.4, -1, 1, 0);
  lapide(-0.5,-0.2,-1.5,0.8,340);
  lapide(-1.5,-0.4, 0.5 , 1, 330);
  lapide(-2,-0.2,-0,0.8,0);

  Cruz(-1.8,-0.1,-1.5,1.5);
  Cruz(-4,-0.2,-2,0.8);
  
  glPopMatrix();

    /* flush drawing routines to the window */
    glFlush();
}



void inicializar(){

    /* set up depth-buffering */
    glEnable(GL_DEPTH_TEST);

    /* define the projection transformation */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    //FovY, Aspect, zNear, ZFar
    gluPerspective(60,1,4,20);

    /* define the viewing transformation */
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
	
	// eyeX, eyeY, eyeZ
	// Especifica a posicao do olho. Câmera
	//
	// centerX, centerY, centerZ
	// Especifica a posicao do ponto de referencia. Para onde a câmera aponta.
	//
	// upX, upY, upZ
	// Especifica a direção do vetor "Cima". Geralmente, Y.
  gluLookAt(-4.0,4.0,10.0,0.0,0.0,0.0,0.0,1.0,0.0);
}


int main ( int argc, char * argv[] ) {


  glutInit(&argc,argv);

  glutInitDisplayMode(GLUT_RGB|GLUT_DEPTH);
  glutInitWindowSize(1200,800);
  glutInitWindowPosition(0,0);
  glutCreateWindow("Casa 3D");

  inicializar();
  glutDisplayFunc(desenha);

  glutKeyboardFunc(myKeyboard);
  glutSpecialFunc(myKeyboardSpecial);

  glutMainLoop();

  return 0;
}