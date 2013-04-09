
#ifndef SEARCHING_H
#define SEARCHING_H

#include <string>
#include vector



/**
  * class searching
  * 
  */

class searching
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  searching ( );

  /**
   * Empty Destructor
   */
  virtual ~searching ( );

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @return string
   */
  string by_year ( )
  {
  }


  /**
   * @return string
   */
  string by_author ( )
  {
  }


  /**
   * @return string
   */
  string by_name ( )
  {
  }


  /**
   * @return string
   */
  string by_category ( )
  {
  }


  /**
   * @return string
   */
  string by_language ( )
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  int year;
  string author;
  string category;
  string name;
  string language;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of year
   * @param new_var the new value of year
   */
  void setYear ( int new_var )   {
      year = new_var;
  }

  /**
   * Get the value of year
   * @return the value of year
   */
  int getYear ( )   {
    return year;
  }

  /**
   * Set the value of author
   * @param new_var the new value of author
   */
  void setAuthor ( string new_var )   {
      author = new_var;
  }

  /**
   * Get the value of author
   * @return the value of author
   */
  string getAuthor ( )   {
    return author;
  }

  /**
   * Set the value of category
   * @param new_var the new value of category
   */
  void setCategory ( string new_var )   {
      category = new_var;
  }

  /**
   * Get the value of category
   * @return the value of category
   */
  string getCategory ( )   {
    return category;
  }

  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName ( string new_var )   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  string getName ( )   {
    return name;
  }

  /**
   * Set the value of language
   * @param new_var the new value of language
   */
  void setLanguage ( string new_var )   {
      language = new_var;
  }

  /**
   * Get the value of language
   * @return the value of language
   */
  string getLanguage ( )   {
    return language;
  }
private:


  void initAttributes ( ) ;

};

#endif // SEARCHING_H
