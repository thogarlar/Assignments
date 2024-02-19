Library Catalog in Binary Tree

Description: A library catalogue is a systematic and organised collection of bibliographic records or entries describing a library's holdings. Its major function is to allow users to discover and use the library's content. The catalogue is a single resource for locating books, periodicals, multimedia materials, and other objects in the library's collection. 

Context: 

In a library catalogue, consumers frequently search for books using specified criteria such as author names, genres, or release dates. A binary search tree can be used to enable efficient search and retrieval operations, allowing users to find books based on multiple attributes.
Library catalogues frequently include periodical publications such as magazines or journals, and users may be looking for publications from a specific time period. A self-balancing binary search tree, such as an AVL tree, can help manage periodicals and handle range queries efficiently.

Utilisation:

Organization by Criteria: Each node in the binary search tree represents a book, and the tree is organised according to a specified criterion (for example, author names, genres, or publication dates).
Efficient Search: When a user wishes to find books by a given author or genre, the binary search tree enables for efficient searches by browsing the tree based on the criterion selected.
Balanced Tree for Range Queries: An AVL tree maintains balance, which is essential for range query efficiency. Each node represents a periodical, and the tree is ordered according to publication dates.
Efficient Range inquiries: Users can use range inquiries to locate journals published between a specific date range. The AVL tree's self-balancing characteristic assures the best possible performance in such queries.

Advantages:

Logarithmic Search temporal: A balanced binary search tree's temporal complexity for searching is logarithmic (O(log n)), making it suitable for vast catalogues.
Flexibility: The binary search tree can be configured to meet a variety of search criteria, allowing for the organisation and retrieval of information depending on diverse qualities.


#include <iostream>
#include <cstring>

class Book {
public:
    std::string title;
    std::string author;

    // Constructor
    Book(const std::string& _title, const std::string& _author)
        : title(_title), author(_author) {}
};

class TreeNode {
public:
    Book data;
    TreeNode* left;
    TreeNode* right;

    // Constructor
    TreeNode(const Book& book)
        : data(book), left(nullptr), right(nullptr) {}
};

class LibraryCatalog {
private:
    TreeNode* root;

    // Helper function to insert a book into the binary tree
    TreeNode* insert(TreeNode* node, const Book& book) {
        if (node == nullptr) {
            return new TreeNode(book);
        }

        // Compare titles for ordering
        if (book.title < node->data.title) {
            node->left = insert(node->left, book);
        } else {
            node->right = insert(node->right, book);
        }

        return node;
    }

    // Helper function to perform an inorder traversal of the binary tree
    void inorderTraversal(TreeNode* node) {
        if (node) {
            inorderTraversal(node->left);
            std::cout << "Title: " << node->data.title << ", Author: " << node->data.author << std::endl;
            inorderTraversal(node->right);
        }
    }

public:
    // Constructor
    LibraryCatalog() : root(nullptr) {}

    // Public function to add a book to the catalog
    void addBook(const std::string& title, const std::string& author) {
        Book newBook(title, author);
        root = insert(root, newBook);
    }

    // Public function to display the catalog
    void displayCatalog() {
        std::cout << "Library Catalog:" << std::endl;
        inorderTraversal(root);
    }
};

int main() {
    LibraryCatalog library;

    int catalogSize;
    std::cout << "Enter the size of the library catalog: ";
    std::cin >> catalogSize;
    std::cin.ignore();  // Clear the newline character from the buffer

    for (int i = 0; i < catalogSize; ++i) {
        std::string title, author;

        std::cout << "Enter details for book " << i + 1 << ":" << std::endl;
        std::cout << "Title: ";
        std::getline(std::cin, title);

        std::cout << "Author: ";
        std::getline(std::cin, author);

        library.addBook(title, author);
    }

    // Displaying the catalog
    library.displayCatalog();

    return 0;
}
