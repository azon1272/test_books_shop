
#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <string>
#include vector



/**
  * class authorization
  * 
  */

class authorization
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  authorization ( );

  /**
   * Empty Destructor
   */
  virtual ~authorization ( );

  // Static Public attributes
  //  

  // Public attributes
  //  

  int u_type;

  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


  /**
   * Set the value of u_type
   * @param new_var the new value of u_type
   */
  void setU_type ( int new_var )   {
      u_type = new_var;
  }

  /**
   * Get the value of u_type
   * @return the value of u_type
   */
  int getU_type ( )   {
    return u_type;
  }


  /**
   * @return int
   */
  int get_user_type ( )
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

  string username;
  string password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of username
   * @param new_var the new value of username
   */
  void setUsername ( string new_var )   {
      username = new_var;
  }

  /**
   * Get the value of username
   * @return the value of username
   */
  string getUsername ( )   {
    return username;
  }

  /**
   * Set the value of password
   * @param new_var the new value of password
   */
  void setPassword ( string new_var )   {
      password = new_var;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  string getPassword ( )   {
    return password;
  }
private:


  void initAttributes ( ) ;

};

#endif // AUTHORIZATION_H
