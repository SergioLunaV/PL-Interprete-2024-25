/*!
    \file    stringVariable.hpp
    \brief   Declaration of stringVariable class
    \author
    \date    2025-06-09
    \version 1.0
*/

#ifndef _stringVARIABLE_HPP_
#define _stringVARIABLE_HPP_

#include <string>
#include <iostream>

#include "variable.hpp"

/*!
    \namespace lp
    \brief Name space for the subject Language Processors
*/
namespace lp{

/*!
  \class stringVariable
  \brief Definition of atributes and methods of stringVariable class
  \note  stringVariable class publicly inherits from Variable class
*/
class stringVariable:public lp::Variable
{
/*!
\name Private atributes of stringVariable class
*/
    private:
        std::string     _value;     //!< \brief String value of the stringVariable

/*!
\name Public methods of stringVariable class
*/
    public:

/*!
    \name Constructors
*/

/*!		
	\brief Constructor with arguments with default values
	\note  Inline function that uses Variable's constructor as members initializer
	\param name:  name of the stringVariable
	\param token: token of the stringVariable
	\param type:  type of the stringVariable
	\param value: string value of the stringVariable
	\pre   None
	\post  A new stringVariable is created with the values of the parameters
	\sa   setName, setValue
*/
    inline stringVariable(std::string name = "", int token = 0, int type = 0, std::string value = ""):
    Variable(name,token,type)
    {
        this->setValue(value);
    }

/*!		
	\brief Copy constructor
	\note  Inline function
	\param n: object of stringVariable class
	\pre   None
	\post  A new stringVariable is created with the values of an existent stringVariable
	\sa    setName, setValue
*/
	inline stringVariable(const stringVariable & n)
	{
		// Inherited methods
		this->setName(n.getName());

		this->setToken(n.getToken());

		this->setType(n.getType());
		
		// Own method
		this->setValue(n.getValue());
	}


/*!	
	\name Observer
*/
	
/*!	
	\brief  Public method that returns the value of the stringVariable
	\note   Inline function
	\pre    None
	\post   None
    \return Value of the stringVariable
	\sa		getValue
*/
	inline std::string getValue() const
	{
		return this->_value;
	}


/*!	
	\name Modifier
*/
		
/*!	
	\brief   This function modifies the value of the stringVariable
	\note    Inline function
	\param   value: new value of the stringVariable
	\pre     None
	\post    The value of the stringVariable is equal to the parameter 
	\return  void
	\sa 	 setValue
*/
	inline void setValue(std::string value)
	{
	    this->_value = value;
	}


/*!	
	\name I/O Functions
*/
		
/*!		
	\brief Read a stringVariable
	\pre   None
	\post  The atributes of the stringVariable are modified with the read values
    \sa    write
*/
	void read();

	
/*!		
	\brief Write a stringVariable
	\pre   None
	\post  None
    \sa    read
*/
	void write() const;


/*!	
	\name Operators
*/
	
/*!		
	\brief  Assignment Operator
	\param  n: object of stringVariable class
	\post   The atributes of this object are equal to the atributes of the parameter
	\return Reference to this object
*/
	stringVariable &operator=(const stringVariable &n);
	

 //! \name Friend functions
/*!		
	\brief  Insertion operator
	\param  i: input stream
	\param  n: object of stringVariable class
	\pre    nome
	\post   The atributes of the stringVariable are modified with the inserted values from the input stream
	\return The input stream
*/
	friend std::istream &operator>>(std::istream &i, stringVariable &n);

/*!		
	\brief  Extraction operator
	\param  o: output stream
	\param  n: object of stringVariable class
	\pre    nome
	\post   The atributes of the stringVariable are written in the output stream
	\return The output stream
*/
	friend std::ostream &operator<<(std::ostream &o, stringVariable const &n);
	
// End of stringVariable class
};

// End of name space lp
}

// End of _stringVARIABLE_HPP_
#endif