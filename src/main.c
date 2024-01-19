#include <stdio.h>
#include <math.h>
#define IMGSIZE 256
#define M_PI 3.14159265358979323846264338327950288

typedef struct
{
    char MagickNumber[2];
    int  width;
    int  height;
    int  Maxval;
    char Name[64];
} Header;
void SavePGM(Header Header,int array_img[IMGSIZE*IMGSIZE]){
    FILE *fp = fopen(Header.Name,"w");
    fprintf(fp,"%s\n%d %d\n%d\n",Header.MagickNumber,Header.width,Header.height,Header.Maxval);
    for(int i = 0;i <= IMGSIZE*IMGSIZE;i++){
        fprintf(fp,"%d\n",array_img[i]);
    }
    fclose(fp);
}
void GenerateCircle(int *array,int size){
    int arrVec2[size][size];
    for(double theta = 0;theta <= 2*M_PI;theta += 0.01){
        arrVec2[(int)((size/2) * cos(theta)+size/2)][(int)((size/2) * sin(theta)+size/2)] = 255;
    }
    for(int y = 0;y <=size;y++){
        for(int x = 0;x <= size;x++){
            array[x+y*256] = arrVec2[x][y];
        }
    }
}
int main(void)
{
    int array[IMGSIZE*IMGSIZE];
    Header header = {"P2",256,256,255,"./circle.pgm"};
    GenerateCircle(array,IMGSIZE);
    SavePGM(header,array);
    return 0;
}
