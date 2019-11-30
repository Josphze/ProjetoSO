#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#include "LinkedList.h"
#define CINQ 50
#define CEM 100

typedef struct arrivalNode* arrivalPtr;
typedef struct arrivalNode{

	char* nome;
	int init; 
	int eta;
	int fuel;

	arrivalPtr nextNodePtr;

} arrivalStruct;


typedef struct departureNode* departurePtr;
typedef struct departureNode{

	char* nome;
	int init; 
	int takeoff;

	departurePtr nextNodePtr;

} departureStruct;


//ARRIVALS
void processaArrival(char* comando);
void printArrivals(arrivalPtr arrivalHead);
void freeArrivals(arrivalPtr arrivalHead);
void insereArrival(arrivalPtr arrivalHead, char* nome, int init, int eta, int fuel);
void criarVoo();
void freeArrivalNode(arrivalPtr arrivalHead);
void removeArrival(arrivalPtr arrivalHead);
struct arrivalNode arrivalCopy(arrivalPtr arrivalPtr);
arrivalPtr criaArrivals();

//DEPARTURE
void processaDeparture(char* comando);
void printDepartures(departurePtr departureHead);
void freeDepartures(departurePtr departureHead);
void insereDeparture(departurePtr departureHead, char* nome, int init, int takeoff);
void freeDepartureNode(departurePtr departureHead);
void removeDeparture(departurePtr departureHead);
struct departureNode departureCopy(departurePtr departurePtr); 
departurePtr criaDepartures();

#endif