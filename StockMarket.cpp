#include "StockMarket.h"
#include <iterator>
#include <iostream>

      StockMarket::StockMarket(std::vector<Security> securities)
      {
          m_securities = securities;

      }

      int StockMarket::addSecurity(Security security) //Add security if new.
      {
          m_securities.push_back(security); //TODO - Look at vector return for unique/failure?
      }

      int StockMarket::removeSecurity(std::string securityToRemove) //Remove security if it exists.
      {
          std::cout << "remove" << std::endl;
          //TODO - Play with auto and auto&& for iterating over vectors
          for (std::vector<Security>::iterator it = m_securities.begin(); it!=m_securities.end();)
          {
              if (it->getName().compare(securityToRemove) == 0)
              {
                  it = m_securities.erase(it);
              }
              else { 
                  ++it;
              }
          }

      }

      void StockMarket::displayMarket() //pretty print of Stock Market contents
      {
          for (std::vector<Security>::iterator it = m_securities.begin(); it!=m_securities.end(); it++)
          {
              std::cout << it->getName() << " - Price: " << it->getPrice() << std::endl;
          }

      }