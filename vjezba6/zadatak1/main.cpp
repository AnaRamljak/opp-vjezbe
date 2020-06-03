#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <sstream>
#include "Library.h"
#include "HardCopyBook.h"
#include "EBook.h"

using namespace std;

int main()
{
    Library l;
    vector <Book*> Books;
    HardCopyBook hcb("Aldous Huxley", "Brave New World", 2005, 286);
    HardCopyBook hcb1("Neal Stephenson", "Snow Crash", 2005, 476);
    HardCopyBook hcb2("Douglas Adams", "The Hitchhiker's Guide to the Galaxy",2006, 305);
    HardCopyBook hcb3("Pekka Himanen", "Hakerska etika", 2006, 191);
    HardCopyBook hcb4("Aldous Huxley", "Island",2007, 336);
    HardCopyBook hcb5("Neal Stephenson", "Cryptonomicon",2007, 918);

    Ebook eb("Shin Takahashi, Iroha Inoue", "The Manga Guide to Linear Algebra",2008, "No_Starch_The_Manga_Guide_to_Linear_Algebra.pdf", 34.6);
    Ebook eb1("Hideo Nitta, Keita Takatsu", "The Manga Guide to Physics",2008, "No_Starch_The_Manga_Guide_to_Physics.pdf", 49.7);
    Ebook eb2("Allen Holub", "Enough Rope to Shoot Yourself in the Foot",2009, "Enough_Rope_to_Shoot_Yourself_in_the_Foot.pdf", 21.2);
    Ebook eb3("Simson Garfinkel, Daniel Weise and Steven Strassmann", "The Unix - Haters Handbook",2009, "unixhatershandbook.pdf", 3.5);

    Book* b(&hcb); Books.push_back(b);
    Book* b1(&hcb1); Books.push_back(b1);
    Book* b2(&hcb2); Books.push_back(b2);
    Book* b3(&hcb3); Books.push_back(b3);
    Book* b4(&hcb4); Books.push_back(b4);
    Book* b5(&hcb5); Books.push_back(b5);
    Book* b6(&eb);  Books.push_back(b6);
    Book* b7(&eb1); Books.push_back(b7);
    Book* b8(&eb2); Books.push_back(b8);
    Book* b9(&eb2); Books.push_back(b9);
    l.setBooks(Books);
    vector <string> gbba = l.getBookByAuthor("Aldous Huxley");
    vector <Book*> t = l.getBooksByTitle("The");
    int s = l.getSize("Allen Holub");
    for (vector<string>::iterator it = gbba.begin(); it != gbba.end(); ++it)
    {
        cout << *it << ",";
    }
    cout << endl;
    for (int i = 0; i < t.size(); i++)
    {
        cout << t.at(i)->author << ",";
        cout << t.at(i)->title << endl;
    }

    cout << s << endl;

}

