#include <iostream>
#include"pch.h"
#include <fstream>
#include<list>
using namespace std;
int sem_wait(sem_t** sem);//lock the function using semaphores
void SuperMarket::billing()
{
	
	std::string items_you_ordered;
	ifstream ip("depitems.txt");
	if (!ip.is_open()) std::cout << "ERROR: File Open" << '\n';
	string items;
	int i = 1560;
	string cost;
	//implementation of iterators
	std::list<std::string> listofitems;
	std::list<std::string> Cost;
	std::list<std::string>::iterator it;
	cout << "-----------List of Items  Availabe------------" << endl;
	while (ip.good())
	{

		std::getline(ip, item, ',');
		std::getline(ip, cost, ',');
		i++;

		std::cout << "item_id: " << i << endl;
		std::cout << "items_Name: " <<items << endl;
		std::cout << "items_Cost: " << cost << "rupees" << endl;
		listofitems.push_front(items);
		listofitems.push_front(cost);
	}
	ip.close();
	std::cout << "search whether items are present in the stock" << std::endl;
	std::cin >> items_you_ordered;
	it = std::find(listofitems.begin(), listofitems.end(), items_you_ordered);
	if (it != listofitems.end())
	{
		std::cout << "yes it is present in the stock" << std::endl;
	}
	else
	{
		std::cout << "Sorry,items Does not exist" << std::endl;
		std::cout << "-----Thank You-----" << endl;
		exit(0);
	}
	cout << "press 1 to buy the items 0 to exit" << endl;
	cin >> take;
	if (take == 1)
	{
		std::cout << "----------payment------------------" << std::endl << std::endl;
		std::cout << "-----------enter choice of payment-------------" << endl;
		std::cout << "press 1 for online payment" << endl;
		std::cout << "press 2 for cash on delivery" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "please swipe the credit card" << endl;
			cout << "enter pin" << endl;
			cin >> pin;
			while (pin != 0)
			{
				pin = pin / 10;
				count = count + 1;
			}
			if (count != 4)
			{
				cout << "re-enter your pin" << endl;
				break;
			}
			else
			{
				cout << "the amount to be paid is" << cost << endl;
			}
		case 2:
			cout << "Paid " << cost << " rupees by cash on delivery" << endl;
			cout << "Thank you" << endl;
			break;
		}
	}
	else
	{
		cout << "Items not ordered" << endl;
		exit(0);
	}
	int sem_post(sem_t * *sem);//unlock the function
}
