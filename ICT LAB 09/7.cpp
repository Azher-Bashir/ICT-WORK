////An online shopping system allows customers to copy and transfer shopping carts between users.
////Each shopping cart should have a dynamically allocated array of product names and an integer
////to store the number of products in the cart.Customers report issues when duplicating carts, as
////modifying one cart sometimes affects the other, indicating a shallow copy issue.
////Implement a ShoppingCart class with :
////	• A dynamically allocated array to store product names.
////	• A copy constructor(deep copy) to duplicate carts safely.
////	• A move constructor for efficient cart transfers.
////	• A destructor to prevent memory leaks.
////	Test the implementation by creating a shopping cart for one customer.Duplicating the cart for
////	another customer(copy constructor).Transferring the cart ownership to a third customer(move
////		constructor).
////	Sample Output :
////Customer A's Original Cart:
////Shopping Cart contains : Laptop, Headphones, Mouse
////
////Customer B Duplicates the Cart(Deep Copy Constructor Called) :
////	Shopping Cart contains : Laptop, Headphones, Mouse
////	Transferring Cart from Customer B to Customer C(Move Constructor Called) :
////	Shopping Cart contains : Laptop, Headphones, Mouse
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class ShoppingCart
//{
//	string* product;
//	int num_products;
//
//
//	public:
//			ShoppingCart();
//			ShoppingCart(string*, int);
//			ShoppingCart(const ShoppingCart&);
//			ShoppingCart(ShoppingCart&&);
//			~ShoppingCart();
//			void set_product(string*, int);
//			string* get_product();
//			void set_num_products(int);
//			int get_num_products();
//			void print();
//
//};
//
//ShoppingCart::ShoppingCart()
//{
//	product = new string[3];
//	product[0] = "Laptop";
//	product[1] = "Headphones";
//	product[2] = "Mouse";
//	num_products = 3;
//}
//
//ShoppingCart::ShoppingCart(string* p, int n)
//{
//	product = new string[n];
//	for (int i = 0; i < n; i++)
//	{
//		product[i] = p[i];
//	}
//	num_products = n;
//}
//
//ShoppingCart::ShoppingCart(const ShoppingCart& obj)
//{
//	product = new string[obj.num_products];
//	for (int i = 0; i < obj.num_products; i++)
//	{
//		product[i] = obj.product[i];
//	}
//	num_products = obj.num_products;
//	cout << "Customer B Duplicates the Cart(Deep Copy Constructor Called) :" << endl;
//}
//
//ShoppingCart::ShoppingCart(ShoppingCart&& obj)
//{
//	product = obj.product;
//	num_products = obj.num_products;
//	obj.product = nullptr;
//	obj.num_products = 0;
//	cout << "Transferring Cart from Customer B to Customer C(Move Constructor Called) :" << endl;
//}
//
//ShoppingCart::~ShoppingCart()
//{
//	delete[] product;
//}
//
//void ShoppingCart::set_product(string* p, int n)
//{
//	product = new string[n];
//	for (int i = 0; i < n; i++)
//	{
//		product[i] = p[i];
//	}
//	num_products = n;
//}
//
//
//string* ShoppingCart::get_product()
//{
//	return product;
//}
//
//void ShoppingCart::set_num_products(int n)
//{
//	num_products = n;
//}
//
//int ShoppingCart::get_num_products()
//{
//	return num_products;
//}
//
//void ShoppingCart::print()
//{
//	for (int i = 0; i < num_products; i++)
//	{
//		cout << product[i] << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	string p[3] = { "Laptop", "Headphones", "Mouse" };
//	ShoppingCart A;
//	ShoppingCart B(p, 3);
//	ShoppingCart C = move(B);
//	cout << "Customer A's Original Cart:" << endl;
//	cout << "Shopping Cart contains : ";
//	A.print();
//	cout << endl;
//	cout << "Customer B Duplicates the Cart(Deep Copy Constructor Called) :" << endl;
//	cout << "Shopping Cart contains : ";
//	B.print();
//	cout << endl;
//	cout << "Transferring Cart from Customer B to Customer C(Move Constructor Called) :" << endl;
//	cout << "Shopping Cart contains : ";
//	C.print();
//	cout << endl;
//	return 0;
//}
//
