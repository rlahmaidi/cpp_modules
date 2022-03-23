#include <iostream>
#include <iomanip> // for the setw function;

class contact
{
	private:

	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkest_secret;

	public:

			std::string	get_first_name(void);
			std::string	get_last_name(void);
			std::string	get_nick_name(void);
			std::string	get_phone_number(void);
			std::string	get_darkest_secret(void);

			void	set_first_name(std::string string);
			void	set_last_name(std::string string);
			void	set_nick_name(std::string string);
			void	set_phone_number(std::string string);
			void	set_darkest_secret(std::string string);
};

class phonebook
{
	public:

	contact	book[8];

	contact	add(void);
	void	search(phonebook phonebook);
	void	exit_(void); 
};