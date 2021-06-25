#include "MattiUtilsLib.h"

String getValue(String data, char separator, int index) {
   int found = 0;
   int strIndex[] = { 0, -1 };
   int maxIndex = data.length() - 1;
   for (int i = 0; i <= maxIndex && found <= index; i++) {
       if (data.charAt(i) == separator || i == maxIndex) {
           found++;
           strIndex[0] = strIndex[1] + 1;
           strIndex[1] = (i == maxIndex) ? i+1 : i;
       }
   }
   return found > index ? data.substring(strIndex[0], strIndex[1]) : "";
}

double mapf(double value, double fromLow, double fromHigh, double toLow, double toHigh) {
   return (value-fromLow)*(toHigh-toLow)/(fromHigh-fromLow) + toLow;
}

char* beautifyStr(String str) {
  int index = 0;
  char* result = (char*) malloc((str.length() + 1) * sizeof(char));
  for (int i = 0; i < str.length(); i++) {
    char ch = str.charAt(i);
    if (ch != '\n' && ch != '\r') {
      *(result + index) = ch;
      index++;
    }
  }
  *(result + index) = '\0';
  return result;
}

double ipo(double x, double y) {
   return sqrt(x*x + y*y);

char* test() {return "OK!";}
