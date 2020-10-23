#include <tasks.hpp>
#include <string>

// Task 1
void multi_2(std::vector<int> &input) {
    for (int i = 0; i < (int) input.size(); i++) {
        input[i] *= 2;
    }

    void reduce_a(std::vector<int> &input, int a) {
        for (int i = 0; i < (int) input.size(); i++) {
            input[i] -= a;
        }
    }

    void div_on_first(std::vector<int> &input) {
        for (int i = 0; i < (int) input.size(); i++) {
            input[i] /= input[0];
        }
    }
    // Task 2.
    int sum(const std::vector<int> &input) {
        int sum = 0;
        for (int i = 0; i < input.size(); i++) sum += input[i];
        return sum;
    }
    int square_sum(const std::vector<int> &input) {
        int sum = 0;
        for (int i = 0; i < input.size(); i++)sum += pow(input[i], 2);
        return sum;
    }
    int sum_six(const std::vector<int> &input) {
        in
        t sum = 0;
        for (int i = 0; i < 6; i++) sum += input[i];
        return sum;
    }
    int sum_k(const std::vector<int> &input, int k1, int k2) {
        int sum = 0;
        for (int i = k1; i < k2 + 1; i++) sumK += input[i];
        return sum;
    }
    int mean(const std::vector<int> &input) {
        return sum(&input) / input.size();
    }
    int mean_k(const std::vector<int> &input, int s1, int s2) {
        int sum = 0, s = 0;
        for (int i = s1; i < s2 + 1; i++) {
            sum += input[i];
            s++;
        }
        return sum /= s;
    }
// Task 3.
    void swap_el(std::vector<int> &input) {
        int a;
        for (int i = 0; i < 3; i++) {
            a = input[i];
            inputi]= mas2[n - 4 + i];
            input[n - 4 + i] = a;
        }
    }
// Task 4.
    void remove_negative(std::vector<int> &input) {
        for (int i = 0; i < input.size(); i++) {
            if (input[i] < 0)input.erase(input.begin() + i - 1);
            break;
        }
    }
    void remove_last_even(std::vector<int> &input) {
        for (int i = input.size() - 1; i >= 0; i--) { if (input[i] % 2 != 0) input.erase(input.begin() + i); }
    }
// Task 5.
    bool name_is_even(const std::string &name) {
        if (name.size() % 2 == 0) return true;
        else return false;
    }

// Task 6.
    bool first_is_longer(const std::string &name_one, const std::string &name_two) {
        if (name_one.size() > name_two.size()) return true;
        else return false;
    }

// Task 7.
    void longest_shortest(const std::string &name_one, const std::string &name_two,
                          const std::string &name_three, std::string &the_longest,
                          std::string &the_shortest) {
        if (name_one.size() > name_two.size()) {
            the_longest = name_one;
            the_shortest = name_two;
            if (name_three.size() < name_two.size())the_shortest = name_three;
            if (name_three.size() > name_one.size())the_longest = name_three;
        } else {
            the_longest = name_two;
            the_shortest = name_one;
            if (name_three.size() > name_two.size())the_longest = name_three;
            if (name_three.size() < name_one.size())the_shortest = name_three;
        }
    }

// Task 8.
    std::string sub_str(const std::string &word, int m, int n) {
        std::string s = "";
        for (int i = m; i < n + 1; i++) s += word[i];
        return s;
    }

// Task 9.
    void add_stars(std::string &word) {
        word.insert(0, word.size(), '*');
    }


// Task 10.
    int count_of_a(const std::string &word) {
        int m = 0, sum = 0;
        for (int i = 0; i < (int) word.size(); i++)if (word[i] == 'a')m++;
        sum = (m / word.size()) * 100;
        return sum;

    }

// Task 11.
    std::string replace_can(const std::string &new_word) {
        bool flag = true;
        int pos = 0;
        while (flag) {
            pos = new_word.find("can", 0);
            if (pos != (int) std::string::npos)flag = false;
            new_word.replace(pos, 3, "new_word");
        }
        return new_word;
    }
}