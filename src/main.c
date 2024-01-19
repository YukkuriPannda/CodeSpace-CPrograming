#include <stdio.h>

typedef struct
{
    char MagickNumber[2];
    int  width;
    int  height;
    int  Maxval;
    char Name[50]
} Header;
int main(void)
{
    
    int array[256][256];

    return 0;
}

void SavePGM(Header Header,int array_img[][]){
    FILE *fp = fopen(Header.Name,"w");
}
void GenerateCircle(int *array,int size[2]){
    
}