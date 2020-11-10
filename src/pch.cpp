#include <iostream>
#include "pch.h"
#include <string.h>
#include <thread>
#include <semaphore.h>
#include <errno.h>
using namespace std;
sem_t* sem;
int sem_wait(sem_t** sem);//lock the function using semaphores
SuperMarket::SuperMarket() :
	Customer_Name(""),Customerid(0),Customer_address(""), Customer_phone_number(0) {
	int sem_post(sem_t * *sem);//unlock the function
}

int sem_wait(sem_t** sem);//lock the function using semaphores
SuperMarket::SuperMarket(string Customer_Name, int Customerid, string Customer_address, int Customer_phone_number) :
	Customer_Name(Customer_Name), Customerid(Customerid), Customer_address(Customer_address), Customer_phone_number(Customer_phone_number) {
	int sem_post(sem_t * *sem);//unlock the function
}
int sem_wait(sem_t** sem);//lock the function using semaphores
SuperMarket::SuperMarket(const SuperMarket& ref) :
	Customer_Name(ref.Customer_Name), Customerid(ref.Customerid), Customer_address(ref.Customer_address), Customer_phone_number(ref.Customer_phone_number) {
	int sem_post(sem_t * *sem);//unlock the function
}
int sem_wait(sem_t** sem);//lock the function using semaphores
std::string SuperMarket::getCustomer_name(std::string Customer_name)
{
	
	return Customer_Name;
	int sem_post(sem_t * *sem);//unlock the function
	
}
int sem_wait(sem_t** sem);//lock the function using semaphores
int SuperMarket::getCustomerid(int customer_id )
{
	
	return customer_id;
	int sem_post(sem_t * *sem);//unlock the function
	
}
int sem_wait(sem_t** sem);//lock the function using semaphores
std::string SuperMarket::getCustomer_address(std::string Customer_address)
{
	
	return Customer_address;
	int sem_post(sem_t * *sem);//unlock the function
}
int sem_wait(sem_t** sem);//lock the function using semaphores
int SuperMarket::getCustomer_phone_number(int customer_phone_number)
{
	
	return customer_phone_number;
	int sem_post(sem_t * *sem);//unlock the function
	
}
