
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "QMainWindow.h"

#include <string>
#include vector



/**
  * class mainwindow
  * 
  */

class mainwindow : public QMainWindow
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  mainwindow ( );

  /**
   * Empty Destructor
   */
  virtual ~mainwindow ( );

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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

  Ui::MainWindow _ui;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of _ui
   * @param new_var the new value of _ui
   */
  void set_ui ( Ui::MainWindow new_var )   {
      _ui = new_var;
  }

  /**
   * Get the value of _ui
   * @return the value of _ui
   */
  Ui::MainWindow get_ui ( )   {
    return _ui;
  }
private:


  void initAttributes ( ) ;

};

#endif // MAINWINDOW_H
