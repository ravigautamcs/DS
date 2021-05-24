#include<stdio.h>
#include<stdlib.h>

struct Node {
    char data;
    struct Node *next;
}*top=NULL;

void push(char x){
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));
    if(t==NULL){
        printf("stack is full\n");
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

void Display(){
    struct Node *p;
    p=top;
    if(p==NULL){
        printf("stack is empty\n");
    }
    else{
        while(p!=NULL){
            printf("%c\n", p->data);
            p=p->next;
        }
    }
}

void pop(){
    struct Node *p;
    p=top;
    if(p==NULL){
        printf("stack is empty\n");
    }
    else{
        top=p->next;
        free(p);
    }
}

int isBalance(char *exp){
    for(int i=0; exp[i]!='\0'; i++){
        if(exp[i]=='('){
            push(exp[i]);
        }
        else if(exp[i]==')'){
            if(top==NULL){
                return 0;
            }
            pop();
        }
    }
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    char *exp="((((a+b)*(c-d)))";
    int x=isBalance(exp);
    if(x==1){
        printf("YES");
    }
    else {
        printf("NO");
    }
    printf("\n");
    // push('c');
    // push('d');
    // push('e');
    // pop();
    //pop();
    //Display();

    return 0;
}