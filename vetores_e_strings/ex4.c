#include <stdio.h>
#include<string.h>

int main() {

    int i, t;
    int n;
    int led=0;
    char num[100];
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%s", num);
        for(t=0; t<100; t++) {
            if(num[t]=='1') {
                led+=2;
            }
            if(num[t]=='2') {
                led+=5; 
            }
            if(num[t]=='3') {
                led+=5; 
            }
            if(num[t]=='4') {
                led+=4; 
            }
            if(num[t]=='5') {
                led+=5; 
            }
            if(num[t]=='6') {
                led+=6; 
            }
            if(num[t]=='7') {
                led+=3; 
            } 
            if(num[t]=='8') {
                led+=7; 
            }
            if(num[t]=='9') {
                led+=6; 
            }
            if(num[t]=='0') {
                led+=6; 
            }
            if(num[t]=='\0') {
                break;
            }
        }
        printf("%d leds\n", led);
        led=0;
    }

    return 0;
}