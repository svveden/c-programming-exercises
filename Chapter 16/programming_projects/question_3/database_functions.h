#define MAX_NAME_LENGTH 25

struct part{
	int number;
	char name[MAX_NAME_LENGTH+1];
	int in_stock;
};

int read_line(char str[], int n);
int insert(struct part a[], int inventory_position, int number, char name[MAX_NAME_LENGTH+1], int in_stock);
void search_item(struct part a[], int inventory_position, int number);
void update_item(struct part a[], int inventory_position, int number, int update);
void print_inventory(struct part a[], int inventory_position);
