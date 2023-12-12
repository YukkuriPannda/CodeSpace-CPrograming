#include <stdio.h>

typedef struct
{
    int id;
    char name[30];
    char reason[50];
} PersonCard;
int main(void)
{
    PersonCard personCard = {
        0,"",""
    };
    Gate(&personCard);
    Disp(personCard);
    return 0;
}

void Gate(PersonCard *personCard_ip){
    printf("学籍、職員番号を入力\n");
    scanf("%d",&personCard_ip->id);
    
    printf("名前を入力\n");
    scanf("%s",&personCard_ip->name);

    printf("入校理由を入力\n");
    scanf("%s",&personCard_ip->reason);
}
void Disp(PersonCard personCard_in){
    printf("id:%d \nname:%s \nreason:%s \n"
        ,personCard_in.id,personCard_in.name,personCard_in.reason);
}