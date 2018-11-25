#ifndef STOCKMARKET_H
#define STOCKMARKET_H

#include <vector>

#include "Security.h"

class StockMarket {
    std::vector <Security> m_securities;

    public:
      StockMarket() {} ;
      StockMarket(std::vector<Security> securities);
      int addSecurity(Security security); //Add security if new.
      int removeSecurity(std::string security); //Remove security if it exists.
      void displayMarket(); //pretty print of Stock Market contents
      int getSecurityCount(); //return number of securities in stock market
};

#endif