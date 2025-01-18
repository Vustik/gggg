# №1: Замінити всі пробіли на табуляції
def replace_spaces_with_tabs(string) :
    return string.replace(" ", "\t")

    # №2 : Визначити кількість літер, цифр та інших символів
    def count_chars(string) :
    letters = sum(c.isalpha() for c in string)
    digits = sum(c.isdigit() for c in string)
    others = len(string) - letters - digits
    return letters, digits, others

    # №3: Підрахувати кількість слів у реченні
    def count_words(sentence) :
    return len(sentence.split())

    # №4 : Перевірити чи є рядок паліндромом
    def is_palindrome(string) :
    normalized = ''.join(c.lower() for c in string if c.isalnum())
    return normalized == normalized[:: - 1]

    # №5 : Замінити всі "." на "!"
    def replace_dots_with_exclamations(string) :
    return string.replace(".", "!")

    # №6 : Порахувати кількість входжень символа
    def count_occurrences(string, char) :
    return string.count(char)

    # Тести
    if __name__ == "__main__":
print(replace_spaces_with_tabs("Hello World"))
print(count_chars("Hello123!"))
print(count_words("How many words are here?"))
print(is_palindrome("A man a plan a canal Panama"))
print(replace_dots_with_exclamations("This.is.a.test"))
print(count_occurrences("This is a test", "i"))
