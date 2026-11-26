#include <iostream>
#include <vector>

class MovieRating {
private:
    std::vector<int> ratings;

public:
    void addRating(int rating) {
        if (rating >= 1 && rating <= 5) {
            ratings.push_back(rating);
            std::cout << "Rating added: " << rating << std::endl;
        } else {
            std::cout << "Invalid rating. Rating should be between 1 and 5." << std::endl;
        }
    }

    double getAverageRating() const {
        if (ratings.empty()) {
            return 0;
        }

        double total = 0;
        for (int rating : ratings) {
            total += rating;
        }
        return total / ratings.size();
    }
};

int main() {
    MovieRating movie;

    // Adding ratings
    movie.addRating(4);
    movie.addRating(5);
    movie.addRating(3);

    // Getting average rating
    std::cout << "Average rating: " << movie.getAverageRating() << std::endl;

    return 0;
}
