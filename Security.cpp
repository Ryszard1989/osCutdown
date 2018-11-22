#include "Security.h"

Security::Security(std::string name) { 
	    m_name = name;
}

std::string Security::getName() {
	    return m_name;
}

void Security::setPrice(float price){
	    m_price = price;
}

float Security::getPrice() {
	    return m_price;
}