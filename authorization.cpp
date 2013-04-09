#include "authorization.h"

// Constructors/Destructors
//  

authorization::authorization ( ) {
initAttributes();
}

authorization::~authorization ( ) { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

void authorization::initAttributes ( ) {
  username = user;
  password = password;
  u_type = 0;
}

