#include <stdio.h>

int main()
{  
    char * string1 = "David says: , \" Programming is fun !\"";
    char * string2 = "**Conditions apply , \"Offers valid until tomorrow\"";
    char * string3 = "C:\\My computer\\My folder";
    char * string4 = "D:/My documents/My file";
    char * string5 = "\\ \\ \\ \\ Today is holiday \\ \\ \\ \\";
    char * string6 = "This is a triple quoted string \"\"\" This month has 30 days \"\"\"";
    printf("%s\n%s\n%s\n%s\n%s\n%s",string1,string2,string3,string4,string5,string6);
}
