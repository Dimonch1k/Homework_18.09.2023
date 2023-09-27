#include <iostream>
using namespace std;



#include "MobilePhone.h"
#include "Component.h"


int main()
{
	MobilePhone phone;

	phone.on_off_Phone();

	phone.showDisplay();

	phone.on_Light_in_Camera();
}