#include <iostream>
#include <random>

using namespace std;
int main() {
    random_device rd; // Seed generator
    mt19937 gen(rd()); 
    uniform_int_distribution<> dist(0, 11); // ranges from 0 to 11

    int daysUntilExpiration = dist(gen);

    if (daysUntilExpiration == 0) {
        cout << "Your subscription has expired." << endl;
    } else if (daysUntilExpiration == 1) {
        cout << "Your subscription expires within a day!\nRenew now and save 20%!" <<endl;
    } else if (daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration << " days\nRenew now and save 10%!" << std::endl;
    } else if (daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    } else {
        cout << "You have an active subscription." << endl;
    }

    return 0;
}
