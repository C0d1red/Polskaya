#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void push(float);
float pop(void);

 int main() {
     float x;
     char c;

     do
     {


      scanf("%c", &c);
      if (isdigit(c)) push(c-'0');
      else

        switch (c)
        {
        case '-':
            x = pop();
            push(pop() - x);
            break;
        case '*':
            push(pop() * pop());
            break;
        case '+':
            push(pop()+pop());
            break;
        case '/':
            x = pop();
            if (x!=0)
                push(pop()/x);
            else{
                printf("Error, x/0 is impossible");
                c = '=';
            }
            break;
        case '=':
            printf("%.2f", pop());
           break;
        default:
            break;
        }
     }
     while(c != '=');
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
