#include "Seat.h"

Seat::Seat(){
	this->color = "";
}

Seat::Seat(Material material) : Material(material.strength, material.type){
	this->color = "";
}

Seat::Seat(Material material, std::string color) : Material(material.strength, material.type){
	this->color = color;
}