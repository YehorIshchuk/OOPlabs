class Staff {
public:
    int freecars;
    int priceofdelivery;

    Staff(int valuex, bool boolean) {}

    ~Staff() {
        cout << "Staff object destroyed" << endl;
    }

    void Print() {
        cout << "Price of Delivery: " << priceofdelivery << endl;
        cout << "Free Cars: " << freecars << endl;
    }
};