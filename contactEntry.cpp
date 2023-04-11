#include "contactEntry.h"

contactEntry::contactEntry() {
}

contactEntry::contactEntry(sql::SQLString f, sql::SQLString l, sql::SQLString p, sql::SQLString t,sql::SQLString e, sql::SQLString a, sql::SQLString I) {
    first = f;
    last = l;
    phone = p;
    type = t;
    email = e;
    age = a;
    ID=I;
}

string contactEntry::text() {
	string result = ID + ". ";
	result += first + " ";
	result += last + " ";
	result += phone + " ";
	result += type + " ";
	result += email + " ";
	result += age;

	return result;

}

string contactEntry::json() {
	string result = "{\"ID\":\"" + ID + "\",";
	result += "\"first\":\"" + first + "\",";
	result += "\"last\":\"" + last + "\",";
	result += "\"phone\":\"" + phone + "\",";
	result += "\"type\":\"" + type + "\",";
	result += "\"email\":\"" + email + "\",";
	result += "\"age\":\"" + age + "\"}";
	return result;

}
