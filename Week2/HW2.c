#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 20
struct info {
	char *FN;
	char *SN;
	int Salary;
	struct info *next;
};

void print_list(struct info *n)
{
	while (n != NULL) {
		printf("%s %s %d\n",n->FN,n->SN,n->Salary);
		//printf("%d\n", n->Salary);
		n = n->next;
	}
}

struct info *create_node(char *first, char *sur,int S,struct info *nxt)
{	
	printf("%s\n", first);
	printf("%s\n", sur);
	

	struct info *new_employee = NULL;
	new_employee = (struct info*)malloc(1*sizeof(struct info));
	new_employee -> FN = (char*)malloc(MAX_CHAR * sizeof(char));
	new_employee -> SN = (char*)malloc(MAX_CHAR * sizeof(char));
	
	strncpy(new_employee -> FN,first,MAX_CHAR);
	strncpy(new_employee -> SN,sur,MAX_CHAR);
	
	new_employee->FN = first;
	new_employee->SN = sur;
	new_employee->Salary = S;
	new_employee->next = nxt;

	return new_employee;

}

struct info *add_node (struct info *list,struct info *new_node)
{
	new_node->next = list;
	list = new_node;

	return list;
}

int main(int argc, const char *argv[])
{
	struct info *list_head = NULL;
	//list_head = create_node(0,0,0,NULL);

	char *Firstname;
	char *Surname;
	int S;
	int y;

	Firstname = (char*)malloc(MAX_CHAR * sizeof(char));
	Surname = (char*)malloc(MAX_CHAR * sizeof(char));


	while(1){
		printf("Input?(1)/Print List(2)/exit(0)");
		scanf("%d",&y);

		if (y == 1 )
		{
			printf("first namae: \n");
			scanf("%19s",Firstname);
			printf("last name: \n");
			scanf("%19s", Surname);
			printf("Salary: \n");
			scanf("%d",&S);
			list_head = 
				add_node(list_head,
					 create_node
					 (Firstname,Surname,S,NULL));
		}
		else if(y == 2)
		{
			print_list(list_head);
			
		}
		else if(y == 0)
		{
			break;
		}
		
	}
	return 0;
}
