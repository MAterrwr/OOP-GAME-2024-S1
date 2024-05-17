#include "Print.h"
using namespace std;

virtual void Print::print_action(Action& action) {
    cout << "Performing action: " << action.get_name() << endl;
}
