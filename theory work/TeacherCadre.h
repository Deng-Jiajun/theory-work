#ifndef TEACHERCADRE_H
#define TEACHERCADRE_H
#include<string>
#include<iostream>
class Teacher
{
public:
	Teacher();
	Teacher(const Teacher&);
	virtual ~Teacher();
	Teacher(const std::string&, int, const std::string&, const std::string&, const std::string&, const std::string&);
	void display(void);
private:
	std::string name_;
	int age_;
	std::string sex_;
	std::string address_;
	std::string phone_number_;
	std::string title_;
};
Teacher::Teacher() = default;
Teacher::Teacher(const Teacher&) = default;
Teacher::~Teacher() = default;
Teacher::Teacher(const std::string &name, int age, const std::string &sex, const std::string &address, const std::string &phone_number, const std::string &title) :name_(name), age_(age), sex_(sex), address_(address), phone_number_(phone_number), title_(title) {}
void Teacher::display(void)
{
	std::cout << "name: " << name_
		<< "\nage: " << age_
		<< "\nsex: " << sex_
		<< "\naddress: " << address_
		<< "\nphone number: " << phone_number_
		<< "\ntitle: " << title_ << std::endl;

}
class Cadre
{
public:
	Cadre();
	Cadre(const Cadre&);
	Cadre(const std::string&, int, const std::string&, const std::string&, const std::string&, const std::string&);

	virtual ~Cadre();

private:
	std::string name_;
	int age_;
	std::string sex_;
	std::string address_;
	std::string phone_number_;
protected:
	std::string post_;
};
Cadre::Cadre() = default;
Cadre::Cadre(const Cadre&) = default;
Cadre::~Cadre() = default;
Cadre::Cadre(const std::string &name, int age, const std::string &sex, const std::string &address, const std::string &phone_number, const std::string &post) :name_(name), age_(age), sex_(sex), address_(address), phone_number_(phone_number), post_(post) {}
class TeacherCadre :public Teacher, public Cadre
{
public:
	TeacherCadre();
	TeacherCadre(const std::string&, int, const std::string&, const std::string&, const std::string&, const std::string&, const std::string&, int);

	virtual ~TeacherCadre();
	void show(void);
private:
	int wages_;
};
TeacherCadre::TeacherCadre() = default;
TeacherCadre::~TeacherCadre() = default;
TeacherCadre::TeacherCadre(const std::string &name, int age, const std::string &sex, const std::string &address, const std::string &phone_number, const std::string &title, const std::string &post, int wages) :Teacher(name, age, sex, address, phone_number, title), Cadre(name, age, sex, address, phone_number, post), wages_(wages) {}
void TeacherCadre::show(void)
{
	Teacher::display();
	std::cout << "post: " << Cadre::post_
		<< "\nwages: " << wages_ << std::endl;
}
#endif // !TEACHERCADRE_H
