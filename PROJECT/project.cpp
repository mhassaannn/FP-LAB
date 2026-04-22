#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int size = 100;
    int index = 5;

    // Game Data
    string game_name[100] = {"FIFA", "GTA", "PUBG", "COD", "NFS"};
    float game_price[100] = {3000, 5000, 4500, 5000, 4000};
    int game_stock[100] = {10, 5, 7, 15, 6};
    string game_category[100] = {"Sports", "Action", "Shooting", "Shooting", "Racing"};

    // Sales
    float total_sales = 0;

    // History
    string history[1000];
    int historyIndex = 0;

    while (true)
    {
        system("cls");
        cout << "===============================" << endl;
        cout << "===== GAMING STORE SYSTEM =====\n";
        cout << "===============================" << endl;
        cout << endl;
        cout << "1. Owner" << endl;
        cout << "2. Customer " << endl;
        cout << "3. Exit " << endl;

        cout << endl;
        cout << "Enter your choice : ";
        string option;
        cin >> option;

        // ADMIN
        if (option == "1")
        {
            bool isLoggedIn = false;
            for (int i = 0; i < 3 && !isLoggedIn; i++)
            {
                system("cls");
                cout << "=================================" << endl;
                cout << "Admin Menu : Login attempt " << i + 1 << endl;
                cout << "=================================" << endl;
                cout << endl;
                string username, password;
                cout << "Username : ";
                cin >> username;
                cout << "Password : ";
                cin >> password;

                if (username == "admin" && password == "admin")
                {
                    isLoggedIn = true;
                    cout << "Login Successful";
                    while (true)
                    {
                        system("cls");
                        cout << "===== OWNER PANEL =====\n";
                        cout << endl;
                        cout << "1.View Games\n";
                        cout << "2.Add Game\n";
                        cout << "3.Search\n";
                        cout << "4.Update\n";
                        cout << "5.Delete\n";
                        cout << "6.Total Sales\n";
                        cout << "7.View History\n";
                        cout << "8.Low Stock\n";
                        cout << "9.Sort by Price\n";
                        cout << "10.Logout\n";

                        cout << endl;
                        cout << "Enter your option : ";
                        string admin_option;
                        cin >> admin_option;

                        // 1 View Game
                        if (admin_option == "1")
                        {
                            system("cls");
                            cout << "===== OWNER PANEL =====\n";
                            cout << endl;

                            cout << "NAME\tPRICE\tSTOCK\tCATEGORY\n";
                            cout << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (game_name[i] != "")
                                {
                                    cout << game_name[i] << "\t" << game_price[i]
                                         << "\t" << game_stock[i] << "\t" << game_category[i] << endl;
                                }
                            }

                            cout << endl;
                            cout << "Press Enter to Go Back to Menu...";
                        }

                        // 2 Add Game
                        else if (admin_option == "2")
                        {
                            system("cls");
                            cout << "===== OWNER PANEL =====\n";
                            cout << endl;

                            cout << "Enter Game Name: ";
                            cin >> game_name[index];
                            cout << "Enter Game Price: ";
                            cin >> game_price[index];
                            cout << "Enter Game Stock: ";
                            cin >> game_stock[index];
                            cout << "Enter Game Category: ";
                            cin >> game_category[index];
                            cout << endl;
                            history[historyIndex++] = "Added: " + game_name[index];
                            index++;

                            cout << endl;
                            cout << "Press Enter to Go Back to Menu...";
                        }

                        // 3 Search Game
                        else if (admin_option == "3")
                        {
                            system("cls");
                            cout << "===== OWNER PANEL =====\n";
                            cout << endl;

                            cout << "Enter Game Name to Search : ";
                            string name;
                            cin >> name;
                            cout << endl;

                            

                            bool found = false;

                            for (int i = 0; i < index; i++)
                            {
                                if (game_name[i] == name)
                                {
                                    cout << "Found: " << game_name[i] << endl;
                                    cout << endl;
                                    cout << "NAME\tPRICE\tSTOCK\tCATEGORY\n";
                                    cout << endl;
                                    cout << game_name[i] << "\t" << game_price[i]
                                         << "\t" << game_stock[i] << "\t" << game_category[i] << endl;
                                    found = true;
                                }
                            }

                            if (found == false)
                            {
                                cout << endl;
                                cout << "Not Found\n";
                            }

                            cout << endl;
                            cout << "Press Enter to Go Back to Menu...";
                        }

                        // 4 Update Game
                        else if (admin_option == "4")
                        {
                            system("cls");
                            cout << "===== OWNER PANEL =====\n";
                            cout << endl;

                            cout << "NAME\tPRICE\tSTOCK\tCATEGORY\n";
                            cout << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (game_name[i] != "")
                                {
                                    cout << game_name[i] << "\t" << game_price[i]
                                         << "\t" << game_stock[i] << "\t" << game_category[i] << endl;
                                }
                            }

                            cout << endl;
                            cout << "Enter Game Name to Update : ";
                            string name;
                            cin >> name;

                            bool found = false;

                            for (int i = 0; i < index; i++)
                            {
                                if (game_name[i] == name)
                                {
                                    cout << "Enter NEW Price : ";
                                    cin >> game_price[i];
                                    cout << "Enter NEW Stock : ";
                                    cin >> game_stock[i];

                                    history[historyIndex++] = "Updated: " + name;
                                    found = true;
                                }
                            }

                            if (found == false)
                            {
                                cout << endl;
                                cout << "Not Found\n";
                            }

                            cout << endl;
                            cout << "Press Enter to Go Back to Menu...";
                        }

                        // 5 Delete Game
                        else if (admin_option == "5")
                        {
                            system("cls");
                            cout << "===== OWNER PANEL =====\n";
                            cout << endl;

                            cout << "NAME\tPRICE\tSTOCK\tCATEGORY\n";
                            cout << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (game_name[i] != "")
                                {
                                    cout << game_name[i] << "\t" << game_price[i]
                                         << "\t" << game_stock[i] << "\t" << game_category[i] << endl;
                                }
                            }

                            cout << endl;
                            cout << "Enter Game Name to Delete : ";
                            string name;
                            cin >> name;

                            bool found = false;

                            for (int i = 0; i < index; i++)
                            {
                                if (game_name[i] == name)
                                {
                                    game_name[i] = "";
                                    cout << endl;
                                    cout << "DELETED ! ";

                                    history[historyIndex++] = "Deleted: " + name;
                                    found = true;
                                }
                            }

                            if (found == false)
                            {
                                cout << endl;
                                cout << "Not Found\n";
                            }

                            cout << endl;
                            cout << "Press Enter to Go Back to Menu...";
                        }

                        // 6 Total Sales
                        else if (admin_option == "6")
                        {
                            system("cls");
                            cout << "===== OWNER PANEL =====\n";
                            cout << endl;

                            cout << "Total Sales: " << total_sales << endl;

                            cout << "Press Enter to Go Back to Menu...";
                        }

                        // 7 History
                        else if (admin_option == "7")
                        {
                            system("cls");
                            cout << "===== OWNER PANEL =====\n";
                            cout << endl;

                            for (int i = 0; i < historyIndex; i++)
                            {
                                cout << history[i] << endl;
                            }

                            cout << endl;
                            cout << "Press Enter to Go Back to Menu...";
                        }

                        // 8 Low Stock
                        else if (admin_option == "8")
                        {
                            system("cls");
                            cout << "===== OWNER PANEL =====\n";

                            cout << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (game_stock[i] < 5 && game_name[i] != "")
                                {
                                    cout << game_name[i] << " LOW STOCK\n";
                                }
                            }

                            cout << endl;
                            cout << "Press Enter to Go Back to Menu...";
                        }

                        // 9 Sort by Price
                        else if (admin_option == "9")
                        {
                            system("cls");
                            cout << "===== OWNER PANEL =====\n";
                            cout << endl;

                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i + 1; j < index; j++)
                                {
                                    if (game_price[i] > game_price[j])
                                    {
                                        swap(game_price[i], game_price[j]);
                                        swap(game_name[i], game_name[j]);
                                        swap(game_stock[i], game_stock[j]);
                                        swap(game_category[i], game_category[j]);
                                    }
                                }
                            }
                            cout << "Sorted!\n";

                            cout << endl;
                            cout << "Press Enter to Go Back to Menu...";
                        }

                        else if (admin_option == "10")
                        {
                            break;
                        }
                        getch();
                    }
                }

                else
                {
                    cout << "WRONG LOGIN! ";

                    cout << endl;
                    cout << "Press Enter to Go Back to Menu...";
                    getch();
                }
            }
        }

        // CUSTOMER
        else if (option == "2")
        {
            string cart_name[100];
            int cart_qty[100];
            int cartIndex = 0;
            float bill = 0;

            while (true)
            {
                system("cls");
                cout << "=================================" << endl;
                cout << "============ CUSTOMER ===========\n";
                cout << "=================================" << endl;
                cout << endl;
                cout << "1.View Game\n";
                cout << "2.Search Game\n";
                cout << "3.Buy Game\n";
                cout << "4.View Cart\n";
                cout << "5.Checkout\n";
                cout << "6.History\n";
                cout << "7.Filter\n";
                cout << "8.Cheapest Game\n";
                cout << "9.Expensive Game\n";
                cout << "10.Exit\n";

                cout << endl;
                cout << "Enter your option : ";
                string cust_option;
                cin >> cust_option;

                // 1 View game
                if (cust_option == "1")
                {
                    system("cls");
                    cout << "============ CUSTOMER ===========\n";
                    cout << endl;

                    cout << "NAME\tPRICE\tSTOCK\tCATEGORY\n";
                    cout << endl;
                    for (int i = 0; i < index; i++)
                    {
                        if (game_name[i] != "")
                        {
                            cout << game_name[i] << "\t" << game_price[i]
                                 << "\t" << game_stock[i] << "\t" << game_category[i] << endl;
                        }
                    }

                    cout << endl;
                    cout << "Press Enter to Go Back to Menu...";
                }

                // 2 Search game
                else if (cust_option == "2")
                {
                    system("cls");
                    cout << "============ CUSTOMER ===========\n";
                    cout << endl;

                    cout << "Enter Game Name to Search : ";
                    string name;
                    cin >> name;
                    cout << endl;

                    bool found = false;

                    for (int i = 0; i < index; i++)
                    {
                        if (game_name[i] == name)
                        {
                            cout << "Found: " << game_name[i] << endl;
                            cout << endl;
                            cout << "NAME\tPRICE\tSTOCK\tCATEGORY\n";
                            cout << endl;
                            cout << game_name[i] << "\t" << game_price[i]
                                 << "\t" << game_stock[i] << "\t" << game_category[i] << endl;
                            found = true;
                        }
                    }

                    if (found == false)
                    {
                        cout << endl;
                        cout << "Not Found\n";
                    }

                    cout << endl;
                    cout << "Press Enter to Go Back to Menu...";
                }

                // 3 Buy Game
                else if (cust_option == "3")
                {
                    system("cls");
                    cout << "============ CUSTOMER ===========\n";
                    cout << endl;

                    cout << "NAME\tPRICE\tSTOCK\tCATEGORY\n";
                    cout << endl;
                    for (int i = 0; i < index; i++)
                    {
                        if (game_name[i] != "")
                        {
                            cout << game_name[i] << "\t" << game_price[i]
                                 << "\t" << game_stock[i] << "\t" << game_category[i] << endl;
                        }
                    }

                    cout << endl;
                    cout << "Enter Game you want to Buy : ";
                    string name;
                    cin >> name;
                    cout << "Enter Stock you want to Buy : ";
                    int qty;
                    cin >> qty;
                    cout << endl;

                    bool found = false;
                    for (int i = 0; i < index; i++)
                    {
                        if (game_name[i] == name && game_stock[i] >= qty)
                        {
                            cart_name[cartIndex] = name;
                            cart_qty[cartIndex] = qty;
                            cartIndex++;

                            float cost = game_price[i] * qty;
                            bill += cost;

                            cout << "GAME ADDED TO LIST! ";
                            found = true;
                            break;
                        }
                    }

                    if (found == false)
                    {
                        cout << endl;
                        cout << "Not Found\n";
                    }

                    cout << endl;
                    cout << "Press Enter to Go Back to Menu...";
                }

                // 4 View Cart
                else if (cust_option == "4")
                {
                    system("cls");
                    cout << "============ CUSTOMER ===========\n";
                    cout << endl;
                    cout << "You have the following items in your Cart\n";
                    cout << "Hurry up buy them before its too late :) \n";
                    cout << endl;

                    for (int i = 0; i < cartIndex; i++)
                    {
                        cout << cart_name[i] << " x" << cart_qty[i] << endl;
                    }

                    cout << endl;
                    cout << "Press Enter to Go Back to Menu...";
                }

                // 5 Checkout
                else if (cust_option == "5")
                {
                    system("cls");
                    cout << "============ CUSTOMER ===========\n";
                    cout << endl;

                    cout << "Bill: " << bill << endl;
                    if (bill > 10000)
                    {
                        bill *= 0.9;
                    }
                    cout << endl;
                    cout << "Final: " << bill << endl;

                    for (int i = 0; i < cartIndex; i++)
                    {
                        for (int j = 0; j < index; j++)
                        {
                            if (game_name[j] == cart_name[i])
                            {
                                game_stock[j] -= cart_qty[i];
                                total_sales += game_price[j] * cart_qty[i];

                                history[historyIndex++] = "Sold: " + cart_name[i] + " Qty: " + to_string(cart_qty[i]);
                            }
                        }
                    }

                    cartIndex = 0;
                    bill = 0;

                    cout << endl;
                    cout << "Purchase Successful ! ";
                    cout << endl;
                    cout << "Press Enter to Go Back to Menu...";
                }

                // 6 History
                else if (cust_option == "6")
                {
                    system("cls");
                    cout << "============ CUSTOMER ===========\n";
                    cout << endl;

                    for (int i = 0; i < historyIndex; i++)
                    {
                        cout << history[i] << endl;
                    }

                    cout << endl;
                    cout << "Press Enter to Go Back to Menu...";
                }

                // 7 Filter
                else if (cust_option == "7")
                {
                    system("cls");
                    cout << "============ CUSTOMER ===========\n";
                    cout << endl;

                    cout << "Enter Category you want to search for : ";
                    string category;
                    cin >> category;

                    cout << endl;
                    for (int i = 0; i < index; i++)
                    {
                        if (game_category[i] == category)
                        {
                            cout << game_name[i] << endl;
                        }
                    }

                    cout << endl;
                    cout << "Press Enter to Go Back to Menu...";
                }

                // 8 Cheapest
                else if (cust_option == "8")
                {
                    system("cls");
                    cout << "============ CUSTOMER ===========\n";
                    cout << endl;

                    float min = game_price[0];
                    string name = game_name[0];

                    for (int i = 1; i < index; i++)
                    {
                        if (game_price[i] < min)
                        {
                            min = game_price[i];
                            name = game_name[i];
                        }
                    }

                    cout << endl;
                    cout << name << " is the Cheapest\n";

                    cout << endl;
                    cout << "Press Enter to Go Back to Menu...";
                }

                // 9 Expensive
                else if (cust_option == "9")
                {
                    system("cls");
                    cout << "============ CUSTOMER ===========\n";
                    cout << endl;

                    float max = game_price[0];
                    string name = game_name[0];

                    for (int i = 1; i < index; i++)
                    {
                        if (game_price[i] > max)
                        {
                            max = game_price[i];
                            name = game_name[i];
                        }
                    }

                    cout << endl;
                    cout << name << " is the Expensive\n";

                    cout << endl;
                    cout << "Press Enter to Go Back to Menu...";
                }

                else if (cust_option == "10")
                {
                    break;
                }

                getch();
            }
        }

        else if (option == "3")
        {
            break;
        }
    }

    cout << endl;
    cout << "THANK YOU, HAPPY SHOPPING AND ENOY \n";
}

