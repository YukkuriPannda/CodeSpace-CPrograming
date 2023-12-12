#include <stdio.h>

int main(void)
{
    PersonCard personCard;
    return 0;
}
typedef struct
{
    int id;
    char name[30];
    char reason[50];
} PersonCard;

PersonCard Gate(PersonCard *personCard_ip){
    printf("学籍、職員番号を入力");
    scanf("%d",personCard_ip->id);
    
    printf("名前を入力");
    scanf("%s",personCard_ip->name);

    printf("入校理由を入力");
    scanf("%s",personCard_ip->reason);
}