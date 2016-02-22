#include <stdio.h>
#include <stdlib.h>
#include "ml6.h"
#include "display.h"
#include "draw.h"
//Insert your line algorithm here
int y_int = 0; //the  y = intercept. will change later
void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {
  //where (x0.y0 ->>x1,y1 and x0<X1 always)
  int dummy= 0 ;
  if (x1<x0){//switching them up if necessary
    dummy=x0;
    x0=x1;
    x1 =dummy;
    dummy=y0;
    y0=y1;
    y1 =dummy;
  }
  
  //screen ==the 2d array to represent pixels
  //color = pixel "object"
  int a = y1-y0;
  int b = x0 - x1;
  int c = b * -1 *y_int;
  
  int d //= 2*a +  b
    //m is the slope, using a floatie when i shouldnt
    float m;
  m = (float)a;
  m/=( (float)(b * -1));
  if ((m<=1)   && (m>=0)) {/////OCT 1 and 4
    d = 2* a + b;
    while(x0 <= x1){
      plot(s,c,x0,y0);
      if(d > 0){
	y0 += 1;
	d += 2*b;
      }
      x0 +=1;
      d += 2*a;
    }
  }

  //----------------------------
  
  if (1< m ) {//OCT 2 AND 5
    d = A + 2*a;
    while(y0 <= y1){
      plot(s,c,x0,y0);
      if(d < 0){
	x0 +=1;
	d += 2*a;
      }
      y0 += 1;
      d +=2*a;
    }
  }
  //--------------------------------
  if(m<= -1){//OCT 3 AND 6
    d = A - 2*a;
    while(y0 >= y1){
      plot(s,c,x0,y0);
      if(d > 0){
	x0 += 1;
	d += 2*a;
      }
      y0 -= 1;
      d -= 2*b;
    }
  }
  
  //-------------------------------
  if((m < 0) && (m > -1)){//OCT 4 AND 8 
    d = 2*a - b;
    while(x0 <= x1){
      plot(s,c,x0,y0);
      if(d < 0){
	y0 -= 1;
	d -= 2*b;
      }
      x0 += 1;
      d += 2*a;
    }
  }


}
