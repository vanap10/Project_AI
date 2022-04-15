#include "loadImg.h"
#include <string.h>
#include <stdio.h>
imgData loadImg(char *str)
{
  imgData imgDataBuffer={0,};
  char* wordBuffer=0;
  wordBuffer=strtok(str,";");
  puts(wordBuffer);
  return imgDataBuffer;
}