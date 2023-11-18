#include <iostream>
#include <string>

// Base class
class Media {
protected:
    std::string title;

public:
    // Constructor
    Media(const std::string& t) : title(t) {}

    // Virtual function for displaying information
    virtual void displayInfo() const {
        std::cout << "Title: " << title << std::endl;
    }
};

// Derived class: Book
class Book : public Media {
private:
    std::string author;

public:
    Book(const std::string& t, const std::string& a) : Media(t), author(a) {}

    // Override the virtual function for displaying information
    void displayInfo() const override {
        std::cout << "Book Information:" << std::endl;
        Media::displayInfo();  // Call base class function
        std::cout << "Author: " << author << std::endl;
    }
};

// Derived class: Movie
class Movie : public Media {
private:
    std::string director;

public:
    Movie(const std::string& t, const std::string& d) : Media(t), director(d) {}

    // Override the virtual function for displaying information
    void displayInfo() const override {
        std::cout << "Movie Information:" << std::endl;
        Media::displayInfo();  // Call base class function
        std::cout << "Director: " << director << std::endl;
    }
};

// Function that works with the base class pointer to demonstrate polymorphism
void processMedia(const Media* media) {
    media->displayInfo();
    std::cout << "---------------------------" << std::endl;
}

int main() {
    // Create objects of Book and Movie
    Book book("The Great Gatsby", "F. Scott Fitzgerald");
    Movie movie("Inception", "Christopher Nolan");

    // Use the function with base class pointers to demonstrate polymorphism
    processMedia(&book);
    processMedia(&movie);

    return 0;
}
