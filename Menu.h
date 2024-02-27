class Menu {
private:
    int price;
    string nameofdish;

public:
    Menu() {
        price = 55;
        nameofdish = "Carbonara";
    }

    ~Menu() {
        cout << "Menu object destroyed" << endl;
    }

    void Print() {
        cout << "Price: " << price << endl;
        cout << "Name of Dish: " << nameofdish << endl;
    }
};