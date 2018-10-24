#include <iostream>
#include <sstream>
#include <algorithm> 
#include <cstdlib> 

using namespace std;

static const int numberOfSalesPerson = 5;
static const int numberOfProduct = 4;

void show(float sales[5][4], float sumOfEachPerson[numberOfProduct], float sumOfEachProduct[numberOfProduct]){
	cout<<"product |"<<"\tperson"<<"\t\t\t\t|total"<<"\n";
		cout<<" "<<"\t|1\t2\t3\t4\t5\n";
	for(int i = 0; i< numberOfProduct; i++){
		cout<<i+1<<"\t|"<<sales[0][i]<<"\t"<<sales[1][i]<<"\t"<<sales[2][i]<<"\t"<<sales[3][i]<<"\t"<<sales[4][i]<<"\t|"<<sumOfEachProduct[i]<<"\n";

	}
	cout<<"\n"<<"total"<<"\t"<<sumOfEachPerson[0]<<"\t"<<sumOfEachPerson[1]<<"\t"<<sumOfEachPerson[2]<<"\t"<<sumOfEachPerson[3]<<"\t"<<sumOfEachPerson[4]<<"\n";

}
bool isNumber(const string& s)
{
    return !s.empty() && find_if(s.begin(), 
        s.end(), [](char c) { return !isdigit(c); }) == s.end();
}
float getInputAsFloat(){
	string input;
	cin>>input;
	istringstream iss(input);
	float x;
    iss >> noskipws >> x;
    if(iss.eof() && !iss.fail()) 
		return x;
	else{
	cout<<"WRONG INPUT, INSTEAD OF THAT, 0 IS INSERTED"<<"\n";
		return 0;
	}
}



int getInputAsInt(int from, int to){
	string input;
	cin>>input;
	if(input == "-1"){
		return -1;
	}
	int ret = atoi((input).c_str());

	if(isNumber(input) && ret > from && ret <= to){
		return ret;
	}
		cout<<"WRONG INPUT, INSTEAD OF THAT, 0 IS INSERTED"<<"\n";
		return 0;

}



int
main(){
	float totalSales[numberOfSalesPerson][numberOfProduct];
	float sumOfEachPerson[numberOfSalesPerson] = { 0,0,0,0,0};
	float sumOfEachProduct[numberOfProduct] = {0,0,0,0};
	for(int i = 0; i< numberOfProduct; i++){
		for(int j = 0; j< numberOfSalesPerson; j++){
			totalSales[j][i] = 0;
		}
	}
	int person = 0;
	int product = 0;
	person = getInputAsInt(0,numberOfSalesPerson);
	// cin>>person;
	while(person != -1){
		product = getInputAsInt(0, numberOfProduct);

		totalSales[person-1][product-1] = getInputAsFloat();
		cout<<"person:"<<person<<"\tproduct:"<<product<<"\ttotal sales:"<<totalSales[person-1][product-1]<<"\n";
		person = getInputAsInt(0,numberOfSalesPerson);
	}

	for(int prod = 0; prod< numberOfProduct; prod++){
		for(int pers = 0; pers< numberOfSalesPerson; pers++){
			sumOfEachProduct[prod] += totalSales[pers][prod];
		}

	}
	for(int pers = 0; pers< numberOfSalesPerson; pers++){
		for(int prod = 0; prod< numberOfProduct; prod++){
			sumOfEachPerson[pers] += totalSales[pers][prod];
		}
	}

	show(totalSales, sumOfEachPerson,sumOfEachProduct);
	return 0;

}