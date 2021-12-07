#include<stdio.h>
#include<malloc.h>
struct Student
{
int data;
struct Student *next;
};

Student *head = NULL;

void insert(int value)
{
  Student *New_Node = (Student*)malloc(sizeof(Student));
  New_Node->data = value;
  New_Node->next = head;
  head = New_Node; 
}

void insert_mdd(int value, int pos)
{
Student *temp;
temp=head;
Student *New_Node = (Student *)malloc(sizeof(Student));
int i = 1;
while((temp->next != NULL) && (i < pos))
{
temp = temp->next;
i++;
}
New_Node->data = value;
New_Node->next = temp->next;
temp->next = New_Node;
}

void insert_end(int value)
{
Student *temp;
temp = head;
Student *New_Node = (Student *)malloc(sizeof(Student));
while(temp->next != NULL)
{
 temp = temp->next;
}

New_Node->data = value;
temp->next = New_Node;
New_Node->next=NULL;
}
void display()
{
Student *temp;
temp=head;
while(temp!= NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
printf("\n");
}

void delete_Beg()
{
Student *temp = head;
head = temp->next;
free(temp);
} 

void delete_End()
{
Student *temp = head;
Student *Last_Node;
while(temp->next->next != NULL)
{
temp = temp->next;
}
Last_Node = temp->next;
temp->next = NULL;
free(Last_Node);
}

void delete_Mdd(int pos)
{
Student *temp = head;
Student *Mdd_Node;
int i =1;
while((temp->next != NULL ) && (i < pos-1))
{
temp = temp->next;
i++;
}

Mdd_Node = temp->next;
temp->next = Mdd_Node->next;
free(Mdd_Node);
}

int main()
{
insert(3);
insert(10);
insert(30);
insert(7);
display();
printf("---------------\n");
printf("---------------\n");
insert_mdd(20,2);
insert_end(100);
display();
printf("---------------\n");
printf("---------------\n");
//delete_Beg();
//delete_End();
delete_Mdd(3);
display();
return 0;
}

