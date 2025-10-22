#include <iostream>
#include <sstream>

class ReportGenerator {
public:
    std::string title;
    std::string data;

    ReportGenerator(const std::string& t, const std::string& d) : title(t), data(d) {}

    int processData() {
        std::istringstream iss(data);
        int number, sum = 0;
        while (iss >> number) {
            sum += number;
        }
        return sum;
    }

};

class ReportFormatter {
    public:

        ReportFormatter(){}

        std::string format(std::string title, int sum) {
            return "<h1>" + title + "</h1>\n<p>" + title + ": " + std::to_string(sum) + "</p>";
    }

};

// Included for demonstration
int main() {
    ReportGenerator reportGenerator("Total sales", "51 42 39 60");
    ReportFormatter reportFormatter;

    int sum = reportGenerator.processData();


    std::cout << reportFormatter.format(reportGenerator.title, sum);
}
