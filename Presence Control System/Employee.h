#include <string>

class Employee {
public:
	//Constructor
	Employee();
	Employee(const int key, const std::string& lastName, const std::string& firstName, const std::string& postEmployee, const std::string& id);

	//Destructor
	~Employee();

	//Getters
	int getKey() const;
	std::string getLastName() const;
	std::string getFirstName() const;
	std::string getPostEmployee() const;
	std::string getIdEmployee() const;

	//Setters
	void setKey(const int key);
	void setLastName(const std::string& lastName); 
	void setFirstName(const std::string& firstName);
	void setPostEmployee(const std::string& postEmployee);
	void setIdEmployee(const std::string& idEmployee);

private:
	int m_key{0};
	std::string m_lastName;
	std::string m_firstName;
	std::string m_postEmployee;
	std::string m_idEmployee;
};