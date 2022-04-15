typedef unsigned char luma;
typedef enum number {
  zero,
  one,
  two,
  three,
  four,
  five,
  six,
  seven,
  eight,
  nine
} number;
typedef struct img {
  luma pixel[28][28];
} img;

typedef struct imgData {
  struct img img;
  enum number number;
} imgData;
imgData loadImg(char *str);