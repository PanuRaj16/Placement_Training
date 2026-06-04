#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n) {
        name = n;
    }

    virtual void display() = 0;
};

class Passenger : public Person {
public:
    Passenger(string n) : Person(n) {}

    void display() override {
        cout << "Passenger: " << name << endl;
    }
};

class Ticket {
private:
    int ticketId;
    string passengerName;

public:
    Ticket(int id, string name) {
        ticketId = id;
        passengerName = name;
    }

    int getId() {
        return ticketId;
    }

    string getName() {
        return passengerName;
    }

    void display() {
        cout << "Ticket ID: " << ticketId
             << " | Passenger: " << passengerName << endl;
    }
};

class ReservationSystem {
private:
    vector<Ticket> confirmed;
    queue<Ticket> rac;
    queue<Ticket> waiting;

    const int MAX_CONFIRMED = 5;
    const int MAX_RAC = 2;

public:
    void bookTicket(Ticket t) {
        if (confirmed.size() < MAX_CONFIRMED) {
            confirmed.push_back(t);
            cout << "Confirmed Ticket Booked\n";
        }
        else if (rac.size() < MAX_RAC) {
            rac.push(t);
            cout << "Added to RAC\n";
        }
        else {
            waiting.push(t);
            cout << "Added to Waiting List\n";
        }
    }

    void cancelTicket(int id) {
        bool found = false;

        for (int i = 0; i < confirmed.size(); i++) {
            if (confirmed[i].getId() == id) {
                confirmed.erase(confirmed.begin() + i);
                found = true;
                cout << "Ticket Cancelled\n";
                break;
            }
        }

        if (!found) {
            cout << "Ticket Not Found\n";
            return;
        }

        if (!rac.empty()) {
            confirmed.push_back(rac.front());
            cout << "RAC Ticket "
                 << rac.front().getId()
                 << " Moved to Confirmed\n";
            rac.pop();
        }

        if (!waiting.empty() && rac.size() < MAX_RAC) {
            rac.push(waiting.front());
            cout << "Waiting Ticket "
                 << waiting.front().getId()
                 << " Moved to RAC\n";
            waiting.pop();
        }
    }

    void displayConfirmed() {
        cout << "\n--- Confirmed Tickets ---\n";

        if (confirmed.empty()) {
            cout << "No Confirmed Tickets\n";
            return;
        }

        for (auto &t : confirmed)
            t.display();
    }

    void displayRAC() {
        cout << "\n--- RAC Tickets ---\n";

        queue<Ticket> temp = rac;

        if (temp.empty()) {
            cout << "No RAC Tickets\n";
            return;
        }

        while (!temp.empty()) {
            temp.front().display();
            temp.pop();
        }
    }

    void displayWaiting() {
        cout << "\n--- Waiting List ---\n";

        queue<Ticket> temp = waiting;

        if (temp.empty()) {
            cout << "No Waiting Tickets\n";
            return;
        }

        while (!temp.empty()) {
            temp.front().display();
            temp.pop();
        }
    }
};

int main() {
    ReservationSystem rs;
    int choice;

    do {
        cout << "\n===== Railway Reservation System =====";
        cout << "\n1. Book Ticket";
        cout << "\n2. Cancel Ticket";
        cout << "\n3. View Confirmed Tickets";
        cout << "\n4. View RAC Tickets";
        cout << "\n5. View Waiting List";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int id;
            string name;

            cout << "Enter Ticket ID: ";
            cin >> id;

            cout << "Enter Passenger Name: ";
            cin >> name;

            Passenger p(name);
            p.display();

            Ticket t(id, name);
            rs.bookTicket(t);
            break;
        }

        case 2: {
            int id;
            cout << "Enter Ticket ID to Cancel: ";
            cin >> id;
            rs.cancelTicket(id);
            break;
        }

        case 3:
            rs.displayConfirmed();
            break;

        case 4:
            rs.displayRAC();
            break;

        case 5:
            rs.displayWaiting();
            break;

        case 6:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while (choice != 6);

    return 0;
}
