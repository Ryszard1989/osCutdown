#ifndef SECURITY_H
#define SECURITY_H

#include <string>

class Security {
	std::string m_name;
	float m_price;
	
	public:
	  Security(std::string name);
	  std::string getName();
	  void setPrice(float price);
	  float getPrice();  
};

#endif
