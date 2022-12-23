#include <iostream>
#include <vector>
using namespace std;
//TABEL SELURUH MATKUL
string tabelKelasMK[6][8] = {
    {"BIA","BIB","BIC","BID","BIE","BIF","BIG","BIH"},
    {"KIA","KIB","KIC","KID","KIE","KIF","KIG","KIH"},
    {"SMA","SMB","SMC","SMD","SME","SMF","SMG","SMH"},
    {"PWA","PWB","PWC","PWD","PWE","PWF","PWG","PWH"},
    {"APA","APB","APC","APD","APE","APF","APG","APH"},
    {"PMA","PMB","PMC","PMD","PME","PMF","PMG","PMH"},
    };

//JADWAL TIAP KELAS
vector<vector<int>> BI = {{1,1},{2,2}}; //BIA - BIB - BIC
vector<vector<int>> KI = {{1,1},{1,3}}; //KIA - KIB - KIC

void printJadwal(vector<string> &matkul, int jadwalJadi[5][13]){
    //string matkul [7] = {"", "BI", "KI", "SM", "PW", "AP", "PM"};
    printf("==============================================================\n");
    printf("|      Jam      |  Senin | Selasa |  Rabu  |  Kamis |  Jumat |\n");
    printf("==============================================================\n");
    printf("| 07.00 - 07.50 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][0]].data(), matkul[jadwalJadi[1][0]].data(), matkul[jadwalJadi[2][0]].data(), matkul[jadwalJadi[3][0]].data(), matkul[jadwalJadi[4][0]].data());
    printf("| 07.50 - 08.40 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][1]].data(), matkul[jadwalJadi[1][1]].data(), matkul[jadwalJadi[2][1]].data(), matkul[jadwalJadi[3][1]].data(), matkul[jadwalJadi[4][1]].data());
    printf("| 08.45 - 09.35 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][2]].data(), matkul[jadwalJadi[1][2]].data(), matkul[jadwalJadi[2][2]].data(), matkul[jadwalJadi[3][2]].data(), matkul[jadwalJadi[4][2]].data());
    printf("| 09.35 - 10.25 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][3]].data(), matkul[jadwalJadi[1][3]].data(), matkul[jadwalJadi[2][3]].data(), matkul[jadwalJadi[3][3]].data(), matkul[jadwalJadi[4][3]].data());
    printf("| 10.30 - 11.20 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][4]].data(), matkul[jadwalJadi[1][4]].data(), matkul[jadwalJadi[2][4]].data(), matkul[jadwalJadi[3][4]].data(), matkul[jadwalJadi[4][4]].data());
    printf("| 11.20 - 12.10 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][5]].data(), matkul[jadwalJadi[1][5]].data(), matkul[jadwalJadi[2][5]].data(), matkul[jadwalJadi[3][5]].data(), matkul[jadwalJadi[4][5]].data());
    printf("|       -       |   --   |   --   |   --   |   --   |   --   |\n", matkul[jadwalJadi[0][6]].data(), matkul[jadwalJadi[1][6]].data(), matkul[jadwalJadi[2][6]].data(), matkul[jadwalJadi[3][6]].data(), matkul[jadwalJadi[4][6]].data());
    printf("| 12.30 - 13.20 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][7]].data(), matkul[jadwalJadi[1][7]].data(), matkul[jadwalJadi[2][7]].data(), matkul[jadwalJadi[3][7]].data(), matkul[jadwalJadi[4][7]].data());
    printf("| 13.20 - 14.10 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][8]].data(), matkul[jadwalJadi[1][8]].data(), matkul[jadwalJadi[2][8]].data(), matkul[jadwalJadi[3][8]].data(), matkul[jadwalJadi[4][8]].data());
    printf("| 14.15 - 15.05 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][9]].data(), matkul[jadwalJadi[1][9]].data(), matkul[jadwalJadi[2][9]].data(), matkul[jadwalJadi[3][9]].data(), matkul[jadwalJadi[4][9]].data());
    printf("| 15.05 - 15.55 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][10]].data(), matkul[jadwalJadi[1][10]].data(), matkul[jadwalJadi[2][10]].data(), matkul[jadwalJadi[3][10]].data(), matkul[jadwalJadi[4][10]].data());
    printf("| 16.00 - 16.50 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][11]].data(), matkul[jadwalJadi[1][11]].data(), matkul[jadwalJadi[2][11]].data(), matkul[jadwalJadi[3][11]].data(), matkul[jadwalJadi[4][11]].data());
    printf("| 16.50 - 17.40 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][12]].data(), matkul[jadwalJadi[1][12]].data(), matkul[jadwalJadi[2][12]].data(), matkul[jadwalJadi[3][12]].data(), matkul[jadwalJadi[4][12]].data());
    printf("==============================================================\n");
}


int main(int argc, char const *argv[])
{
    for(int mBI=0;mBI<BI.size();mBI++){

    
        int jadwalJadi[5][13] = {
           //0,1,2,3,4,5,6,7,8,9,0,1,2
            {0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0}
        };

        vector<string> matkul;
        matkul.push_back("");

        jadwalJadi[BI[mBI][0]][BI[mBI][1]] = 1;
        
        //
        for(int mKI=0;mKI<KI.size();mKI++){
            if(jadwalJadi[KI[mKI][0]][KI[mKI][1]]!=0){
                continue;
            }
            jadwalJadi[KI[mKI][0]][KI[mKI][1]] = 2;
            matkul.push_back(tabelKelasMK[0][mBI]);
            matkul.push_back(tabelKelasMK[1][mKI]);
            matkul.push_back("");
            matkul.push_back("");
            matkul.push_back("");
            matkul.push_back("");
            printJadwal(matkul, jadwalJadi);   
        }
    //
    }
    cin.get();
    return 0;
}

