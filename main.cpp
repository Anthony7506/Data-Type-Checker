/*
*Author:  Anthony Tenn
*Creation Date: 10/26/2021
*Modification Date:10/26/2021
*Purpose: Lab Question 3
*/
#include <iostream>
#include <string>
using namespace std;
char InputChar(char iCharacter = '$', string iWord = "Please enter a letter") {
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
while (!isalpha(iCharacter)) {
cout << iWord << endl;
cin >> iCharacter;
}
} while (cin.fail());
return iCharacter;
}
bool InputChar(char& iCharacter, int n, string iWord = "Please enter a letter") {
iCharacter = '%';
int x = n;
n = 1;
iCharacter = 1;
do {
if (n > x) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iCharacter;
n++;
} while (cin.fail() || !isalpha(iCharacter));
return true;
}
bool InputChar(char& iCharacter, int n, char scope, string iWord = "Please enter a letter") {
string userInput;
cout << "Enter max for maximum letter or min for minimum letter." << endl;
cin >> userInput;
if (userInput == "max" || userInput == "Max") {
int x = n;
n = 1;
iCharacter = 1;
do {
cout << "Enter highest letter." << endl;
cin >> scope;
} while (!isalpha(scope));
char high = tolower(scope);
char hCharacter;
do {
if (n > x) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iCharacter;
hCharacter = tolower(iCharacter);
n++;
} while (cin.fail() || !isalpha(iCharacter) || !('a' <= hCharacter && hCharacter <= high));
return true;
}
if (userInput == "Min" || userInput == "min") {
int x = n;
n = 1;
iCharacter = 1;
do {
cout << "Enter lowest letter." << endl;
cin >> scope;
} while (!isalpha(scope));
char high = tolower(scope);
char hCharacter;
do {
if (n > x) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iCharacter;
hCharacter = tolower(iCharacter);
n++;
} while (cin.fail() || !isalpha(iCharacter) || !(high <= hCharacter && hCharacter <= 'z'));
return true;
}
}
bool InputChar(char& iCharacter, int n, char minimum, char maximum, string iWord = "Please enter a letter") {
int x = n;
n = 1;
iCharacter = 1;
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << "Enter last letter in range." << endl;
cin >> maximum;
} while (!isalpha(maximum));
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << "Enter first letter in range." << endl;
cin >> minimum;
} while (!isalpha(minimum));
char high = tolower(maximum);
char inputCharacter;
char lower = tolower(minimum);
do {
if (n > x) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iCharacter;
inputCharacter = tolower(iCharacter);
n++;
} while (cin.fail() || !isalpha(iCharacter) || !(lower <= inputCharacter && inputCharacter <= high));
return true;
}
// DIVIDE BETWEEN FUNCTION GROUP!!
int InputInt(int iInt = 0, string iWord = "Please enter an Integer") {
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iInt;
} while (cin.fail());
return iInt;
}
bool InputInt(int& iInt, int n, string iWord = "Please enter an Integer") {
int x = n;
n = 1;
do {
if (n > x) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iInt;
n++;
} while (cin.fail());
return iInt;
}
bool InputInt(int& iInt, int n, int scope, string iWord = "Please enter an integer") {
string userInput;
cout << "Enter max for maximum integer or min for minimum integer." << endl;
cin >> userInput;
if (userInput == "max" || userInput == "Max") {
int x = n;
n = 1;
iInt = 1;
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << "Enter maximum number in range." << endl;
cin >> scope;
} while (cin.fail());
do {
if (n > x) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iInt;
n++;
} while (cin.fail() || !(iInt <= scope));
return true;
}
if (userInput == "Min" || userInput == "min") {
int x = n;
n = 1;
iInt = 1;
do {
cout << "Enter minimum number in range." << endl;
cin >> scope;
} while (cin.fail());
do {
if (n > x) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iInt;
n++;
} while (cin.fail() || !(iInt >= scope));
return true;
}
}
bool InputInt(int& iInt, int n, int minimum, int maximum, string iWord = "Please enter an integer") {
int x = n;
n = 1;
iInt = 1;
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << "Enter max number in range." << endl;
cin >> maximum;
} while (cin.fail());
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << "Enter min number in range." << endl;
cin >> minimum;
} while (cin.fail());
do {
if (n > x) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iInt;
n++;
} while (cin.fail() || !(iInt <= maximum && iInt >= minimum));
return true;
}
// DIVIDE BETWEEN FUNCTION GROUP!!
unsigned int InputUnsigned(string iWord = "Please enter an unsigned integer") {
long long int x = 0;
unsigned int iUnsigned = 0;
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> x;
iUnsigned = x;
} while (x < 0 || cin.fail() || iUnsigned < x);
return x;
}
bool InputUnsigned(long long& c, int n, string iWord = "Please enter an unsigned integer") {
c = 0;
unsigned int iUnsigned = 0;
int increment = n;
n = 1;
do {
if (n > increment) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> c;
iUnsigned = c;
n++;
} while (c < 0 || cin.fail() || iUnsigned < c);
return true;
}
bool InputUnsigned(long long& c, int n, int scope, string iWord = "Please enter an unsigned integer") {
string userInput;
unsigned int iUnsigned = 0;
int increment = n;
n = 1;
cout << "Enter max or min for range" << endl;
cin >> userInput;
if (userInput == "max" || userInput == "Max") {
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << "Enter maximum number in range" << endl;
cin >> scope;
} while (cin.fail() || (scope < 0));
do {
if (n > increment) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> c;
iUnsigned = c;
n++;
} while (c < 0 || cin.fail() || iUnsigned < c || !(c <= scope));
return true;
}
if (userInput == "min" || userInput == "Min") {
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << "Enter minimum number in range" << endl;
cin >> scope;
} while (cin.fail() || (scope < 0));
do {
if (n > increment) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> c;
iUnsigned = c;
n++;
} while (c < 0 || cin.fail() || iUnsigned < c || !(c >= scope));
return true;
}
}
bool InputUnsigned(long long& c, int n, int maximum, int minimum, string iWord = "Please enter an unsigned integer") {
string userInput;
c = 0;
unsigned int iUnsigned = 0;
int increment = n;
n = 1;
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << "Enter a minimum value" << endl;
cin >> minimum;
} while (cin.fail() || minimum < 0);
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << "Enter a maximum value" << endl;
cin >> maximum;
} while (cin.fail() || maximum < 0);
do {
if (n > increment) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> c;
iUnsigned = c;
n++;
} while (c < 0 || cin.fail() || iUnsigned < c || !(minimum <= c && c <= maximum));
return true;
}
// DIVIDE BETWEEN FUNCTION GROUP!!
long InputLong(long iLong = 0, string iWord = "Please enter a long") {
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iLong;
} while (cin.fail());
return iLong;
}
bool InputLong(long& iLong, int n, string iWord = "Please enter a long") {
int x = n;
n = 1;
do {
if (n > x) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iLong;
n++;
} while (cin.fail());
return iLong;
}
bool InputLong(long& iLong, int n, long scope, string iWord = "Please enter a long") {
string userInput;
cout << "Enter max for maximum long value or min for minimum long value." << endl;
cin >> userInput;
if (userInput == "max" || userInput == "Max") {
int x = n;
n = 1;
iLong = 1;
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << "Enter maximum long value in range." << endl;
cin >> scope;
} while (cin.fail());
do {
if (n > x) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iLong;
n++;
} while (cin.fail() || !(iLong <= scope));
return true;
}
if (userInput == "Min" || userInput == "min") {
int x = n;
n = 1;
iLong = 1;
do {
cout << "Enter minimum long value in range." << endl;
cin >> scope;
} while (cin.fail());
do {
if (n > x) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iLong;
n++;
} while (cin.fail() || !(iLong >= scope));
return true;
}
}
bool InputLong(long& iLong, int n, long minimum, long maximum, string iWord = "Please enter a long") {
int x = n;
n = 1;
iLong = 1;
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << "Enter max long value in range." << endl;
cin >> maximum;
} while (cin.fail());
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << "Enter min long value in range." << endl;
cin >> minimum;
} while (cin.fail());
do {
if (n > x) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iLong;
n++;
} while (cin.fail() || !(iLong <= maximum && iLong >= minimum));
return true;
}
//DIVIDE BETWEEN FUNCTION GROUPS!!
float InputFloat(float iFloat = 0, string iWord = "Please enter a float") {
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iFloat;
} while (cin.fail());
return iFloat;
}
bool InputFloat(float& iFloat, int n, string iWord = "Please enter a float") {
int x = n;
n = 1;
do {
if (n > x) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iFloat;
n++;
} while (cin.fail());
return iFloat;
}
bool InputFloat(float& iFloat, int n, float scope, string iWord = "Please enter a float") {
string userInput;
cout << "Enter max for maximum float value or min for minimum float value." << endl;
cin >> userInput;
if (userInput == "max" || userInput == "Max") {
int x = n;
n = 1;
iFloat = 1;
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << "Enter maximum float value in range." << endl;
cin >> scope;
} while (cin.fail());
do {
if (n > x) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iFloat;
n++;
} while (cin.fail() || !(iFloat <= scope));
return true;
}
if (userInput == "Min" || userInput == "min") {
int x = n;
n = 1;
iFloat = 1;
do {
cout << "Enter minimum float value in range." << endl;
cin >> scope;
} while (cin.fail());
do {
if (n > x) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iFloat;
n++;
} while (cin.fail() || !(iFloat >= scope));
return true;
}
}
bool InputFloat(float& iFloat, int n, float minimum, float maximum, string iWord = "Please enter a float") {
int x = n;
n = 1;
iFloat = 1;
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << "Enter max float value in range." << endl;
cin >> maximum;
} while (cin.fail());
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << "Enter min float value in range." << endl;
cin >> minimum;
} while (cin.fail());
do {
if (n > x) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iFloat;
n++;
} while (cin.fail() || !(iFloat <= maximum && iFloat >= minimum));
return true;
}
// DIVIDE BETWEEN FUNCTION GROUPS!!
double InputDouble(double iDouble = 0.0, string iWord = "Please enter a double") {
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iDouble;
} while (cin.fail());
return iDouble;
}
bool InputDouble(double& iDouble, int n, string iWord = "Please enter a double") {
int x = n;
n = 1;
do {
if (n > x) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iDouble;
n++;
} while (cin.fail());
return iDouble;
}
bool InputDouble(double& iDouble, int n, double scope, string iWord = "Please enter a double") {
string userInput;
cout << "Enter max for maximum double value or min for minimum double value." << endl;
cin >> userInput;
if (userInput == "max" || userInput == "Max") {
int x = n;
n = 1;
iDouble = 1;
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << "Enter maximum float value in range." << endl;
cin >> scope;
} while (cin.fail());
do {
if (n > x) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iDouble;
n++;
} while (cin.fail() || !(iDouble <= scope));
return true;
}
if (userInput == "Min" || userInput == "min") {
int x = n;
n = 1;
iDouble = 1;
do {
cout << "Enter minimum float value in range." << endl;
cin >> scope;
} while (cin.fail());
do {
if (n > x) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iDouble;
n++;
} while (cin.fail() || !(iDouble >= scope));
return true;
}
}
bool InputDouble(double& iDouble, int n, double minimum, double maximum, string iWord = "Please enter a double") {
int x = n;
n = 1;
iDouble = 1;
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << "Enter max double value in range." << endl;
cin >> maximum;
} while (cin.fail());
do {
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << "Enter min double value in range." << endl;
cin >> minimum;
} while (cin.fail());
do {
if (n > x) {
return false;
}
if (cin.fail()) {
cin.clear();
cin.ignore();
}
cout << iWord << endl;
cin >> iDouble;
n++;
} while (cin.fail() || !(iDouble <= maximum && iDouble >= minimum));
return true;
}
int main() {
char iCharacter = 'a';
int iInt = 1;
long long int c = 1;
long iLong = 1;
float iFloat = 1;
double iDouble = 1;
/*
if (InputChar()) {
cout << "You entered: " << iCharacter << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
*/
/*if (InputChar(iCharacter, 3)) {
cout << "You entered: " << iCharacter << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
*/
/*
if (InputChar(iCharacter, 3, 'b')) {
cout << "You entered: " << iCharacter << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
*/
if (InputChar(iCharacter, 3, 'b', 'c')) {
cout << "You entered: " << iCharacter << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
//DIVIDE BETWEEN IF STATEMENTS
/*
if (InputInt()) {
cout << "You entered: " << iInt << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
*/
/*
if (InputInt(iInt, 3)) {
cout << "You entered: " << iInt << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
*/
/*
if (InputInt(iInt, 3, 4)) {
cout << "You entered: " << iInt << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
*/
if (InputInt(iInt, 3, 4, 5)) {
cout << "You entered: " << iInt << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
//DIVIDE BETWEEN IF STATEMENTS
/*
if (InputUnsigned()) {
cout << "You entered: " << c << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
*/
/*
if (InputUnsigned(c, 3)) {
cout << "You entered: " << c << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
*/
/*
if (InputUnsigned(c, 3, 1)) {
cout << "You entered: " << c << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
*/
if (InputUnsigned(c, 3, 1, 1)) {
cout << "You entered: " << c << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
//DIVIDE BETWEEN IF STATEMENTS
/* if (InputLong()) {
cout << "You entered: " << iLong << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
} */
/* if (InputLong(iLong, 3)) {
cout << "You entered: " << iLong << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
} */
/*
if (InputLong(iLong, 3, 4)) {
cout << "You entered: " << iLong << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
*/
if (InputLong(iLong, 3, 4, 5)) {
cout << "You entered: " << iLong << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
//DIVIDE BETWEEN IF STATEMENTS
/*if (InputFloat()) {
cout << "You entered: " << iFloat << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}*/
/*
if (InputFloat(iFloat, 3)) {
cout << "You entered: " << iFloat << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
*/
/*
if (InputFloat(iFloat, 3, 2)) {
cout << "You entered: " << iFloat << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
*/
if (InputFloat(iFloat, 3, 2, 1)) {
cout << "You entered: " << iFloat << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
//DIVIDE BETWEEN IF STATEMENTS
/*
if (InputDouble()) {
cout << "You entered: " << iDouble << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
*/
/*
if (InputDouble(iDouble, 3)) {
cout << "You entered: " << iDouble << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
*/
/*
if (InputDouble(iDouble, 3, 2)) {
cout << "You entered: " << iDouble << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
*/
if (InputDouble(iDouble, 3, 2, 1)) {
cout << "You entered: " << iDouble << endl;
}
else
{
cout << "Test failed from too many attempts." << endl;
}
//main();
return 0;
}
