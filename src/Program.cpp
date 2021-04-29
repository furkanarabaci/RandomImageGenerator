#include <iostream>
#include "../include/Generator.hpp"
#include "../include/EasyBMP.h"
int main(){
    BMP theImage;
    int width = 640;
    int height = 480;
    theImage.SetSize(width,height);
    theImage.SetBitDepth(32);
    for(int i = 0;i<width;i++){
        for(int j = 0;j<height;j++){
            theImage(i,j)->Red = Generator::GenerateLong(0,256);
            theImage(i,j)->Green = Generator::GenerateLong(0,256);
            theImage(i,j)->Blue = Generator::GenerateLong(0,256);
            theImage(i,j)->Alpha = Generator::GenerateLong(0,256);
        }
    }
    theImage.WriteToFile("randomimage.bmp");
}
