#pragma once


namespace wpp {

    using TokenType = uint8_t;

    enum: TokenType {
        EMPTY,
        MATH,
        TEXT,
        BOLD,
        ITALIC,
        CITATION
    };


    constexpr const char* TYPE_STR[] = {
        "EMPTY",
        "MATH",
        "TEXT",
        "BOLD",
        "ITALIC",
        "CITATION"
    };








    struct Token {
        TokenType type;
        std::string_view val;
    };

    std::ostream& operator<<(std::ostream& os, const Token& t) {
        const auto& [type, val] = t;

        return (
            os << "{ " << TYPE_STR[type] << ", '" << val << "' }"
        );
    }


}
