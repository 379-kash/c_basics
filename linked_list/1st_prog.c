#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *head,*second,*third,*ptr;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    (*head).data=7;
    (*head).next=second;

    (*second).data=10;
    (*second).next=third;

    (*third).data=11;
    // printf("%d",(*third).data);
    (*third).next=NULL;

    ptr=head;

    while(ptr!=NULL){

        printf("%d\n",ptr->data);
        ptr=(*ptr).next;

    }

    return 0;
}