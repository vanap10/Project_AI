#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include<stdio.h>
#include <string.h>
#include "loadImg.h"

int main(void)
{
  char* ptr = "5;0,152;3;18;18;18;126;136;175;26;166;255;247;127;0,12;30;36;94;154;170;253;253;253;253;253;225;172;253;242;195;64;0,11;49;238;253;253;253;253;253;253;253;253;251;93;82;82;56;39;0,12;18;219;253;253;253;253;253;198;182;247;241;0,18;80;156;107;253;253;205;11;0,1;43;154;0,19;14;1;154;253;90;0,25;139;253;190;2;0,24;11;190;253;70;0,25;35;241;225;160;108;1;0,23;81;240;253;253;119;25;0,23;45;186;253;253;150;27;0,23;16;93;252;253;187;0,25;249;253;249;64;0,21;46;130;183;253;253;207;2;0,19;39;148;229;253;253;253;250;182;0,18;24;114;221;253;253;253;253;201;78;0,17;23;66;213;253;253;253;253;198;81;2;0,16;18;171;219;253;253;253;253;195;80;9;0,16;55;172;226;253;253;253;253;244;133;11;0,18;136;253;253;253;212;135;132;16;0,100";
  imgData loadImg(ptr);
  return 0;
}
