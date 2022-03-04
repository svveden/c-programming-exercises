#define MAX_NAME_LENGTH 25

struct part{
	int number;
	char name[MAX_NAME_LENGTH+1];
	int in_stock;
	struct part *next;
};

int read_line(char str[], int n);
void insert(int number, char name[MAX_NAME_LENGTH+1], int in_stock);
void search_item(int number);
void update_item(int number, int update);
void print_inventory();
void erase(int number);
