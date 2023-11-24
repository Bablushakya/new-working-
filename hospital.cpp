#include <iostream>
#include <vector>

// Define a structure to represent a patient
struct Patient {
    std::string name;
    int age;
    std::string gender;
    std::string diagnosis;
};

int main() {
    std::vector<Patient> patients; // Store patient records in a vector

    while (true) {
        std::cout << "Hospital Management System\n";
        std::cout << "1. Add Patient\n";
        std::cout << "2. View Patients\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                Patient patient;
                std::cout << "Enter patient name: ";
                std::cin >> patient.name;
                std::cout << "Enter patient age: ";
                std::cin >> patient.age;
                std::cout << "Enter patient gender: ";
                std::cin >> patient.gender;
                std::cout << "Enter diagnosis: ";
                std::cin >> patient.diagnosis;

                patients.push_back(patient);
                std::cout << "Patient added successfully!\n";
                break;
            }
            case 2: {
                std::cout << "Patient Records:\n";
                for (const Patient& patient : patients) {
                    std::cout << "Name: " << patient.name << ", Age: " << patient.age
                              << ", Gender: " << patient.gender << ", Diagnosis: " << patient.diagnosis << "\n";
                }
                break;
            }
            case 3:
                std::cout << "Exiting the system. Goodbye!\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    return 0;
}
