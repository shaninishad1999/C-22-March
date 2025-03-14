#include <iostream>
using namespace std;

// Namespace cybrom
namespace cybrom {
    void student() {
        cout << "\nThis is Cybrom Namespace\n";
    }

    // Namespace bhopal (as a nested namespace inside cybrom)
    namespace bhopal {
        void student() {
            cout << "\nThis is Bhopal Namespace\n";
        }
    }

    // Function show inside cybrom
    void show() {
        cout << "\nFirst program\n";
    }

    // Class example inside cybrom
    class iostreamnew {
    public:
        void show() {
            cout << "\nClass example\n";
        }
    };

} // namespace cybrom

using namespace cybrom; // Using cybrom namespace

int main() {
    // Calling functions
    // cybrom::student();         // Cybrom namespace function
    // cybrom::bhopal::student(); // Bhopal namespace function
    // cybrom::show();            // Show function
    student();         // Cybrom namespace function
    bhopal::student(); // Bhopal namespace function
    show();            // Show function

    // Using class inside cybrom
    cybrom::iostreamnew obj;
    obj.show(); // Calling class function

    return 0;
}
