#include"mytemperature.h";
double celsius_to_fah(double cel)
{
	double fah;
	fah = cel * 1.80 + 32;
	return fah;
}
double fahrenheit_to_cels(double fah)
{
	double cel;
	cel = (fah - 32) / 1.80;
	return cel;
}