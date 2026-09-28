#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double originalprice;
    int quantity;
    int voucherchoice;
    double discountrate = 0.0;
    double discountamount;
    double finalprice;
    double totalprice;

    cout << "========================================" << endl;
    cout << "       SHOPEE DISCOUNT CALCULATOR       " << endl;
    cout << "========================================" << endl;

    // Get product price
    do
    {
        cout << "Enter product price (RM): ";
        cin >> originalprice;

        if (originalprice <= 0)
        {
            cout << "Price must be greater than 0." << endl;
        }

    } while (originalprice <= 0);

    // Get quantity
    do
    {
        cout << "Enter quantity: ";
        cin >> quantity;

        if (quantity <= 0)
        {
            cout << "Quantity must be greater than 0." << endl;
        }

    } while (quantity <= 0);

    // Choose Shopee discount voucher
    cout << endl;
    cout << "Choose Shopee discount voucher:" << endl;
    cout << "1. 10% OFF" << endl;
    cout << "2. 20% OFF" << endl;
    cout << "3. 30% OFF" << endl;

    do
    {
        cout << "Enter your choice (1-3): ";
        cin >> voucherchoice;

        if (voucherchoice < 1 || voucherchoice > 3)
        {
            cout << "Invalid choice. Please choose 1, 2, or 3." << endl;
        }

    } while (voucherchoice < 1 || voucherchoice > 3);

    // Apply discount based on voucher choice
    switch (voucherchoice)
    {
        case 1:
            discountrate = 0.10;
            break;

        case 2:
            discountrate = 0.20;
            break;

        case 3:
            discountrate = 0.30;
            break;
    }

    // Calculate total price before discount
    totalprice = originalprice * quantity;

    // Calculate discount
    discountamount = totalprice * discountrate;

    // Calculate final price
    finalprice = totalprice - discountamount;

    // Display results
    cout << fixed << setprecision(2);

    cout << endl;
    cout << "========================================" << endl;
    cout << "             ORDER SUMMARY              " << endl;
    cout << "========================================" << endl;

    cout << "Product price:    RM " << originalprice << endl;
    cout << "Quantity:         " << quantity << endl;
    cout << "Total price:      RM " << totalprice << endl;
    cout << "Discount:         " << discountrate * 100 << "%" << endl;
    cout << "Discount amount:  RM " << discountamount << endl;
    cout << "Final price:      RM " << finalprice << endl;

    cout << "========================================" << endl;
    cout << "       Thank you for shopping!          " << endl;
    cout << "========================================" << endl;

    return 0;
}