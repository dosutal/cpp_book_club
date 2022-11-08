#include <iostream>
#include <memory>
#include "AirlineTicket.h"

using namespace std;

int main()
{
	AirlineTicket myTicket;  // Stack-based AirlineTicket
	myTicket.setPassengerName("Sherman T. Socketwrench");
	myTicket.setNumberOfMiles(700);
	myTicket.setFrequentFlyerNumber(22);
	double cost = myTicket.calculatePriceInDollars();
	cout << "This ticket will cost $" << cost << endl;
	cout << "Frequent flyer number " << myTicket.getFrequentFlyerNumber() << endl;

	// Heap-based AirlineTicket with smart pointer
	auto myTicket2 = make_unique<AirlineTicket>();
	myTicket2->setPassengerName("Laudimore M. Hallidue");
	myTicket2->setNumberOfMiles(2000);
	myTicket2->setHasEliteSuperRewardsStatus(true);
	myTicket2->setFrequentFlyerNumber(3);
	double cost2 = myTicket2->calculatePriceInDollars();
	cout << "This other ticket will cost $" << cost2 << endl;
	cout << "Frequent flyer number " << myTicket2->getFrequentFlyerNumber() << endl;
	// No need to delete myTicket2, happens automatically

	// Heap-based AirlineTicket without smart pointer (not recommended)
	AirlineTicket* myTicket3 = new AirlineTicket();
	// ... Use ticket 3
	delete myTicket3;  // delete the heap object!

	return 0;
} 
