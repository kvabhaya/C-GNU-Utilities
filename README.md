# Retail and E-commerce Manager
<html>
<p><img src="https://lh3.googleusercontent.com/vuGw4N-0W78lrZOFVmAg9l2FOHjMUL4idrbnenTijUG0l-khFN2a0URWxsPTb3oVDRpnBASV69GuC7OBzUujpc9N8-6LwPdxXO-4fQRRM__LFQ7iYiOmJ2Cedvgy70kRPwVQHphlq-_ygEc9WtWd-UI" width="624" height="275"></p>

<h1>Introduction</h1>
<p>The Retail and E-commerce Manager is a command-line tool designed to help manage products for an online store. The primary goal of this program is to demonstrate fundamental data manipulation and user interaction in C. It provides users with an easy-to-use interface to perform CRUD (Create, Read, Update, Delete) operations on the product inventory.</p>
<p><br></p>
<p><img src="https://lh3.googleusercontent.com/EWk3NEsQAShWpQNQCt759FzJ-sXSz7NqbvDB5cY7NkXUgDT4oGfYkRgEa-sfnbqcONfre9qKC3ADxll6KTCpkWyCOwGHbUIybhFVWAemdwdzmTI4zlCt9l_kcxT9ygKyuiz76G66Z5SV_oKcH2yonlQ" width="437" height="620"></p>
<p><br></p>
<h1>Functionality</h1>
<p>The program offers the following functionalities:</p>
<p><br></p>
<p>- Add Product: Users can add new products to the inventory by entering the product&apos;s name, price, and quantity.</p>
<p><br></p>
<p>- Edit Product: Users can update existing product information, including the product name, price, and quantity, based on the product ID.</p>
<p><br></p>
<p>- Delete Product: Users can remove a product from the inventory by providing the product ID.</p>
<p><br></p>
<p>- View Products: The application displays a list of all products with their respective IDs, names, prices, and quantities.</p>
<p><br></p>
<p>- Exit: The user can choose to exit the program.</p>
<h1>Program Design</h1>
<p>The program utilizes a simple data structure, `struct Product`, to represent individual products. The product details, including ID, name, price, and quantity, are stored in an array of `Product` structures named `products`.</p>
<p><br></p>
<h1>Key Functions</h1>
<p>- `addProduct()`: This function allows users to add a new product to the inventory. It checks if the maximum capacity of products has been reached before adding a new product.</p>
<p><br></p>
<p>- `editProduct()`: Users can edit an existing product by providing the product ID. The function searches for the product based on the ID and updates its attributes.</p>
<p><br></p>
<p>- `deleteProduct()`: Users can remove a product from the inventory using its product ID. The function rearranges the array to close the gap left by the deleted product.</p>
<p><br></p>
<p>- `viewProducts()`: This function displays all products&apos; details in tabular form, providing a comprehensive view of the current inventory.</p>
<p><br></p>
<h1>User Interaction</h1>
<p>The program prompts the user with a menu of options and waits for the user to input their choice. After completing the chosen operation, the user is returned to the main menu to continue with other tasks or exit the program.</p>
<p><br></p>
<h1><img src="https://lh6.googleusercontent.com/rAhS6NWkEW22GC57mL_ed-NASNlI4yfLxrnzhsMr0ttxFwh3FHgF4_W6kQ00eyt1RdbDHqPoXO7ltiqRJqIIkEcvNi0AiGgwLn-dilh6dWaGun5BOZWEWshlAKuS-z0I61NaiM5FnQow_cj7PJXEpA0" width="624" height="327"><img src="https://lh6.googleusercontent.com/tQm1dgAImaKDNsE_oxqodyQivMmXcUlvLUu-5EGMcgnO22kVhWUnoyCpgmJhjGjbEpQW_3pKgfX_wg9HSKKfOcZoeErhmp1CUEUCphOPj31IKawWR8BgBvzsobYyTxUI5WyBOOXYnNyXyriSaaRIn8U" width="624" height="325"><img src="https://lh4.googleusercontent.com/QDt4fOVQigzh56pvjXffFLLiecrJjSwSOzRRVrr0_8m3gaxqxKTHesaqVTgUM7hFQzfIEiQSasr3r6cAUd6Mjae1fuG4IQrwkIOyongrCbdGLXwY9fLVfF5yJ58rQrYXDhFJ6bBsXULLISr3Rbn23VE" width="624" height="329"><img src="https://lh6.googleusercontent.com/d-dBzNtsZ7C3WCQajafPyZcEqLxttabviTwGOBV-caQrTbd6aocAHT_Sac60H7LZqNNiOMfpIIL4WY3cPuPabGJP0T1g-cVcB7zLvVBcZ1SdSqo5UvGlOg4A6ghVTGQieEqnRg4uPuYl6rwE2gxGNCg" width="624" height="327"></h1>
<p><br></p>
<h1>Limitations and Improvements</h1>
<p>- The current program lacks data persistence, meaning that all product information is lost after the program terminates. To address this, data could be stored in files or a database.</p>
<p><br></p>
<p>- Input validation is minimal in the current implementation. Enhancements could be made to validate user input and handle errors more gracefully.</p>
<p><br></p>
<p>- The program&apos;s user interface is limited to the command-line interface. In a real-world application, a graphical user interface (GUI) could be developed for better user experience.</p>
<h1>CONCLUSION</h1>
<p>The Retail and E-commerce Manager is a basic yet functional C program that demonstrates essential product management functionalities for an online store. Although it serves as a simple example, it provides a foundation for more complex e-commerce systems. The program can be expanded, enhanced, and customized to meet the requirements of a real-world retail and e-commerce management system.</p>
<p><br></p>
<p>Overall, this project helps to introduce beginners to C programming and lays the groundwork for building more sophisticated applications in the future.</p>
<p><br></p>
<p><br></p>
</html>
