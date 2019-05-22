package com.view;

import com.model.Employee;
import com.service.EmployeeService;
import com.service.EmployeeServiceImpl;

public class RunEmployee
{
    public static void main(String[] args)
    {

        Employee employee = new Employee();
        EmployeeService employeeService = new EmployeeServiceImpl();

        employeeService.addEmployee(employee);


    }
}
