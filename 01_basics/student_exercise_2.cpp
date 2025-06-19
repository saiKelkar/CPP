#include <iostream>

int main() {
    float salary, allowance, deductions;
    float net_salary;

    std::cout << "Enter basic salary: ";
    std::cin >> salary;

    std::cout << "Enter percentage of allowance: ";
    std::cin >> allowance;

    std::cout << "Enter percentage of deductions: ";
    std::cin >> deductions;

    net_salary = salary + (salary * allowance/100) - (salary * deductions/100);
    std::cout << "Net Salary is: " << net_salary << std::endl;

    return 0;
}