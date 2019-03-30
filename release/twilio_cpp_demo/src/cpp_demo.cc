/*
* This example demonstrates sending a SMS or MMS in C++ using the Twilio REST
* APIs.  After building, you should be able to run it with:
* 
* ./bin/cpp_demo
* 
*/

#include <iostream>
#include <fstream>
#include <string>
#include <memory>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "twilio.hh"

using namespace std;
int main(int argc, char * argv[])
{
		ofstream outfile;
		outfile.open("file.txt");
		std::string result = "";
		std::string arguments = std::to_string(argc);
		result = arguments + "    ";
		result += argv[2];
        //int cmd;
        std::string account_sid = "ACd9110c46dc8ec510188044116deea8ec";
        std::string auth_token = "ddd9531679119250d333b693d58d40ed";
		std::string to_number = argv[1];//argv[1]
        std::string message = argv[2];//argv[2]
        std::string from_number = "+16572958185";
        std::string picture_url;
        bool verbose = false;

        

        // Instantiate a twilio object and call send_message
        std::string response;
        auto twilio = std::make_shared<twilio::Twilio>(
            account_sid, 
            auth_token
        );
        
        bool message_success = twilio->send_message(
                to_number, 
                from_number, 
                message,
                response,
                picture_url,
                verbose
        );

        // Report success or failure
        if (!message_success) {
                if (verbose) {
                        std::cout << "Message send failed." << std::endl;
                        if (!response.empty()) {
                                std::cout << "Response:" << std::endl 
                                        << response << std::endl;
                        }
                }
                return -1;
        } else if (verbose) {
                std::cout << "SMS sent successfully!" << std::endl;
                std::cout << "Response:" << std::endl << response
                        << std::endl;
        }

        return 0;
}
