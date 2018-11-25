
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
    }
    else {
        testStatus = false;
    }
    printTestStatus(testName, testStatus);
}


void testStockMarket() {
    std::string testName = "";
    bool  testStatus = false; //true == pass, false == fail.
    Security sec = testSecuritySetup();
    StockMarket market;
    
    testName = "StockMarket.addSecurity.Basic";
    market.addSecurity(sec);
    if (market.getSecurityCount() == 1) {
        testStatus = true;
    }
    else {
        testStatus = false;
    }
    printTestStatus(testName, testStatus);

    testName = "StockMarket.addSecurity.DuplicateSecurityNameDoesNotAdd";
    int added = market.addSecurity(sec);
    if (added == 1) {
        testStatus = true;
    }
    else {
        testStatus = false;
    }
    printTestStatus(testName, testStatus);
    
    //TODO - How to access number of securities? Add getSize or have to put unit tests inside?
    //bool nameIsRight = false;
    //bool priceIsRight = false;
    
    testName = "StockMarket.removeSecurity.Basic";
    int removed = market.removeSecurity("UBI");
    if (market.getSecurityCount() == 0 && removed == 0) {
        testStatus = true;
    }
    else {
        testStatus = false;
    }
    printTestStatus(testName, testStatus);

    testName = "StockMarket.removeSecurity.SecurityDoesNotExist";
    removed = market.removeSecurity("UBI");
    if (removed == 1) {
        testStatus = true;
    }
    else {
        testStatus = false;
    }
    printTestStatus(testName, testStatus);
}








void printTestStatus(std::string testName, bool testResult)
{
    if(testResult)
    {
        std::cout << testName << ":PASS" << std::endl;
    }
    else
    {
        std::cout << testName << ":FAIL" << std::endl;
    }
    
}



main () {
    testSecurity();
    testStockMarket();
    //StockMarket market;
    //market.addSecurity(sec);
    //market.displayMarket();
    //market.removeSecurity("UBI");
    //market.displayMarket();
    
}

