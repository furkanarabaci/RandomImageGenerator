#include <iostream>
#include "../include/Generator.hpp"
#include "../include/EasyBMP.h"
int main(){
    BMP theImage;
    int width = 640;
    int height = 480;
    theImage.SetSize(width,height);
    theImage.SetBitDepth(32);
    // for(int i = 0;i<width;i++){
    //     for(int j = 0;j<height;j++){
    //         theImage(i,j)->Red = Generator::GenerateLong(200,256);
    //         theImage(i,j)->Green = Generator::GenerateLong(200,256);
    //         theImage(i,j)->Blue = Generator::GenerateLong(200,256);
    //         theImage(i,j)->Alpha = Generator::GenerateLong(1,10); 
    //     }
    // }
    for(int i = 0;i<20;i++){
        std::cout<<Generator::GenerateLong(200,256)<<std::endl;
    }
    theImage.WriteToFile("test.bmp");
    //std::cout<<Generator::GenerateLong(256)<<std::endl;
}