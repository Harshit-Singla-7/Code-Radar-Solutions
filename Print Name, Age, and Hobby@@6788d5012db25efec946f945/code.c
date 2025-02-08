#include <stdio.h>
int main() {
    int age;
    char name[100],hobby[100];
    scanf("%d",&age);
    scanf("%s",&name);
    scanf("%s",&hobby);
    printf("Name: %c\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %c\n",hobby);

    return 0;
}