#include <iostream>
#include <string>
using namespace std;

struct PublicProfile {
    string name;
    int age;
    string gender;
    string summary;
};

template<class T>
class TemplateForm {
public:
    static void render(const T &p) {
        cout << "======= LinkTree Profile =======\n";
        cout << "Name   : " << p.name << "\n";
        cout << "Age    : " << p.age << "\n";
        cout << "Gender : " << p.gender << "\n";
        cout << "Branch  : " << p.summary << "\n";
        cout << "=================================\n\n";
    }
};

class DataFetcher; // onlyy the public and protected are fetched

class LinkedIn {
private:
    string email;
    string password;
public:
    string name;
    string headline;
    LinkedIn(const string &n, const string &h, const string &e, const string &pw)
        : email(e), password(pw), name(n), headline(h) {}
    friend class DataFetcher;
};

class Instagram {
private:
    string email;
    string password;
protected:
    int age;
public:
    string bio;
    Instagram(int a, const string &b, const string &e, const string &pw)
        : email(e), password(pw), age(a), bio(b) {}
    friend class DataFetcher;
};

class Twitter {
private:
    string email;
    string password;
protected:
    string gender;
public:
    Twitter(const string &g, const string &e, const string &pw)
        : email(e), password(pw), gender(g) {}
    friend class DataFetcher;
};

class DataFetcher {
public:
    static PublicProfile collectData(const LinkedIn &li, const Instagram &ig, const Twitter &tw) {
        PublicProfile p;
        p.name = li.name;
        p.age = ig.age;
        p.gender = tw.gender;
        p.summary = li.headline;
        return p;
    }
};

int main() {
    LinkedIn li("Pradeep Awasthi", "Instrumentation & Control Student", "pawasthi063@gmail.com", "Pass94823223");
    Instagram ig(19, "Electronics tinkerer | Arduino", "p.awasthi_18", "Pass94554");
    Twitter tw("Male", "pawasthi024@gmail.com", "Pass241422");

    PublicProfile profile = DataFetcher::collectData(li, ig, tw);
    TemplateForm<PublicProfile>::render(profile);

    return 0;
}
