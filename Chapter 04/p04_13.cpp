    // program file for Exercise 4.13
    
    #include <iostream>
    #include <format>

    using std::cout;
    using std::endl;
    using std::cin;
    using std::format;

    int main() {
        double p1p{2.98};
        double p2p{4.5};
        double p3p{9.98};
        double p4p{4.49};
        double p5p{6.87};

        int p1q{0};
        int p2q{0};
        int p3q{0};
        int p4q{0};
        int p5q{0};


        int pno, quantity;

        do {
            cout << "Enter the Produdct number and quantity sold (Enter -1 to exit): ";
            cin >> pno >> quantity;

            switch(pno) {
                case 1:
                    p1q += quantity;
                    break;
                case 2:
                    p2q += quantity;
                    break;
                case 3:
                    p3q += quantity;
                    break;
                case 4:
                    p4q += quantity;
                    break;
                case 5:
                    p5q += quantity;
                    break;
            }
        }while(pno >= 1 && pno <= 5);

        cout << format("{:<15} {:<10} {:<15}\n", "Product name", "Quantity", "Retail Price");
        cout << format("{:<15} {:<10} ${:<14.2f}\n", "Product 1", p1q, p1q * p1p);
        cout << format("{:<15} {:<10} ${:<14.2f}\n", "Product 2", p2q, p2q * p2p);
        cout << format("{:<15} {:<10} ${:<14.2f}\n", "Product 3", p3q, p3q * p3p);
        cout << format("{:<15} {:<10} ${:<14.2f}\n", "Product 4", p4q, p4q * p4p);
        cout << format("{:<15} {:<10} ${:<14.2f}\n", "Product 5", p5q, p5q * p5p);

        return 0;
    }