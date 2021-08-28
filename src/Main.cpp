#include "../include/Header.hpp"

// *? ctrl + k + u will uncomment the code | ctrl + k + c comment the code

int main()
{
    int dim;
    do
    {
        cout << "\nEnter the matrix order ( dim < 100 )= ";
        cin >> dim;

        if (dim <= 0 || dim >= 100)
        {
            system("cls");
        }

    } while (dim <= 0 || dim >= 100);

    int mat[dim][dim_max], choise;
    system("cls");

    do
    {
        cout << "\nMAKE YOUR CHOISE =>\n"
             << endl;
        cout << "(1) Identity Matrix" << endl;
        cout << "(2) Random Matrix" << endl;
        cout << "(3) Lower Triangular Matrix" << endl;
        cout << "(4) Upper Triangular Matrix" << endl;
        cout << "(5) Diagonal Matrix" << endl;
        cout << "(6) Transpose Matrix" << endl;
        cout << "(7) Exit" << endl;

        cin >> choise;
        system("cls");

        switch (choise)
        {
            
        case 1:
            cout << "\n\n| THE IDENTITY MATRIX |" << endl;
            identity_matrix(mat, dim);
            display(mat, dim);
            cout << endl;
            break;

        case 2:
            cout << "\n\n| RANDOM MATRIX |" << endl;
            mat_random(mat, dim);
            display(mat, dim);
            cout << endl;
            break;

        case 3:
            cout << "\n\n| LOWER TRIANGULAR MATRIX |" << endl;
            low_matrix(mat, dim);
            cout << endl;
            break;

        case 4:
            cout << "\n\n| UPPER TRIANGULAR MATRIX |" << endl;
            up_matrix(mat, dim);
            cout << endl;
            break;

        case 5:
            cout << "\n\n| DIAGONAL MATRIX |" << endl;
            diagonal_matrix(mat, dim);
            cout << endl;
            break;

        case 6:
            cout << "\n\n| ORIGINAL MATRIX |" << endl;
            mat_random(mat, dim);
            display(mat, dim);
            cout << "\n\n| TRANSPOSE MATRIX |" << endl;
            transpose_matrix(mat, dim);
            cout << endl;
            break;

        case 7:
            break;

        default:
            cout << "! WRONG CHOISE !" << endl;
            break;
        }

    } while (choise != 7);

    return 0;
}
