#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {
  //500 by 500 pixels
  screen s;
  color c;
 
  
  c.red = 0;
  c.green = MAX_COLOR;
  c.blue = 0;
  
  clear_screen(s);
    c.red = 0;
  c.green = 45;
  c.blue = 187;
  // draw_line(0,0,499,499,s,c);
  int k =0;
  while (k<500){
  draw_line(0,0,XRES,k,s,c);
  k+=10;
  }
  k = 5;
  c.red = 255;
  c.green = 255;
  c.blue = 0;
  while (k<500){
    draw_line(0,0,k,YRES,s,c);
  k+=10;
  }
  draw_line(0,1 , 400,YRES,s,c);
  k = 0;
  //int j = 20;
c.red = 255;
  c.green = 0;
  c.blue = 0;
  while (k<500){
    draw_line(0,YRES,XRES,k,s,c);
    k+=10;
    //j = (j + 50)%YRES;
  }
c.red = 0;
  c.green = 255;
  c.blue = 229;
  k=0;
  while (k<500){
    draw_line(0,YRES,k,0,s,c);
    k+=10;
    //j = (j + 50)%YRES;
  }
/*

  //octant 1
  draw_line( 0, 0, XRES-1, YRES - 75, s, c);
  //octant 2
  draw_line( 0, 0, XRES - 75, YRES-1, s, c); 
  //octant 8
  draw_line( 0, YRES-1, XRES-1, 75, s, c);  
  //octant 7
  draw_line( 0, YRES-1, XRES - 75, 0, s, c);

  c.green = 0;
  c.blue = MAX_COLOR;
  //octant 5
  draw_line( XRES - 1, YRES - 1, 0, 75, s, c);
  //octant 6
  draw_line( XRES - 1, YRES -1, 75, 0, s, c);
  //octant 4
  draw_line( XRES - 1, 0, 0, YRES - 75, s, c);
  //octant 3
  draw_line( XRES - 1, 0, 75, YRES - 1, s, c);
  
  c.blue = 0;
  c.red = MAX_COLOR;
  //y = x, y = -x
  draw_line( 0, 0, XRES - 1, YRES - 1, s, c);
  draw_line( 0, YRES - 1, XRES - 1, 0, s, c);

  //horizontal, vertical line
  draw_line( 0, YRES / 2, XRES - 1, YRES / 2, s, c);
  draw_line( XRES / 2, 0, XRES / 2, YRES - 1, s, c);
  */
  display(s);
  save_extension(s, "lines.png");
} 
