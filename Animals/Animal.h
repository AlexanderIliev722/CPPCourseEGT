#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Animal
{
public:
	Animal(string, string, char, float);
	void printInfo();
	void setName(string);
	void setBreed(string);
	void setGender(char);
	void setAge(float);
	string getName();
	string getBreed();
	char getGender();
	float getAge();
private:
	string breed;
	string name;
	char gender;
	float age;
};


#endif // ANIMAL_H_INCLUDED
