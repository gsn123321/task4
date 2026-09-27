#include <iostream>

int main()
{
    //double profit[12];

    //for (int i = 0; i < 12; ++i) {
    //    std::cin >> profit[i];
    //}

    //double sum = 0;
    //double max = profit[0];
    //double min = profit[0];

    //int maxm = 1;
    //int minm = 1;

    //for (int i = 0; i < 12; ++i) {
    //    sum += profit[i];

    //    if (profit[i] > max) {
    //        max = profit[i];
    //        maxm = i + 1;
    //    }
    //    if (profit[i] < min) {
    //        min = profit[i];
    //        minm = i + 1;
    //    }
    //}

    //double srd = sum / 12;

    //std::cout << sum << '\n';
    //std::cout << max << '\n';
    //std::cout << min << '\n';
    //std::cout << srd << '\n';


    //2

    //int numbers[10] = { 1, 5 , 8 , 3 , 7 , 2, 9 , 4 , 6, 10 };

    //for (int i = 9; i >= 0; i--) {
    //    std::cout << numbers[i] << ' ';
    //}


    //3

    //double sides[5];

    //for (int i = 0; i < 5; ++i) {
    //    std::cin >> sides[i];
    //}

    //double per = 0;

    //for (int i = 0; i < 5; ++i) {
    //    per += sides[i];
    //}

    //std::cout << per;

    //4

    //int numbers[9] = { 0, -11, 0, 12, 54, 0, 0, -40, 11 };

    //int position = 0;

    //for (int i = 0; i < 9; ++i) {
    //    if (numbers[i] != 0) {
    //        numbers[position] = numbers[i];
    //        position++;
    //    }
    //    
    //}

    //for (int i = position; i < 9; ++i) {
    //    numbers[i] = -1;
    //}

    //for (int i = 0; i < 9; ++i) {
    //    std::cout << numbers[i] << ' ';
    //}


    // 5

    int first[5] = { 10, 0, 52, -10, -44 };
    int second[5] = { 54, 0, -100, 12, 4 };

    int result[10];
    int position = 0;

    for (int i = 0; i < 5; ++i) {
        if (first[i] > 0) {
            result[position] = first[i];
            position++;
        }

        if (second[i] > 0) {
            result[position] = second[i];
            position++;
        }
    }

    for (int i = 0; i < 5; ++i) {
        if (first[i] == 0) {
            result[position] = first[i];
            position++;
        }
        
        if (second[i] == 0) {
            result[position] = second[i];
            position++;
        }
    }

    for (int i = 0; i < 5; i++) {
        if (first[i] < 0) {
            result[position] = first[i];
            position++;
        }

        if (second[i] < 0) {
            result[position] = second[i];
            position++;
        }
    }

    for (int i = 0; i < 10; ++i) {
        std::cout << result[i] << ' ';
    }
}

