#include "string_function.h"
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

/*
구현할 명령어 목록
help
quit
list
reservation

cancel
deposit
information
*/

void user_show_guide();
void user_help(vector<string> v);
void user_quit();
void user_list(vector<string> v);
void user_reservation(vector<string> v);
void user_prompt(string userID);
void user_cancel(string flightName, string userID);
void user_deposit(string iMoney, string userID);
void user_information(string userID);
void user_check(vector<string> v, string userID);
