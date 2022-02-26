#include "ex01.hpp"

void	options(void)
{
	cout << endl;
	cout << "enter :" << endl;
	cout << "ADD : to create a new contact" << endl;
	cout << "SEARCH : to search a contact in your phonebook" << endl;
	cout << "EXIT : to close your phonebook" << endl;
}

contact	add(void)
{
	contact	tmp_contact;

	cout << "enter first name :" << endl;
	cin >> tmp_contact.first_name;
	cout << "enter last name :" << endl;
	cin >> tmp_contact.last_name;
	cout << "enter nick name :" << endl;
	cin >> tmp_contact.nick_name;
	cout << "enter phone number :" << endl;
	cin >> tmp_contact.phone_number;
	cout << "enter darkest secret :" << endl;
	cin >> tmp_contact.darkest_secret;
	return(tmp_contact);
}

void	format_string(string str)
{
	
	if(str.size() > 10)
	str[10] = '.';
	cout << setw(10);
	cout << str << "|";

}

void	search(phonebook phonebook)
{
	int	i;
	int	index;
	// for now i'm gonna pretend that the phonebook always have 8 contacts, but it may not;
	cout << setw(10);
	cout << "index" << " ";
	cout << setw(10);
	cout << "first name" << " ";
	cout << setw(10);
	cout << "last name" << " ";
	cout << setw(10);
	cout << "nick name" << endl;
	i = 0;
	while(i < 8)
	{
		cout << setw(10);
		cout << i;
		format_string(phonebook.book[i].first_name);
		format_string(phonebook.book[i].last_name);
		format_string(phonebook.book[i].nick_name);
		cout << endl;
		cout << endl;
		i++;
	}
	cout << "enter index of a contact :" << endl;
	cin >> index;
	if(index < 0 || index > 8)
		cout << "index should be between 0 and 7";
	else
	{
		cout << "index : " << index << endl;
		cout << "first name : " << phonebook.book[index].first_name << endl;
		cout << "last name : " << phonebook.book[index].last_name << endl;
		cout << "nick name : " << phonebook.book[index].nick_name << endl;
		cout << endl;
	}
}

void	exit_(void)
{
	exit(0);
}

int	main()
{
	phonebook	phonebook;
	int			i;
	string	command;

	i = 0;
	command = "0";
	while(1)
	{
		options();
		cin >> command;
		
		if(!command.compare("ADD"))
		{
			phonebook.book[i % 8] = add();
			i++;
		}
		else if (!command.compare("SEARCH"))
		{
			search(phonebook);
		}
		else if (!command.compare("EXIT"))
		{
			exit_();
		}
	}
	return(0);
}