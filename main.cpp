
#include <iostream>
#include <string>
#include "Security.h"
#include "StockMarket.h"

main () {
    Security sec = Security("UBI");
    sec.setPrice(101.00);
    StockMarket market;
    market.addSecurity(sec);
    market.displayMarket();
    market.removeSecurity("UBI");
    market.displayMarket();
}
