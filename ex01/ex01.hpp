#include <iostream>
#include <iomanip> // for the setw function;
using namespace std;

class contact
{
	public:

	string	first_name;
	string	last_name;
	string	nick_name;
	string	phone_number;
	string	darkest_secret;
};

class phonebook
{
	public:

	contact	book[8];

	contact	add(void);
	void	search(phonebook phonebook);
	void	exit_(void);
};