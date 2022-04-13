void isPangram()
{
    int i;
    int count = 0;
    char str[26];
    cout << "Enter a string to check if its Pangram or not: ";
    for (i = 0; i < 26; i++) {
        cin >> str[i];

        if (i >= 97 && i <= 122) {

            cout << "It is Pangram" << endl;
            break;
        } else {
            cout << "it is not Pangram" << endl;
            break;
        }

    }
}

int main()
{
    isPangram();
    system("pause");
}
