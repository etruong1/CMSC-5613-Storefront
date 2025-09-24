#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee : User {


public:
	void sendNotifications();

	void setPromotions(Store s);

	void setSales(Store s);

	void setEmployeeRole(User u);

	void setManagerRole(User u);

	void setAdministratorRole(User u);
};

#endif
