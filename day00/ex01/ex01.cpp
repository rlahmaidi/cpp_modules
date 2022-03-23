#include "ex01.hpp"

int number_of_contact = 0;

void	options(void)
{
	std::cout << std::endl;
	std::cout << "enter :" << std::endl;
	std::cout << "ADD : to create a new contact" << std::endl;
	std::cout << "SEARCH : to search a contact in your phonebook" << std::endl;
	std::cout << "EXIT : to close your phonebook" << std::endl;
}

contact	add(void)
{
	contact	tmp_contact;
	std::string string;

	std::cin.ignore();
	std::cout << "enter first name :" << std::endl;
	std::getline(std::cin, string);
	tmp_contact.set_first_name(string);
	std::cout << "enter last name :" << std::endl;
	std::getline ( std::cin, string);
	tmp_contact.set_last_name(string);
	std::cout << "enter nick name :" << std::endl;
	std::getline(std::cin, string);
	tmp_contact.set_nick_name(string);
	std::cout << "enter phone number :" << std::endl;
	std::getline (std::cin, string);
	tmp_contact.set_phone_number(string);
	std::cout << "enter darkest secret :" << std::endl;
	std::getline (std::cin, string);
	tmp_contact.set_darkest_secret(string);
	return(tmp_contact);
}

void	format_string(std::string str)
{
	
	if(str.size() > 10)
	str[10] = '.';
	std::cout << std::setw(10);
	std::cout << str << "|";

}

void	search(phonebook phonebook)
{
	int	i;
	int	index = 0;
	std::string string = "";
	std::cout << std::setw(10);
	std::cout << "index" << " ";
	std::cout << std::setw(10);
	std::cout << "first name" << " ";
	std::cout << std::setw(10);
	std::cout << "last name" << " ";
	std::cout << std::setw(10);
	std::cout << "nick name" << std::endl;
	i = 0;
	while(i < 8 && i < number_of_contact)
	{
		std::cout << std::setw(10);
		std::cout << i;
		format_string(phonebook.book[i].get_first_name());
		format_string(phonebook.book[i].get_last_name());
		format_string(phonebook.book[i].get_nick_name());
		std::cout << std::endl;
		std::cout << std::endl;
		i++;
	}
	std::cin.ignore();
	std::cout << "enter index of a contact :" << std::endl;
	std::getline(std::cin, string);
	index = std::atoi(string.c_str());
	if(index < 0 || index > 8)
		std::cout << "index should be between 0 and 7";
	else if(index > number_of_contact)
		std::cout << "sorry this contact doesn't exit yet" << std::endl;
	else
	{
		std::cout << "index : " << index << std::endl;
		std::cout << "first name : " << phonebook.book[index].get_first_name() << std::endl;
		std::cout << "last name : " << phonebook.book[index].get_last_name() << std::endl;
		std::cout << "nick name : " << phonebook.book[index].get_nick_name() << std::endl;
		std::cout << std::endl;
	}
}

void	exit_(void)
{
	exit(0);
}

int	main()
{
	//connstructor and destructor still not defined;
	phonebook	phonebook;
	int			i;
	std::string	command;

	i = 0;
	command = "0";
	while(1)
	{
		options();
		std::cin >> command;
		
		if(!command.compare("ADD"))
		{
			phonebook.book[i % 8] = add();
			i++;
			number_of_contact++;
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