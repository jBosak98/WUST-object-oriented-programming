#include "Material.h"

Material::Material(){
	this->strength = 0;
	this->type = "";
}

Material::Material(int strength, std::string type){
	this->strength = strength;
	this->type = type;
}