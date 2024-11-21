#include <string.h>
#include "config/video.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   durationMovie: duration in second of movie (colored image)
//   durationCredits: duration in second of credit (image Black/White)
//   unit: Unit of the output value. It could be 'bt' byte, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored video size (based on the unit passed parametter)

float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
   // YOUR CODE HERE - BEGIN
   int colorImgSizeBytes = w * h * 3.0; 
   int bwImgSizeBytes = (w * h1.0)/8;

   float totalSizeBytes = ((float)colorImgSizeBytes durationMovie + (float)bwImgSizeBytes * durationCredits) * fps;

   if (strcmp(unit, "ko") == 0) {
      return totalSizeBytes / 1024.0;
   }
   else if (strcmp(unit, "bt") == 0) {
      return totalSizeBytes;
   }
   else if (strcmp(unit, "mo") == 0) {
      return totalSizeBytes / (1024.0 * 1024.0);
   }
   else if (strcmp(unit, "go") == 0) {
      return totalSizeBytes / (1024.0 * 1024.0 * 1024.0);
   }
   // YOUR CODE HERE - END
   return 0;
}

   
