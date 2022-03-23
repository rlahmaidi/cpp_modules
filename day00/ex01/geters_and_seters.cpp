#include "ex01.hpp"

std::string		contact::get_first_name(void)
{
	return(this->first_name);
}

std::string		contact::get_last_name(void)
{
	return(this->last_name);
}

std::string		contact::get_nick_name(void)
{
	return(this->nick_name);
}

std::string		contact::get_phone_number(void)
{
	return(this->phone_number);
}

std::string		contact::get_darkest_secret(void)
{
	return(this->darkest_secret);
}


void	contact::set_first_name(std::string string)
{
	this->first_name = string;
}

void	contact::set_last_name(std::string string)
{
	this->last_name = string;
}
void	contact::set_nick_name(std::string string)
{
	this->nick_name = string;
}

void	contact::set_phone_number(std::string string)
{
	this->phone_number = string;
}

void	contact::set_darkest_secret(std::string string)
{
	this->darkest_secret = string;
}