
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Constants
//union within a struct example: http://www.wellho.net/resources/ex.php4?item=c209/tud.c

//Global definitions


typedef struct financial_data {

	float amount;
	char purchase_date[10];
	char *description;
	char *transaction_type;

} financial_data;

void print_financial_data(struct financial_data *data)
{
	printf("amount is %.2f\n", data->amount);
	printf("date is %s\n", data->purchase_date);
	printf("description: %s\n", data->description);
	printf("This is an %s transaction\n", data->transaction_type);
}

financial_data * take_in_user_info()
{
	char date[20];
	float amount;
	char *description = malloc(sizeof(char));
	char *transaction_type = malloc(sizeof(char));

	financial_data *data = malloc(sizeof(financial_data));

	printf("Enter date: ");
	scanf("%s", &date);

	printf("Enter transaction amount: ");
	scanf("%f", &amount);

	printf("Enter a description of your purchase: ");
	scanf("%s", description);

	printf("Enter expense or income: ");
	scanf("%s", transaction_type);

	data->description = malloc(strlen(description) +1);
	data->transaction_type = malloc(strlen(transaction_type) +1);

	data->amount = amount;
	strcpy(data->purchase_date, date);
	strcpy(data->description, description);
	strcpy(data->transaction_type, transaction_type);

	return data;
}

int main(void) {

	financial_data *users_fin_data = take_in_user_info();

	print_financial_data(users_fin_data);

	return EXIT_SUCCESS;
}

