
#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include vector



/**
  * class Transaction
  * 
  */

class Transaction
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Transaction ( );

  /**
   * Empty Destructor
   */
  virtual ~Transaction ( );

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void Send_query ( )
  {
  }


  /**
   * @return QString
   */
  QString Get_answer ( )
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

  QString query;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of query
   * @param new_var the new value of query
   */
  void setQuery ( QString new_var )   {
      query = new_var;
  }

  /**
   * Get the value of query
   * @return the value of query
   */
  QString getQuery ( )   {
    return query;
  }
private:


  void initAttributes ( ) ;

};

#endif // TRANSACTION_H
