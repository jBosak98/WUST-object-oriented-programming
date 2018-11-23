#include "AmphibiousCar.h"


	AmphibiousCar::AmphibiousCar(float engine, 
		int weight, 
		int numberOfSeats, 
		std::string color, 
		int productionYear,
		int capacity,
		std::string brand,
		int numberOfDoors
		) : Car(engine, weight, numberOfSeats, color, numberOfDoors, brand),
			Boat(engine,weight,numberOfSeats,color,productionYear,capacity){
		
		this->productionYear = productionYear;
		this->capacity = capacity;

		this->engine = engine;
		this->weight = weight;
		this->numberOfSeats = numberOfSeats;
		this->color = color;
	}