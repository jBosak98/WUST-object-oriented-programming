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
	}

	AmphibiousCar::AmphibiousCar(Car car, int productionYear, int capacity) : 
		Car(car.getEngine(), car.getWeight(), car.getNumberOfSeats(), car.getColor(), car.getNumberOfDoors(), car.getBrand()),
		Boat(car.getEngine(),car.getWeight(),car.getNumberOfSeats(),car.getColor(),productionYear,capacity){

		this->productionYear = productionYear;
		this->capacity = capacity;
	}