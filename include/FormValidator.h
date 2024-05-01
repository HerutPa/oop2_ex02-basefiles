#pragma once

enum DESTINATION { ROME = 1, PRAGUE, NEW_YORK, INDIA, THAILAND };
enum TIME { MORNING_NOON = 1, AFTER_NOON_EVENING, NIGHT };
enum WIFI { NONE = 1, BASIC, EXTENDED };
//(1 - Morning/Noon, 2 - After-Noon/Evening, 3 - Night)
//(1 - Rome, 2 - Prague, 3 - New York, 4 - India, 5 - Thailand)
//(1 - None, 2 - Basic, 3 - Extended)

class FormValidator
{
public:
	virtual const bool checkValidation() = 0;

private:

};

