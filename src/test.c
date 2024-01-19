#include<stdio.h>
#include<string.h>
#define IMGSIZE 256
 
typedef struct{
	char MagickNumber[3];
	int width;
	int height;
	int Maxval;
	char Name[50];
}ImageStr;
 
int SaveImg(ImageStr a,int Img[IMGSIZE*IMGSIZE]){
	FILE *fp;
	fp=fopen(a.Name,"w");
	if(fp==NULL){
		printf("file is not exist.\n");
		return -1;
	}
 
fprintf(fp,"%s\n",a.MagickNumber);
	fprintf(fp,"%d\n",a.width);
	fprintf(fp,"%d\n",a.height);
	fprintf(fp,"%d\n",a.Maxval);
		for(int i=0; i<IMGSIZE; i++){
			for(int j=0; j<IMGSIZE; j++){
				fprintf(fp,"%d\n",Img[i*256+j]);
			}
		}
		fclose(fp);
		return 0;
	}
int Grad(ImageStr*a,int *Img){
		strcpy(a->MagickNumber,"P2");
		a->width = 256;
		a->height = 256;
		a->Maxval = 255;
		strcpy(a->Name,"Grad.pgm");
		for(int y=0; y<IMGSIZE; y++){
			for(int x=0; x<IMGSIZE; x++){
				Img[y*256+x] = (x);
			}
		}
		return 0;
	}
 
int main(void){
	ImageStr a;
	int Img[IMGSIZE*IMGSIZE];
	ImageStr*pt = &a;
	for(int i=0; i<IMGSIZE;i++){
		for(int j=0; j<IMGSIZE;j++){
			Img[i*256+j] = 0;
		}
	}
	Grad(pt,&Img);
	SaveImg(a,Img);
	return 0;
}