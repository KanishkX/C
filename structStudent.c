#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    char name[20];
    int C;
    int SAAD;
    int OOP;
    int COMM;
    int APPD;
    int JS;
};

int main(){

    struct Student store[5];

    
    //student: Kanishk
    store[0].id = 7;
    strcpy(store[0].name,"Kanishk");
    store[0].C =  100;
    store[0].SAAD = 98;
    store[0].OOP=98;
    store[0].COMM = 100;
    store[0].APPD =  76;
    store[0].JS =88;

    //Student: Walker
    store[1].id = 2;
    strcpy(store[1].name, "Walker");
    store[1].C = 100;
    store[1].SAAD = 98;
    store[1].OOP =  98;
    store[1].COMM =100;
    store[1].APPD= 76;
    store[1].JS = 88;
    
    //Student: ram
    store[2].id = 3;
    strcpy(store[2].name, "Ram");
    store[2].C= 100;
    store[2].SAAD=98;
    store[2].OOP = 98;
    store[2].COMM = 100;
    store[2].APPD=76;
    store[2].JS = 88;
    
    //Student: marshall
    store[3].id = 4;
    strcpy(store[3].name, "Marshal");
    store[3].C =  100;
    store[3].SAAD = 98;
    store[3].OOP = 81;
    store[3].COMM = 90;
    store[3].APPD = 76;
    store[3].JS = 80;

    //student:lucky
    store[4].id = 5;
    strcpy(store[4].name, "Lucky");
    store[4].C = 70;
    store[4].SAAD = 78 ;
    store[4].OOP = 98;
    store[4].COMM = 20;
    store[4].APPD = 76;
    store[4].JS = 80;
    
    int total;
    for(int i = 0; i < 5; i++){
        printf("id :%d \n", store[i].id);
        printf("Name: %s \n", store[i].name);
        printf("C: %d \n", store[i].C);
        printf("SAAD: %d \n", store[i].SAAD);
        printf("OOP: %d \n", store[i].OOP);
        printf("COMM: %d \n", store[i].COMM);
        printf("APPD: %d \n", store[i].APPD);
        printf("JS: %d \n", store[i].JS);
        total = store[i].C + store[i].SAAD+ store[i].OOP + store[i].COMM + store[i].APPD + store[i].JS;
        printf("AVG: %d \n", total/6);
        
    }
    
    



}
