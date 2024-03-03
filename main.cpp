#include <iostream>

struct Employee {
    std::string Name;
    int PerDay;
    int Absent[3];
    int Salary[3];
    int TotalSalary;
};

int main() {
    Employee emp1, emp2;

    std::cout << "Enter name of employee 1: " << std::endl;
    std::cin >> emp1.Name;
    std::cout << "Enter per day salary of employee 1: " << std::endl;
    std::cin >> emp1.PerDay;
    std::cout << "Enter number of absences for each month (3 months) for employee 1: " << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cin >> emp1.Absent[i];
        emp1.Salary[i] = (20 - emp1.Absent[i]) * emp1.PerDay;
    }

    std::cout << "Enter name of employee 2: " << std::endl;
    std::cin >> emp2.Name;
    std::cout << "Enter per day salary of employee 2: " << std::endl;
    std::cin >> emp2.PerDay;
    std::cout << "Enter number of absences for each month (3 months) for employee 2: " << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cin >> emp2.Absent[i];
        emp2.Salary[i] = (20 - emp2.Absent[i]) * emp2.PerDay;
    }

    emp1.TotalSalary = emp1.Salary[0] + emp1.Salary[1] + emp1.Salary[2];
    emp2.TotalSalary = emp2.Salary[0] + emp2.Salary[1] + emp2.Salary[2];

    std::cout << "\nTotal salary for " << emp1.Name << ": " << emp1.TotalSalary << std::endl;
    std::cout << "Total salary for " << emp2.Name << ": " << emp2.TotalSalary << std::endl;

    int maxAbsent1 = emp1.Absent[0] + emp1.Absent[1] + emp1.Absent[2];
    int maxAbsent2 = emp2.Absent[0] + emp2.Absent[1] + emp2.Absent[2];
    std::string mostAbsentEmployee = (maxAbsent1 > maxAbsent2) ? emp1.Name : emp2.Name;

    std::string highestPaidEmployee = (emp1.TotalSalary > emp2.TotalSalary) ? emp1.Name : emp2.Name;

    std::cout << "Employee with the most absences: " << mostAbsentEmployee << std::endl;
    std::cout << "Employee with the highest total salary: " << highestPaidEmployee << std::endl;

    return 0;
}
