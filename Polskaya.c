#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void push(float);
float pop(void);

 int main() {
     int i;
     float pervi;
     char c;

     while(1>0)
     {


      scanf("%c", &c);
      if (isdigit(c)) push(c-'0');
      else

        switch (c)
        {
        case '-':
            pervi = pop();
            push(pop() - pervi);
            break;
        case '*':
            push(pop() * pop());
            break;
        case '+':
            push(pop()+pop());
            break;
        case '/':
            pervi = pop();
            push(pop()/pervi);
            break;
        case '=':
            printf("%.2f", pop());
           break;
        default:
            break;
        }
     }
     return 0;
 }

 float res[1000];
 int nomer;


  void push(float chislo){
        float element = chislo;
        res[nomer++] = element;
    }

    float pop(void){
        return res[--nomer];
    }
