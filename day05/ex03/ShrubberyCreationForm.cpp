#include "ShrubberyCreationForm.hpp"
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm default constructor called " << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): Form("ShrubberyCreationForm",145, 137, target)
{
    std::cout << "ShrubberyCreationForm parametrized constructor called " << std::endl;

}
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
        std::cout << "ShrubberyCreationForm default destructor called " << std::endl;

}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& sh)
{
    *this = sh;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& sh)
{
    Form::operator=(sh);
	return(*this);
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const 
{
if (getSign() == true  && getExcuteGrade() >= executor.getGrade())
    {
        std::string s = getTarget() + "_shrubbery";
        std::ofstream file(s);
		if (!file.is_open())
			return;
		file << "		                                                               &   &&   #                   \n";
		file << "                                                                 .&.#&&&&&&&&&                      \n";
		file << "                (%/.%%,  %          (   && #                   %&&&&&&&&&&&&&&(                     \n";
		file << "                   %%%%%%%%%.%%       &&&&&&&             (& (&&&&&&&&&&&&&&#                       \n";
		file << "         .         %%%%%%%%%%%%% %   &%,&&&&&&% &       #*&&&&&&&&&&&&                              \n";
		file << "    .&&&&&&&&& &&/ *(%%%%%%%%%%%%%% .%,&&&&&&&&&&      (&&&&&&&&&&&&%                               \n";
		file << "   ,&&&&&&&&&&&&&&&&&# %& %%%%%%%%%%%%%.&&&&&&&&& *& &,&&&&&&&&&&&&      %#  %%,                    \n";
		file << "  *&&&&&&&&&&&&&&&&&&&&&&&&%%%%%%%%%%%%%%%&&&&&&&&& .&&&&&&&&&&& %. .%*%%%%%%%%%%%%%%%%(            \n";
		file << "        .*/(#&&&&&&&&&&&&&&&&%%%%%%%%%%%%%&&&&&&&&&&&&&&&&&&&&%%%%#%%%%%%%%%%%%%%%%%#               \n";
		file << "                ./#&&&&&&&&&&&&&%%%%%%%%%%%&&&&&&&&&&&&&&&&&%%%%%%%%%%%%%%%%%%%%%%(                 \n";
		file << "                    #&&&&&&&&&&&&&,%%%%%%%%%&&&&&&&&&&&&&%%%%%%%%%%%%%%%%%%%&/                      \n";
		file << "                       (&&&&&&&&&&%%%%%%%%%%%%&&&&&&&&%&%%%%%%%%%%%%%%%%   &.&&&   %% *&&           \n";
		file << "                    /     /&&&&&&&&%%%%%%%%%%%&&&&&&&%%%%%%%%%%%%%*  %&#&&&&&&&&&&&&&&&&&&&&&       \n";
		file << "           ########% ##.#   *%&&&&&%%&%%%%%%%%&%&&%&%%%%%%%%%%%%%&(&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&# \n";
		file << "      %####################,#  ,&&&&%&&%%%%%%%%%&&%%%%%%%%%%%%%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
		file << "       ##%/###################%#&&&&&&%%%%%%%%%&%&%%%%%%%%%%%%&&&&&&&&&&&&&&&&&&&&#  #&/  #&&. #&/  \n";
		file << "                 (%%#############%.(&&%&%%%%%%%%%%%%%%%%%%%%&&&&&&&&&&%(/*.                         \n";
		file << "                        (%##########&&&&%&%%%%%%%%%%%%%%&&&&&&&&((#&##%###  //                      \n";
		file << "                          .%##########&&&%%%%%%%%%%%#&%%&&#&####################%%#,                \n";
		file << "                               /%######%%%%%%%%%%%%%%&&#%############################/              \n";
		file << "                                 ########%%%%%%%%%%%%################. /%##*##/########(            \n";
		file << "                                   .####(((%%%%%%%%#(((%######% *                  % #/             \n";
		file << "                                     #((((((((((((((%#%%*                                           \n";
		file << "                                     #((((((((((((((((   *(%%                                       \n";
		file << "                                 (/  .(((((((((%(((%  /%(*                                          \n";
		file << "                                       #(%%%%((%%%%##                                               \n";
		file << "                                           %%%%%                                                    \n";
		file.close();
    

    }
    else
        throw Form::GradeTooLowException();
}