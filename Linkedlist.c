#include<stdio.h>
#include<stdlib.h>
struct node
{
    int item;
    struct node *next;
};

void insertAtLast(struct node **s,int data)
{
    struct node *n,*t;
    n=(struct node *)malloc(sizeof(struct node));
    n->item=data;
    n->next=NULL;
    if(*s==NULL)
        *s=n;
    else
    {
        t=*s;
        while(t->next!=NULL)
            t=t->next;
        t->next=n;
    }
}

void insertAtStart(struct node **s,int data)
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    n->next=*s;
    *s=n;
}

void insertAtanywhere(struct node **s,int searchitem,int data)
{
    struct node *t,*n;
    n=(struct node*)malloc(sizeof(struct node));
    t=*s;
    while(t->next!=NULL)
    {
        if(t->item==searchitem)
            break;
        t=t->next;
    }
    if(t->next!=NULL)
      {
            n->item=data;
            n->next=t->next;
            t->next=n;
      }
    else
    {
        if(t->item==searchitem)
        {
            n->item=data;
            n->next=t->next;
            t->next=n;
        }
    }
}

void deleteFirst(struct node **s)
{
    struct node *r;
    if(*s==NULL)
    printf("List is Empty");
    else
    {
      r=*s;
      *s=r->next;
      free(r);
    }
}

void deleteLast(struct node **s)
{
    struct node *t1,*t2;
    if(*s==NULL)
        printf("List is empty");
    else
    {
        t1=*s;
        t2=NULL;
        while(t1->next!=NULL)
        {
            t2=t1;
            t1=t1->next;
        }
        if(t2==NULL)
            *s=t2;
        else
            t2->next=NULL;
          free(t1);
    }
}

void deleteAtanywhere(struct node **s,int searchitem)
{
    struct node *t1,*t2;
    t1=*s;
    t2=NULL;
    while(t1->next!=NULL)
    {
        if(t1->item==searchitem)
            break;
        t2=t1;
        t1=t1->next;
    }
    if(t1->next!=NULL)
    {
        if(t2==NULL)
            *s=t1->next;
        else
           t2->next=t1->next;
        free(t1);
    }
    else
    {
        if(t1->item==searchitem)
        {
            t2->next=t1->next;
            free(t1);
        }
    }
}

struct node *concatenate(struct node **h1,struct node **h2)
{
	struct node *t;
	struct node *c1;
	struct node *c2;
	if(*h1==NULL && *h2==NULL)
	{
		printf("List is Empty!!");
	}
	else
	{
		if(*h1==NULL)
		{
			c2=*h2;
			while(c2->next!=NULL)
			{
				insertAtLast(&t,c2->item);
				c2=c2->next;
			}
		}
		else if(*h2==NULL)
		{
			c1=*h1;
			while(c1->next!=NULL)
			{
				insertAtLast(&t,c1->item);
				c1=c1->next;
			}
		}
		else
		{
			c1=*h1;
			c2=*h2;
			while(c1->next!=NULL)
			{
				insertAtLast(&t,c1->item);
				c1=c1->next;
			}
			while(c2->next!=NULL)
			{
				insertAtLast(&t,c2->item);
				c2=c2->next;
			}
		}
	}
	return t;
}

void viewNode(struct node *s)
{
    struct node *v;
    if(s==NULL)
        printf("Unavailable");
    else
    {
        v=s;
        while(v->next!=NULL || v->next==NULL)
        {
            printf("\n%d",v->item);
            v=v->next;
        }
    }
}

main()
{
    struct node *start=NULL;
    struct node *h1=NULL;
    struct node *h2=NULL;
    insertAtStart(&start,40);
    insertAtLast(&start,50);
    //deleteFirst(&start);
    //deleteLast(&start);
    insertAtLast(&h1,10);
    insertAtLast(&h1,20);
    insertAtLast(&h1,30);
    insertAtLast(&h2,40);
    insertAtLast(&h2,50);
    insertAtLast(&h2,60);
    insertAtanywhere(&start,40,20);
    deleteAtanywhere(&start,50);
    start = concatenate(&h1,&h2);
    viewNode(start);
    printf("................................");
    viewNode(h1);
    printf("................................");
    viewNode(h2);
}