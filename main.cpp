
#include <iostream>
#include <string>
#include "Security.h"
#include "StockMarket.h"

void testSecurity();
void printTestStatus(std::string testName, bool testResult);

Security testSecuritySetup() {
    Security sec = Security("UBI");
    sec.setPrice(101.00);
    return sec;
}

void testSecurity() {
    std::string testName = "";
    bool  testStatus = true; //true == pass, false == fail.
    Security sec = testSecuritySetup();

    testName = "Security.getName.Basic";
    if((sec.getName().compare("UBI")) == 0) {
        testStatus = true;
        printTestStatus(testName, testStatus);
    }
    else {
        testStatus = false;
        printTestStatus(testName, testStatus);
    }

    testName = "Security.getPrice.Basic";
    if(sec.getPrice() == 101.00) {
        testStatus = true;
        printTestStatus(testName, testStatus);
    }
    else {
        testStatus = false;
        printTestStatus(testName, testStatus);
    }
}

void testStockMarket() {
    std::string testName = "";
    Security sec = testSecuritySetup();
    StockMarket market;
    market.addSecurity(sec);
    
    testName = "StockMarket.addSecurity.Basic";
    bool addedToStockMarket = false;
    bool nameIsRight = false;
    bool priceIsRight = false;
    //TODO - Finish test for add security. Test basic attributes of Security inside stockmarket.

    //market.displayMarket();
    //market.removeSecurity("UBI");

    



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
    //StockMarket market;
    //market.addSecurity(sec);
    //market.displayMarket();
    //market.removeSecurity("UBI");
    //market.displayMarket();
    testSecurity();
}

