#include <stdio.h>
#include <stdlib.h>
void classe(int a);
int main(int argc, char **argv)
{   char *data;
 
 data = getenv("QUERY_STRING");
 if (data == NULL) {
        return 0;
    }
    int a,b,c,d;
    sscanf(data,"ip=%d.%d.%d.%d",&a,&b,&c,&d);
    printf("Content-Type: text/html\n\n");
    printf("<html><body>\n");
    printf("<h1>VOTRE IP:%d.%d.%d.%d </h1>\n",a,b,c,d);
	classe(a);
    return 0;
}
void classe(int a)
{
  if(a>=0&&a<=127){
     
    printf("<h1>Classe A</h1>\n");
    printf("</body></html>\n");
  }
 if(a>=128&&a<=191){
     
    printf("<h1>Classe B</h1>\n");
    printf("</body></html>\n");
  }
  if(a>=192&&a<=223){
     
    printf("<h1>Classe C</h1>\n");
    printf("</body></html>\n");
  }
  if(a>=224&&a<=239){
     
    printf("<h1>Classe D</h1>\n");
    printf("</body></html>\n");
  }
  else(a<=240);{
    printf("<h1>eureur ip</h1>\n");
    printf("</body></html>\n");
  }
}

