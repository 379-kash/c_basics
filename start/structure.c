#include<stdio.h>
#include<string.h>
struct book_shop
{
    /* data */
    char book_name[20];
    char auth_name[20];
    int no_of_copy;
    int price;
    int ID;

}Book[5];

int main()
{
    strcpy(Book[0].book_name,"ANSI C");
    strcpy(Book[0].auth_name,"balagurusamy");
    Book[0].no_of_copy=5;
    Book[0].price=699;

    strcpy(Book[1].book_name,"EP");
    strcpy(Book[1].auth_name,"malvino");
    Book[1].no_of_copy=6;
    Book[1].price=799;

    strcpy(Book[2].book_name,"MOS");
    strcpy(Book[2].auth_name,"aktayal");
    Book[2].no_of_copy=15;
    Book[2].price=300;

    strcpy(Book[3].book_name,"LE1");
    strcpy(Book[3].auth_name,"millman");
    Book[3].no_of_copy=5;
    Book[3].price=699;

    strcpy(Book[4].book_name,"NA");
    strcpy(Book[4].auth_name,"valkenburg");
    Book[4].no_of_copy=8;
    Book[4].price=599;

    char ask_book_name[20];
    int ask_no_0f_copy;
    int check=1;
    int cnt=0;
    
while(check){
    cnt=0;
    printf("please enter name of book you want\n");
    scanf("%s",ask_book_name);
    printf("please enter number of copy you want\n");
    scanf("%d",&ask_no_0f_copy);
    for(int i=0;i<5;i++)
    {
        if(!strcmp(Book[i].book_name,ask_book_name) && ask_no_0f_copy<Book[i].no_of_copy)
        {
            printf("processasing your order.....\n");
            printf("Book name is %s\nTotal price is %d\n",ask_book_name,ask_no_0f_copy*Book[i].price);
            Book[i].no_of_copy-=ask_no_0f_copy;
            cnt++;
        }
        if(cnt==0 &&i==4)
        {
            printf("sorry your recomended book is not avalable\n");
        }
        if(i==4)
        {
        printf("would you like to buy any other book?");
        scanf("%d",&check);
        }
        
    }
}
}
