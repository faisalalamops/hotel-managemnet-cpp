#include <iostream>
#include <vector>
#include <string>

class Hotel {
private:
    int roomNumber;
    std::string guestName;

public:
    Hotel(int room, std::string name) {
        roomNumber = room;
        guestName = name;
    }

    void displayRoom() const {
        std::cout << "Room No: " << roomNumber << " | Guest Name: " << guestName << "\n";
    }
};

int main() {
    std::vector<Hotel> bookings;
    int choice = 0;

    while (choice != 3) {
        std::cout << "\n=== HOTEL MANAGEMENT SYSTEM ===\n";
        std::cout << "1. Book a Room\n";
        std::cout << "2. View All Bookings\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter Choice (1-3): ";
        std::cin >> choice;

        if (choice == 1) {
            int room;
            std::string name;

            std::cout << "Enter Room Number: ";
            std::cin >> room;
            std::cin.ignore(); // buffer clear karne ke liye

            std::cout << "Enter Guest Name: ";
            std::getline(std::cin, name);

            bookings.push_back(Hotel(room, name));
            std::cout << "Room Booked Successfully!\n";
        } 
        else if (choice == 2) {
            if (bookings.empty()) {
                std::cout << "No rooms booked yet.\n";
            } else {
                std::cout << "\n--- CURRENT BOOKINGS ---\n";
                for (const auto& booking : bookings) {
                    booking.displayRoom();
                }
            }
        } 
        else if (choice == 3) {
            std::cout << "Exiting system. Thank you!\n";
        } 
        else {
            std::cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}