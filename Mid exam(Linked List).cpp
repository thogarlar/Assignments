Transaction History in Linked list

Description: 

A transaction history is a historical record of financial transactions or activities that occurred over a set period of time. A transaction history, whether in personal finance, banking, or business, is a detailed record of monetary movements such as income, expenditures, transfers, and other financial transactions. 
Here's a detailed description of a transaction history:Components and characteristics:
Transaction data include the date, description, and amount of each financial transaction.
Date: Represents the transaction date. It organises the transaction history in chronological manner, allowing users to track financial activity over time.
Description: Describes the transaction's nature and purpose. This may include information about the payee, the rationale for the transaction, or any further notes.
Amount:The amount indicates the monetary value of the transaction. It indicates whether the transaction was for income (positive amount), expenses (negative amount), or transfers across accounts.

Context: 

Users keep track of their income, expenses, and other financial transactions using a personal finance management app. The application must keep a thorough transaction history so that users can evaluate their spending habits, create budgets, and make sound financial decisions.
In a financial system, keeping an accurate and secure transaction log is critical for recording all customer transactions, assuring auditability, and addressing disputes. The system must efficiently manage a high number of transactions in real time.

Utilization:

The linked list represents financial transactions with attributes such as date, description, and amount. As users enter their income or expenses, new transactions are automatically added to the linked list.
The linked list allows users to view their financial activity chronologically.Users can browse the whole transaction history, filter transactions by criteria (e.g., date range, category), and create reports.
Each node in the linked list represents a transaction, which includes details such as the transaction ID, date, account information, and amount.
The linked list functions as a transaction log, with new transactions added as consumers complete financial transactions such as deposits, withdrawals, or transfers.
In the event of discrepancies or disagreements, the linked list serves as a clear and chronological record for auditing.

    Scenario: Banking System and transaction log
Accurate and secure transaction logs are essential in banking systems for recording consumer transactions, auditing, and resolving disputes. The system must efficiently manage a high number of transactions in real time.

Utilisation:

Each node in the linked list represents a transaction and includes information such as the transaction ID, date, account details, and amount.
The linked list serves as a transaction log, with new transactions added as consumers make deposits, withdrawals, or transfers.
In the event of discrepancies or disagreements, the linked list serves as a clear and chronological record for auditing purposes.


#include <iostream>
#include <string>

class Transaction {
public:
    std::string date;
    std::string description;
    double amount;

    // Constructor
    Transaction(const std::string& _date, const std::string& _description, double _amount)
        : date(_date), description(_description), amount(_amount) {}
};

class Node {
public:
    Transaction data;
    Node* next;

    // Constructor
    Node(const Transaction& transaction)
        : data(transaction), next(nullptr) {}
};

class TransactionHistory {
private:
    Node* head;

public:
    // Constructor
    TransactionHistory() : head(nullptr) {}

    // Function to insert a transaction into the linked list
    void insertTransaction(const std::string& date, const std::string& description, double amount) {
        Transaction newTransaction(date, description, amount);
        Node* newNode = new Node(newTransaction);

        // Insert at the beginning of the list
        newNode->next = head;
        head = newNode;
    }

    // Function to display the transaction history
    void displayTransactionHistory() {
        std::cout << "Transaction History:" << std::endl;
        Node* current = head;

        while (current) {
            std::cout << "Date: " << current->data.date << ", Description: " << current->data.description
                      << ", Amount: " << current->data.amount << std::endl;
            current = current->next;
        }
    }

    // Destructor to free allocated memory
    ~TransactionHistory() {
        Node* current = head;
        while (current) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};

int main() {
    TransactionHistory history;

    int size;
    std::cout << "Enter the number of transactions: ";
    std::cin >> size;

    for (int i = 0; i < size; ++i) {
        std::string date, description;
        double amount;

        std::cout << "Enter details for transaction " << i + 1 << ":" << std::endl;
        std::cout << "Date: ";
        std::cin >> date;

        std::cout << "Description: ";
        std::cin.ignore();  // Clear the newline character from the buffer
        std::getline(std::cin, description);

        std::cout << "Amount: ";
        std::cin >> amount;

        history.insertTransaction(date, description, amount);
    }

    // Displaying the transaction history
    history.displayTransactionHistory();

    return 0;
}
