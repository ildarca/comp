#include <iostream>
#include <string>

////////////////моя лень!//////////////////
void PrintArr(int *arr, int N)
{
    for (int i(0); i < N; i++)
    {
        std::cout << arr[i] <<"  ";
    }
}
void FillArr(int* arr, int N)
{
    for (int i(0); i < N; i++)
    {
        arr[i] = i;
    }
}
///////////////////////////////////////////
void FillDArr(int(*arr)[3], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = rand() % 100+1;
        }
    }
}
void PrintDArr(int(*arr)[3], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cout << arr[i][j]<<"(" << i << j << ")" << "\t";
        }
        std::cout << "\n";
    }
}
void FindMin(int(*arr)[3], int N,int &indI,int &indJ)
{
    int min = arr[0][0];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                //int il = i;
                //int ik = j;
                indI = i;
                indJ = j;
            }
        }
    }
    //std::cout << "&& " << min << " &&" << std::endl;
    //std::cout << indI << " " << indJ;
}
void FillNull(int(*arr)[3], int N, int& indI, int& indJ)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (indJ == j || indI == i)
            {
                arr[i][j] = 0;
            }
        }
    }
}
/// ///////////////////////////////////////
int find_Min_Ind(int* arr, int N)
{
    int minInd{0};
    for (int i = 1; i < N; i++)
    {
        if (arr[i] < arr[minInd])
        {
            minInd = i;
        }
    }
    return minInd;
}
int find_Max_Num(int* arr, int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
void pop_back(int*& a, int& n, int& pos)
{
    if (pos >= 1 && pos <= n)
    {
        for (int i = pos - 1; i < n - 1; i++)
            a[i] = a[i + 1];
        n--;
    }
}
///////////////////////////////////////////


/////////////////////// для дин массивов ///////////////////////////////
void PrintDinDArr(int **arr, const int R, const int C)
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            std::cout << arr[i][j]<<"\t";
        }
        std::cout <<"\n";
    }
}
void FillDinDArr(int** arr, const int R, const int C)
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            arr[i][j] = rand() % 50 + 1;
        }
    }
}
void PrintDinDArr(int** arr, const int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << "\n";
        std::cout << "\n";
    }
}
void FillDinDArr(int** arr, const int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = rand() % 50 + 1;
        }
    }
}

int FindMin_Din(int** arr, const int R, const int C)
{
    int min = arr[0][0];
    int minI{ 0 };
    int minJ{ 0 };

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                minI = i;
                minJ = j;
            }
        }
    }
    return arr[minI][minJ];
}
void FindMinInd_Din(int** arr, const int R, const int C,int &minI,int &minJ)
{
    int min = arr[0][0];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                minI = i;
                minJ = j;
            }
        }
    }
}
void FindMinInd_Din(int** arr, const int N, int& minI, int& minJ)
{
    int min = arr[0][0];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                minI = i;
                minJ = j;
            }
        }
    }
}
////////////////////////////////////////////////////////////////////////

/*не трогать,сьест*/
int funct() {
    char c;
    char digit[12345];
    int i = 0, j = 0, ans = 0;;
    std::cin.get(c);
    while (c != '\n') {
        if (c != '+') {
            digit[j] = c;
            j++;
        }
        else {
            int desyat = 0;
            for (int t = i; t < j; t++) {
                ans += (digit[t] - '0') * pow(10, j - t - 1);
                desyat++;
            }
            i = j;
        }
        std::cin.get(c);
    }
    int desyat = 0;
    for (int t = i; t < j; t++) {
        ans += (digit[t] - '0') * pow(10, j - t - 1);
        desyat++;
    }
    return ans;
}
/////


//for 17!
void rename(std::string& name, std::string& ren)
{
    for (int i(0); i < name.size() - 1; i++)
    {

        if (name[i] == '.')
        {
            name.erase(i);
        }
    }
    name = name + '.' + ren;
}


void KS10()
{
    //арифм прогрессия
    int N, a1, d;
    std::cout << "Введите число: ";
    std::cin >> N;
    std::cout << "Введите первый элемент: ";
    std::cin >> a1;
    std::cout << "Введите разность: ";
    std::cin >> d;

    int* arr = new int[N];

    for (int i = 0; i < N; i ++)
    {
        arr[i] = a1+d*i;
    }

    PrintArr(arr, N);
    delete[] arr;
}
void KS11()
{
    //cлучайный порядок
    int N = 10;
    int* arr = new int[N];

    FillArr(arr, N);
    PrintArr(arr, N);

    std::cout << "\n";

    for (int j = N; j >= 1; j--)
    {
        int k = rand() % j;
        int tmp = arr[j - 1];
        arr[j - 1] = arr[k];
        arr[k] = tmp;
    }

    PrintArr(arr, N);

    delete[] arr;

}
void KS12()
{
    int N(0);
    int count(0);

    std::cout << "Введите число: ";
    std::cin >> N;

    int* arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 2000 + 1000;
    }

    for (int i = 0; i < N; i++)
    {
        int k = arr[i] % 100 / 10;
        if (k % 2 == 0 && k != 0)
        {
            count++;
        }
    }
    std::cout << count;
    delete[] arr;
}
void KS14()
{
    /// 
    /// палиндром
    /// 
    std::string str;
    std::cout << "Введите строку: ";
    std::cin >> str;
    
    bool tf = true;

    for (int i(0); i < str.size(); i++)
    {
        if(str[i] != str[str.size() - i - 1])
        {
            tf=false;
        }
    }

    if (tf)
        std::cout << "Yes";
    else
        std::cout << "No";
}
void KS15()
{
    std::string il="1+2+3";

    std::string str;
    int sum(0);
    int sum1(0);


    int i(0);
    while (i<=6)
    {
        if (il[i] == '+')
        {
            
            sum += stoi(str);
            str = "";

        }

        else
        {
            str += il[i];
        }

        i++;    }

    std::cout << sum;

}
void KS16()
{
    std::string str;
    getline(std::cin, str);

    std::string stg = "";
    std::string stf="";

    bool fl = true;
    
    for (int i(0); i < str.size() - 1; i++)
    {
        if (str[i] == ' ')
        {
            fl = false;
        }

        if (fl)
        {
            stg += str[i];
        }

        else if(str[i] == ' ')
        {
            stf += str[i+1];
            stf += ".";
        }

    }
    std::cout << stf << " " << stg;
}
void KS17()
{
    std::string name="fffff.jpg";
    std::string ren = "gar";
    rename(name, ren);
    std::cout << name <<std::endl;
}
void KS18()
{
    std::string str1 = "234строка345строка";
    std::string str2 = "строка";
    std::string str="";

    int s1 = str1.size();
    int s2 = str2.size();
    int sl = 0;

    for (int i(0); i < s1 - s2 + 1; i++)
    {
        bool fl = true;
        int j = 0;

        while (j < s2 && str1[i+j] != str2[j])
        {
            fl = false;
            j++;
        }

        if (fl)
        {
            sl++;
        }
    }



    std::cout << sl;
    
}

////////////доработать и сделать для динамических массивов//////////////
void KS19()
{
    const int N = 3;
    int arr[N][N];

    int indI = 0;
    int indJ = 0;

    FillDArr(arr, N);
    PrintDArr(arr, N);
    std::cout << "\n";
    FindMin(arr, N,indI,indJ);

    std::cout << arr[indI][indJ] << std::endl;
    
    FillNull(arr, N, indI, indJ);
    PrintDArr(arr, N);
}
void KS20()
{

    const int N = 3;
    int arr1[N][N];
    int arr2[N][N];
    int arrS[N][N];
    
    FillDArr(arr1, N);
    FillDArr(arr2, N);

    PrintDArr(arr1, N);
    std::cout << "\n";
    PrintDArr(arr2, N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arrS[i][j] = 0;
            for (int k = 0; k < N; k++)
                arrS[i][j] += arr1[i][k] * arr2[k][j];
        }
    }

    PrintDArr(arrS, N);
}
void KS21()
{
    const int N = 3;
    int arr[N][N];
    FillDArr(arr, N);
    PrintDArr(arr, N);
    for (int i = 0; i < N-i-1; i++)
    {
        for (int j(0); j < N; j++)
        {
            if ((i + j) < N)
            {
                int tmp = arr[i][j];
                arr[i][j] = arr[N - j - 1][N - i - 1];
                arr[N - j - 1][N - i - 1] = tmp;
            }
        }
    }
    std::cout << "\n";
    PrintDArr(arr, N);
}
void KS22()
{
    const int N{ 3 };
    int arr[N][N];
    int indI{ 0 };
    int indJ{ 0 };

    FillDArr(arr, N);
    PrintDArr(arr, N);
    std::cout << "\n";

    FindMin(arr, N, indI, indJ);

    std::cout << arr[indI][indJ];
    std::cout << "\n";

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i != indI && j != indJ)
            {
                int tmp = arr[i][indJ];
                arr[i][indJ] = arr[indI][j];
                arr[indI][j] = tmp;
            }
        }

    }

    PrintDArr(arr, N);
}
void KS23()
{
    const int N{ 3 };
    int arr[N][N];

    FillDArr(arr, N);
    PrintDArr(arr, N);
    
    for (int i = N - 1; i >= 1; i--)
    {
        int k = find_Min_Ind(arr[i], N);
        arr[i][k] = find_Max_Num(arr[i - 1], N);
    }
    
    std::cout << "\n";
    PrintDArr(arr, N);

}
/////////////////////////////////////////////////////////////////////////


//////////////////////////////////ДОРАБОТКА//////////////////////////////
void KS19_1() 
{
    int rows = 4;
    int cols = 5;
    int minI{ 0 };
    int minJ{ 0 };

    int** arr = new int* [rows];

    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    
    FillDinDArr(arr, rows, cols);
    PrintDinDArr(arr, rows, cols);

    FindMinInd_Din(arr, rows, cols, minI, minJ);

    std::cout << "\n";
    std::cout << arr[minI][minJ]<<std::endl;

    int ro = rows - 1;
    int co = cols - 1;
    int** arrN = new int* [ro];

    for (int i = 0; i < ro; i++)
    {
        arrN[i] = new int[co];
    }


    PrintDinDArr(arr, rows, cols);
    std::cout << "\n";
    PrintDinDArr(arrN, ro, co);

    //for (int i{ 0 }; i < rows; i++)
    //{
    //    delete[]arr[i];
    //}

    delete[] arr;
    std::cout << "\n";
    PrintDinDArr(arrN, ro, co);

    /////устал
    /*int size = 4;
    int minI = 1;
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10 + 1;
        std::cout << arr[i] << "  ";
    }
    std::cout << "\n";

    pop_back(arr, size, minI);

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }*/
    ////
}
void KS20_1()
{

    int rows1 = 2;
    int cols1 = 3;

    int rows2 = 3;
    int cols2 = 2;

    int** arr1 = new int* [rows1];
    int** arr2 = new int* [rows2];
    int** arrS = new int* [rows1];

    for (int i(0); i < rows1; i++)
    {
        arr1[i] = new int[cols1];
    }

    for (int i(0); i < rows2; i++)
    {
        arr2[i] = new int[cols2];
    }

    for (int i(0); i < rows1; i++)
    {
        arrS[i] = new int[cols2];
    }

    FillDinDArr(arr1, rows1, cols1);
    PrintDinDArr(arr1, rows1, cols1);
    
    std::cout << "\n";

    FillDinDArr(arr2, rows2, cols2);
    PrintDinDArr(arr2, rows2, cols2);

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            arrS[i][j] = 0;
            for (int k = 0; k < cols1; k++)
                arrS[i][j] += arr1[i][k] * arr2[k][j];
        }
    }

    std::cout << "\n";

    PrintDinDArr(arrS, rows1, cols2);

}
void KS21_1()
{
    int N = 4;
    int** arr = new int* [N];

    for (int i = 0; i < N; i++)
    {
        arr[i] = new int[N];
    }
    FillDinDArr(arr, N);
    PrintDinDArr(arr, N);


    for (int i = 0; i < N; i++)
    {
        for (int j(0); j < N-i-1; j++)
        {
            if ((i + j) < N)
            {
                int tmp = arr[i][j];
                arr[i][j] = arr[N - j - 1][N - i - 1];
                arr[N - j - 1][N - i - 1] = tmp;
            }
        }
    }
    std::cout << "\n";

    PrintDinDArr(arr, N);

    for (int i = 0; i < N; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}
void KS22_1()
{
    int N{ 5 };
    int indI{ 0 };
    int indJ{ 0 };


    int** arr = new int* [N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = new int[N];
    }
    
    FillDinDArr(arr, N);
    PrintDinDArr(arr, N);
    
    std::cout << "\n";

    FindMinInd_Din(arr,N, indI, indJ);

    std::cout << arr[indI][indJ];
    std::cout << "\n";

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i != indI && j != indJ)
            {
                int tmp = arr[i][indJ];
                arr[i][indJ] = arr[indI][j];
                arr[indI][j] = tmp;
            }
        }
    }

    PrintDinDArr(arr, N);

}
void KS23_1()
{

}
/////////////////////////////////////////////////////////////////////////

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));



    return 0;
}