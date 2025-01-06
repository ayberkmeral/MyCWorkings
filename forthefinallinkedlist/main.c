#include <stdio.h>
#include <stdlib.h>

struct node{
int info;
struct node* next;
};

typedef struct node Node;
 typedef struct node* NodePtr;

NodePtr p;
p=(NodePtr)malloc(sizeof(Node));
p->info=8;
p->next=NULL;


NodePtr q;
q=(NodePtr)malloc(sizeof(Node));
q->info=3;
q->next=p;
p=q;

NodePtr q;
q=(NodePtr)malloc(sizeof(Node));
q->info=5;
q->next=p;
p=q;

q=p;
p=p->next;
x=q->info;
free(q);

q=p;
p=p->next;
x=q->info;
free(q);

NodePtr get_node(){
NodePtr p;
p=(NodePtr)malloc(sizeof(NodePtr));
if(p==NULL){
    printf("memory allocation failed\n");
    exit(1);
}
return p;
}

void free_node(NodePtr p){
    if(p!=NULL)
        free(p);
    return;
}

NodePtr insert_head(NodePtr p,int data){
    NodePtr q;
    q=get_node();
    q->info=data;
    if(p==NULL)
        q->next=NULL;
    else
        q->next=p;
    p=q;
    return p;
}

int delete_head(NodePtr *p){
int data;
NodePtr q;

if(*p==NULL){
    printf("error:list is empty\n");
    exit(1);
}
q=*p;
data=q->info;
if((*p)->next=NULL)
    *p=NULL;
    else
        *p=*p->next;
free_node();
return data;
}

void traverse(NodePtr p){
    printf("the current list:");
    while(p!=NULL){
        printf("  -> %d",p->info);
        p=p->next;
    }
    printf("->X\n\n");
    return;
}

int search(NodePtr p,int data){
    int flag=0;
    while(p!=NULL){
        if(p->info1=data)
            p=p->next;
    }
    else
        flag=1;
    break;
return flag;
}

void insert_tail(NodePtr* p,int data){
    NodePtr q,t;
    q=get_node();
    q->info=data;
    q->next=NULL;

    t=*p;
    if(t!=NULL){
        while(t->next!=NULL)
            t=t->next;
        t->next=q;
    }
    else
        *p=q;
return;
}

NodePtr q,p,t;
p=get_node();
p->info=4;
q=list;

while(q->info>4){
    t=q;
    q=q->next;
}
p->next=q;
t->next=p;


NodePtr q,t;
q=list;
while(q!=NULL && q->info!=4){
        t=q;
q=q->next;
}

if(q!=NULL && q->info==4){
    t->next=q->next;
    free_node(q);
}


struct node{
int info;
struct node* next;
};

typedef struct node Node;
typedef Node* NodePtr;

typedef struct{
NodePtr top;
}Stack;

typedef struct{
NodePtr front, rear;
}Queue;


NodePtr list=NULL;

NodePtr p;
p=get_node();
p->info=1;
p->next=p;
list=p;

p=get_node();
p->info=2;
p->next=list;
list->next=p;


p=get_node();
p->info=3;
p->next=list;
list->next->next=p;


NodePtr q;
p=get_node();
p->info=4;
p->next=list;
q=list;
while(q->next!=list)
    q=q->next;
    q->next=p;

NodePtr list=NULL;

NodePtr p;
p=get_node();
p->info=2;
p->next=p;
list=p;

p=get_node();
p->info=3;
p->next=list;
list->next=p;
list=p;

p=get_node();
p->info=1;
p->next=list->next;
list->next=p;


NodePtr p,q,t;
p=get_node();
p->info=6;
q=list->next;

while(q->info)


int main()
{

    return 0;
}
