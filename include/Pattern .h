class Pattern {
public:
    virtual std::string getPattern() const = 0;
};

class NamePattern : public Pattern {
public:
    std::string getPattern() const override {
        // דוגמה לתבנית לשם
        return "[A-Za-z\\s]+"; // דוגמה לתבנית לשם מתאימה לאותיות באנגלית
    }
};

class MailPattern : public Pattern {
public:
    std::string getPattern() const override {
        // דוגמה לתבנית לכתובת דוא"ל
        return "[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}"; // דוגמה לתבנית לכתובת דוא"ל
    }
};

class AddressPattern : public Pattern {
public:
    std::string getPattern() const override {
        // דוגמה לתבנית לכתובת
        return ".+"; // דוגמה לתבנית לכתובת, כאן אני מניח שכל תו חוקי
    }
};