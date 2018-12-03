#ifndef PORTFOLIO_H
#define PORTFOLIO_H

#include <vector>

#include "Security.h"

class Portfolio {
    //make this a pair of security : position?
    std::vector <Security> m_securities;
    //name
    //average price? (should add to stock market and keep in common?)

    public:
      Portfolio() {}; 
      Portfolio(std::vector<Security> securities);
      //Portfolio(sec, name, ????)
      //TODO - how much of this is in common with stock market? generic class for security containers?
      int addSecurity(Security security); //Add security if new.
      int removeSecurity(std::string security); //Remove security if it exists.
      void displayMarket(); //pretty print of Portfolio contents
};

#endif