
#include <iostream>
#include "Human.h"

#include "Employee.h"

#include "Eqipment.h"

#include "Ingredient_supplier.h"

#include "Beverage.h"
#include "Pizza.h"
#include "Pizza_maker.h"
#include "Waiter.h"
#include "Menu.h"
#include "Client.h"
#include "Order.h"
#include "Pizzeria_database.h"
#include "Accountant.h"
#include "Administrator.h"
#include "Director.h"
#include "Manager.h"

int main()
{
    Human a("ivan", 12);
    Employee b(1.3, 1.2,1.5);
    Equipment c("ivan", 1.2);
    Ingredient_supplier aa("ivan", 1.2);
    Beverage d("ivan", 1.2);
    Pizza e("ivan", 1.2);
    Pizza_maker v("ivan", 1, 1.2, 1.2, 1.3);
    Waiter vv("ivan", 1, 1.2, 1.2, 1.2);
    Menu cc();
    Client ff("ivan", 13);
    Order aaa(e,d,56.0);
    Pizzeria gg("ivan");
    Accountant ii("ivan", 1, 1.2, 1.2, 1.2);
    Administrator aaaa("ivan", 1, 1.2, 1.2, 1.2);
    Director director("ivan", 1, 1.2, 1.2, 1.2);
    std::cout << "All is working!\n";
}
