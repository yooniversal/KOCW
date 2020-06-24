#include "Student.h"

Student::Student()
{
}

Student::Student(const int& score)
	:score(score)
{
}

Student::Student(const string& name, const int& score)
	:name(name), score(score)
{
}

Student::~Student()
{
}

bool Student::operator>(const Student& s) const
{
	return this->score > s.score;
}

bool Student::operator<(const Student& s) const
{
	return this->score < s.score;
}

bool Student::operator==(const int& s) const
{
	return this->score == s;
}

bool Student::operator==(const Student& s) const
{
	return (this->name == s.name && this->score == s.score);
}
