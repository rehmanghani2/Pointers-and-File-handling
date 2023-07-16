/*12.	Write a program for inventory and records of a small shop. The records should contain Item number, Name of item, price, and available stock. On running the program, a menu should be displayed. 
a.	Enter 1 to add a new item
b.	Enter 2 to change the values of an item
c.	Enter 3 to delete an item
d.	Enter 4 to create a receipt (e.g., if a customer has bought multiple things, then you may keep entering the item number and quantity and a receipt should be created by program with each item details and total price. Receipt should show Item name, unit price, and total item price. At the end total amount should be displayed.)
e.	Enter 5 to exit */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX_ITEMS 100
struct Item{
	int item_number;
	char item_name[100];
	float price;
	int stock;
};
struct Item inventory[MAX_ITEMS];
int item_count=0;
//prototypes
void display_menu();
void add_item();
void change_item();
void delete_item();
void create_receipt();
int main(void)
{
	int choice;
	while(1)
	{
		display_menu();
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				add_item();
				break;
			case 2:
				change_item();
				break;
			case 3:
				delete_item();
				break;
			case 4:
				create_receipt();
				break;
			case 5:
			    printf("Existing the Program.\n");
			    exit(0);
			default:
				printf("Invalid choice.Please try again.\n");			
		}
	}
	getch();
	return 0;
}
void display_menu()
{
	printf("\n********SHOP INVENTORY MANAGEMENT*********\n");
	printf("Enter 1 to add a new item \n");
	printf("Enter 2 to change the value of an item\n");
	printf("Enter 3 to delete an item\n");
	printf("Enter 4 to create a receipt\n");
	printf("Enter 5 to exit\n");
}
void add_item()
{
	if(item_count>=MAX_ITEMS)
	{
		printf("Inventory is full.Cannot add more items.\n");
		return;
	}
	struct Item new_item;
	printf("Enter the item number: ");
	scanf("%d",&new_item.item_number);
	
	printf("Enter the item name: ");
	scanf("%s",&new_item.item_name);
	
	printf("Enter the price: ");
	scanf("%f",&new_item.price);
	
	printf("Enter the available stock: ");
	scanf("%d",&new_item.stock);
	
	inventory[item_count]=new_item;
	item_count++;
	printf("Item added successfully.\n");
}
void change_item()
{
	int item_number;
	printf("Enter the item nuber to change: ");
	scanf("%d",&item_number);
	int index=-1;
	for(int i=0;i<item_count;i++)
	{
		if(inventory[i].item_number==item_number)
		{
			index=i;
			break;
		}
	}
	if(index==-1)
	{
		printf("Item not found.\n");
		return;
	}
	printf("Enter the new item name: ");
	scanf("%s",&inventory[index].item_name);
	
	printf("Enter the new price: ");
	scanf("%f",&inventory[index].price);
	
	printf("Enter the new available stock: ");
	scanf("%d",&inventory[index].stock);
	
	printf("Item updated successfully.\n");
}
void delete_item()
{
int item_number;
	printf("Enter the item number to change: ");
	scanf("%d",&item_number);
	int index=-1;
	for(int i=0;i<item_count;i++)
	{
		if(inventory[i].item_number==item_number)
		{
			index=i;
			break;
		}
	}
	if(index==-1)
	{
		printf("Item not found.\n");
		return;
	}
	for(int i=index;i<item_count-1;i++)
	{
		inventory[i]=inventory[i+1];
	}
	item_count--;
	printf("Item deleted successfully.\n");
}
void create_receipt()
{
	int item_number,quantity;
	float total_amount=0.0;
	printf("Enter the item number and quantity (0 to finish):\n");
	while(1)
	{
		printf("Item number: ");
		scanf("%d",&item_number);
		if(item_number==0)
		{
			break;
		}
		int index=-1;
		for(int i=0;i<item_count;i++)
		{
			if(inventory[i].item_number==item_number)
			{
			index=i;
			break;
		}
	    }
	if(index==-1)
	{
		printf("Item not found.\n");
		continue;
	}
	printf("Quantity: ");
	scanf("%d", &quantity);
	
	float item_total=inventory[index].price * quantity;
	total_amount+=item_total;
	
	printf("Item Name:%s \n",inventory[index].item_name);
	printf("Unit Price: %.2f\n",inventory[index].price);
	printf("Total Item Price: %.2f\n",item_total);
	printf("************************\n");	
    }
    printf("Total Amount: %.2f\n",total_amount);
}