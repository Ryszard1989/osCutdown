#include "StockMarket.h"
#include <iterator>
#include <iostream>

      StockMarket::StockMarket(std::vector<Security> securities)
      {
          m_securities = securities;

      }

      int StockMarket::addSecurity(Security security) //Add security if new.
      {
          bool securityExists = false;
          for (int i = 0; i < m_securities.size(); i++)
          {
              if (m_securities[i].getName() == security.getName())
              {
                  securityExists = true;
              }
          }
          if(!securityExists) {
              m_securities.push_back(security);
              return 0; //Security added successfully
          }
          return 1; //Security was not added
      }

      int StockMarket::removeSecurity(std::string securityToRemove) //Remove security if it exists.
      {
          //TODO - Play with auto and auto&& for iterating over vectors
          for (std::vector<Security>::iterator it = m_securities.begin(); it!=m_securities.end();)
          {
              if (it->getName().compare(securityToRemove) == 0)
              {
                  it = m_securities.erase(it);
                  return 0; //0 = success
              }
              else { 
                  ++it;
              }
          }
          return 1; //1 = Security was not removed.
      }

      void StockMarket::displayMarket() //pretty print of Stock Market contents
      {
          for (std::vector<Security>::iterator it = m_securities.begin(); it!=m_securities.end(); it++)
          {
              std::cout << it->getName() << " - Price: " << it->getPrice() << std::endl;
          }
      }

      int StockMarket::getSecurityCount()
      {
          return m_securities.size();
      }