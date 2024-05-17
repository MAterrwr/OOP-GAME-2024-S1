#include "Print.h"

virtual void Print::print_action(Action& action) {
    cout << "Performing action: " << action.get_name() << endl;
}
