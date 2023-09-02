/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P1)
Full Name  : Thiago Flores
Student ID#: 150237220
Email      : tflores4@myseneca.ca
Section    : NJJ

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/


// ----------------------------------------------------------------------------
// structures




// ----------------------------------------------------------------------------
// function prototypes

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)


// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)


// 3. Opening Message (include the number of products that need entering)


// 4. Get user input for the details of cat food product


// 5. Display the formatted table header


// 6. Display a formatted record of cat food data


// 7. Logic entry point

#define MAX_PRODUCTS 3
#define NUM_GRAMS 64
struct CatFoodInfo {
    int sku, calories;
    double price, weight;
};
int getIntPositive (int* numberIntAddress);
double getDoublePositive (double *numberDouAddress) {
};
void openingMessage (const int unModifiable);
void getCatFoodInfo (const int codeNumber);
void displayCatFoodHeader (void) {

};
void displayCatFoodData (int, double*, int, double*);
void start (void) {

};


