/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:59:29 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/22 09:30:38 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

/*Orthodox Canonical Form*/
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 75)
{
	this->_targetName = "default_shrubbery";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : AForm(copy), _targetName(copy._targetName)
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy)
{
	if (this != &copy)
		this->_targetName = copy._targetName;
	return (*this);
}
/*-------------------------------------*/

/*Constructors*/
ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : AForm("ShrubberyCreationForm", 145, 75)
{
	this->_targetName = name + "_shrubbery";
}
/*-------------------------------------*/

/*Member Functions*/
void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > 145)
		throw GradeTooLowException();
	if (this->getSigned())
	{
		std::ofstream	createFile;
		std::string	out_filename = _targetName;
		const char *out_file = out_filename.c_str();
		createFile.open(out_file);
		createFile << "                       O                         " << std::endl;
		createFile << "                      ***                        " << std::endl;
		createFile << "                     **O**                       " << std::endl;
		createFile << "                    *******                      " << std::endl;
		createFile << "                   *********                     " << std::endl;
		createFile << "                  ***********                    " << std::endl;
		createFile << "                   ******o**                     " << std::endl;
		createFile << "                  ***********                    " << std::endl;
		createFile << "                 ****o********                   " << std::endl;
		createFile << "                ***************                  " << std::endl;
		createFile << "               ****o***o********                 " << std::endl;
		createFile << "              *******************                " << std::endl;
		createFile << "            ***********************              " << std::endl;
		createFile << "               *****O***********                 " << std::endl;
		createFile << "              **********o********                " << std::endl;
		createFile << "             ****************o****               " << std::endl;
		createFile << "            **O********************              " << std::endl;
		createFile << "           ***********o********O****             " << std::endl;
		createFile << "         *****************************           " << std::endl;
		createFile << "             *********************               " << std::endl;
		createFile << "            ***o*******************              " << std::endl;
		createFile << "           ***********o*******o*****             " << std::endl;
		createFile << "          ***************************            " << std::endl;
		createFile << "         ***********************O*****           " << std::endl;
		createFile << "        ***O***************************          " << std::endl;
		createFile << "      ***********************************        " << std::endl;
		createFile << "           *************************             " << std::endl;
		createFile << "          *******o********o**********            " << std::endl;
		createFile << "         *****************************           " << std::endl;
		createFile << "        **************o****************          " << std::endl;
		createFile << "       *************************O*******         " << std::endl;
		createFile << "      *****O*****************************        " << std::endl;
		createFile << "    **************o************************      " << std::endl;
		createFile << "          ***************************            " << std::endl;
		createFile << "         *************o***************           " << std::endl;
		createFile << "        ***********o*******************          " << std::endl;
		createFile << "       **************************O******         " << std::endl;
		createFile << "      ***o******************O************        " << std::endl;
		createFile << "    ***o***********o****************o******      " << std::endl;
		createFile << "                      ###                        " << std::endl;
		createFile << "                      ###                        " << std::endl;
		createFile << "                      ###                        " << std::endl;
		createFile << "                  ###########                    " << std::endl;
		createFile << "                  ###########                    " << std::endl;
		createFile.close();
	}
	else
		std::cout << "Cannot execute because Form is not signed!" << std::endl;
}
/*-------------------------------------*/
