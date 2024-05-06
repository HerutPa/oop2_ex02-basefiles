class Pattern {
public:
    virtual std::string getPattern() const = 0;
};

class NamePattern : public Pattern {
public:
    std::string getPattern() const override {
        // ����� ������ ���
        return "[A-Za-z\\s]+"; // ����� ������ ��� ������ ������� �������
    }
};

class MailPattern : public Pattern {
public:
    std::string getPattern() const override {
        // ����� ������ ������ ���"�
        return "[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}"; // ����� ������ ������ ���"�
    }
};

class AddressPattern : public Pattern {
public:
    std::string getPattern() const override {
        // ����� ������ ������
        return ".+"; // ����� ������ ������, ��� ��� ���� ��� �� ����
    }
};