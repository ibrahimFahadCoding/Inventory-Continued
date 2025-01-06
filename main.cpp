#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <locale>
#include <cstdint>
#include <limits>
#include <exception>

int main() {
    using std::cin, std::cout, std::endl, std::cerr, std::setw, std::left, std::right, std::get_money, std::boolalpha, std::put_money, std::showbase, std::internal, std::fixed, std::setprecision;

    const std::locale user_locale("en_US.UTF-8");
    long double monetary_input;
    std::string input;

    cout.imbue(user_locale);
    cin.imbue(user_locale);

    cin >> boolalpha;
    cout << showbase << fixed << setprecision(2);

    std::string product;
    cout << "Product Name: ";
    std::getline(cin, product);

    cout << "Unit Price: ";
    cin >> get_money(monetary_input);
    const std::uint64_t u_price = static_cast<std::uint64_t>(monetary_input);
    
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    double u_weight;
    cout << "Unit Weight: ";
    std::getline(cin, input);
    try {
        u_weight = std::stod(input);
    } catch (const std::exception &e) {
        cerr << "Input error: " << e.what() << endl;
        return EXIT_FAILURE;
    }

    std::int32_t quantity;
    cout << "Quantity: ";
    std::getline(cin, input);
    try {
        quantity = static_cast<std::int32_t>(std::stoi(input));
    } catch (const std::exception &e) {
        cerr << "Input error: " << e.what() << endl;
        return EXIT_FAILURE;
    }

    std::uint64_t total_price = u_price * quantity;
    double total_weight = u_weight * quantity;

    bool is_selling;
    cout << "Selling (true/false): ";
    cin >> is_selling;

    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');









    std::string product2;
    cout << "Product Name: ";
    std::getline(cin, product2);

    cout << "Unit Price: ";
    cin >> get_money(monetary_input);
    const std::uint64_t u_price2 = static_cast<std::uint64_t>(monetary_input);
    
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    double u_weight2;
    cout << "Unit Weight: ";
    std::getline(cin, input);
    try {
        u_weight2 = std::stod(input);
    } catch (const std::exception &e) {
        cerr << "Input error: " << e.what() << endl;
        return EXIT_FAILURE;
    }

    std::int32_t quantity2;
    cout << "Quantity: ";
    std::getline(cin, input);
    try {
        quantity2 = static_cast<std::int32_t>(std::stoi(input));
    } catch (const std::exception &e) {
        cerr << "Input error: " << e.what() << endl;
        return EXIT_FAILURE;
    }

    std::uint64_t total_price2 = u_price2 * quantity2;
    double total_weight2 = u_weight2 * quantity2;

    bool is_selling2;
    cout << "Selling (true/false): ";
    cin >> is_selling2;

    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');






    std::string product3;
    cout << "Product Name: ";
    std::getline(cin, product3);

    cout << "Unit Price: ";
    cin >> get_money(monetary_input);
    const std::uint64_t u_price3 = static_cast<std::uint64_t>(monetary_input);
    
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    double u_weight3;
    cout << "Unit Weight: ";
    std::getline(cin, input);
    try {
        u_weight3 = std::stod(input);
    } catch (const std::exception &e) {
        cerr << "Input error: " << e.what() << endl;
        return EXIT_FAILURE;
    }

    std::int32_t quantity3;
    cout << "Quantity: ";
    std::getline(cin, input);
    try {
        quantity3 = static_cast<std::int32_t>(std::stoi(input));
    } catch (const std::exception &e) {
        cerr << "Input error: " << e.what() << endl;
        return EXIT_FAILURE;
    }

    std::uint64_t total_price3 = u_price3 * quantity3;
    double total_weight3 = u_weight3 * quantity3;

    bool is_selling3;
    cout << "Selling (true/false): ";
    cin >> is_selling3;

    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Output product information
    cout << "+----------------------------------------------------------------------------------------------------------------------------+\n";
    cout << "| " << setw(20) << left << "Product" << " | " << setw(10) << "Unit Price" << " | ";
    cout << setw(18) << "Unit Weight (lbs.)" << " | " << setw(10) << "Quantity" << " | " << setw(7) << "Selling" << " | " << setw(19) << "Total Weight (lbs.)";
    cout << " | " << setw(20) << "Total Value" << " |\n";

    cout << "+============================================================================================================================+\n";
    cout << "| " << setw(20) << left << product << " | " << setw(10) << internal << put_money(u_price) << " | ";
    cout << setw(18) << right << u_weight << " | " << setw(10) << quantity << " | " << setw(7) << is_selling << " | " << setw(19) << total_weight;
    cout << " | " << setw(20) << internal << put_money(total_price, true) << " |\n";

    cout << "+----------------------------------------------------------------------------------------------------------------------------+\n";
    cout << "| " << setw(20) << left << product2 << " | " << setw(10) << internal << put_money(u_price2) << " | ";
    cout << setw(18) << right << u_weight2 << " | " << setw(10) << quantity2 << " | " << setw(7) << is_selling2 << " | " << setw(19) << total_weight2;
    cout << " | " << setw(20) << internal << put_money(total_price2, true) << " |\n";

    cout << "+----------------------------------------------------------------------------------------------------------------------------+\n";
    cout << "| " << setw(20) << left << product3 << " | " << setw(10) << internal << put_money(u_price3) << " | ";
    cout << setw(18) << right << u_weight3 << " | " << setw(10) << quantity3 << " | " << setw(7) << is_selling3 << " | " << setw(19) << total_weight3;
    cout << " | " << setw(20) << internal << put_money(total_price3, true) << " |\n";

    cout << "+----------------------------------------------------------------------------------------------------------------------------+" << endl;

    return EXIT_SUCCESS;
}
