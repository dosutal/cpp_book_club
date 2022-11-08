#pragma once

#include <string>

class AirlineTicket
{
public:
	AirlineTicket();
	~AirlineTicket();

	double calculatePriceInDollars() const;
	
	const std::string& getPassengerName() const;
	void setPassengerName(const std::string& name);

	int getNumberOfMiles() const;
	void setNumberOfMiles(int miles);
	
	bool hasEliteSuperRewardsStatus() const;
	void setHasEliteSuperRewardsStatus(bool status);

	int getFrequentFlyerNumber() const;
	void setFrequentFlyerNumber(int number);

private:
	std::string mPassengerName;
	int mNumberOfMiles;
	bool mHasEliteSuperRewardsStatus;
	int mfrequentFlyerNumber;
};

