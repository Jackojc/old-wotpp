#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <chrono>

#include <cstdint>

#include <token.h>
#include <libs/logger.h>
#include <libs/lexer.h>



int main(int, const char*[]) {
    auto input = ws::module::receive_all();

    if (input.empty()) {
        ws::module::warnln("no input on stdin!");
		return 1;
    }

	return 0;
}































