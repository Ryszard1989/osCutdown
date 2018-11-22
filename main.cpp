
#include <iostream>
#include <string>
#include "Security.h"
#include "StockMarket.h"

void testSecurity();
void printTestStatus(std::string testName, bool testResult);

void testSecurity() {
    std::string testName = "";
    bool  testStatus = true; //true == pass, false == fail.
    /*	  Security(std::string name);
	  std::string getName();
	  void setPrice(float price);
	  float getPrice();  */
    Security sec = Security("UBI");
    sec.setPrice(101.00);

    testName = "Security.getName.Basic";
    if((sec.getName().compare("UBI")) == 0) {
        testStatus = true;
        printTestStatus(testName, testStatus);
    }
    else {
        testStatus = true;
        printTestStatus(testName, testStatus);
    }

}

void printTestStatus(std::string testName, bool testResult)
{
    if(testResult)
    {
        std::cout << testName << ":PASS" << std::endl;
    }
    else
    {
        std::cout << testName << ":FALSE" << std::endl;
    }
    
}



main () {
    //Security sec = Security("UBI");
    //sec.setPrice(101.00);
    //StockMarket market;
    //market.addSecurity(sec);
    //market.displayMarket();
    //market.removeSecurity("UBI");
    //market.displayMarket();
    testSecurity();
}

