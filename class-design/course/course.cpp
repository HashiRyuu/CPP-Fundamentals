#include <iostream>
#include <string>
#include <vector>

class Course {
private:
    std::string name;
    int credits;

public:
    Course(const std::string& name, int credits) : name(name), credits(credits) {}

    const std::string& getName() const { return name; }
    int getCredits() const { return credits; }
};

class Student {
private:
    std::string name;
    int year;
    std::vector<Course> courses;

public:
    Student(const std::string& name, int year) : name(name), year(year) {}

    void addCourse(const Course& course) {
        courses.push_back(course);
    }

    void printCourses() const {
        std::cout << "Courses for " << name << " (Year " << year << "):" << std::endl;
        for (const auto& course : courses) {
            std::cout << "  " << course.getName() << " - " << course.getCredits() << " credits" << std::endl;
        }
    }
};

int main() {
    Course math("Math", 3);
    Course physics("Physics", 4);
    Course chemistry("Chemistry", 3);

    Student student("John Doe", 2);
    student.addCourse(math);
    student.addCourse(physics);
    student.addCourse(chemistry);

    student.printCourses();

    return 0;
}
