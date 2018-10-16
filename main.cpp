#include "Bitmap/bitmap.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

//argc - number of arguments in command
//argv - each argument word, stored in an array
int main(int argc, char* argv[])
{
  string filename;
  Bitmap image;

  if(argc>2 || argc<2)
    {
     cout<<"Please specify one image file!\n";
    }
  else
    {
      filename = argv[1];
      image.open(filename);
      if(image.isImage())
       {
         vector <vector <Pixel> > imagePixels = image.toPixelMatrix();        
         cout<<filename << " is " << imagePixels.size() << " high and " << imagePixels[0].size() << " pixels wide" << endl;
       }
      else
       {
         cout<<"Image file must be a bitmap with 24-bit color depth.\n";
       }
    }
  return 0;
}
