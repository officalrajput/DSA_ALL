int main()
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    cout << "All Substrings: ";
    AllSubstrings(s);

    return 0;
}