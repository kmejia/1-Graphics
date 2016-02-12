#include <stdio.h>
#include <stdlib.h>
#include "ml6.h"
#include "display.h"
#include "draw.h"
//Insert your line algorithm here
int y_int = 0; //the  y = intercept. will changhe later
void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {
  //where (x0.y0 ->>x1,y1 and x0<X1 always)
  //screen ==the 2d array to represent pixels
  //color = pixel "object"
  int a = y1-y0;
  int b = x0 - x1;
  int c = b * -1 *y_int;
  //octant1
  int d = 2*a +B
}
