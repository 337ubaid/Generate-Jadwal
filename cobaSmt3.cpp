#include <iostream>
#include <vector>
using namespace std;

//TABEL SELURUH MATKUL
string tabelKelasMK[6][8] = {
    {"JKA","JKB","JKC","JKD","JKE","JKF","JKG","JKH"},
    {"BDA","BDB","BDC","BDD","BDE","BDF","BDG","BDH"},
    {"IMA","IMB","IMC","IMD","IME","IMF","IMG","IMH"},
    {"KBA","KBB","KBC","KBD","KBE","KBF","KBG","KBH"},
    {"MNA","MNB","MNC","MND","MNE","MNF","MNG","MNH"},
    {"PMA","PMB","PMC","PMD","PME","PMF","PMG","PMH"},
    };
               //0,1,2,3,4,5,6,7,8,9,0,1,2
int jamKe[13] = {1,1,1,1,1,1,0,1,1,1,0,0,0};
int hariKe[5] = {1,1,1,1,0};
//JADWAL TIAP KELAS
vector<vector<vector<int>>> JK = {
    {{0,2},{0,3},{1,11},{1,12},{4,9}},//A
    {{2,7},{2,8},{3,10},{4,9},{4,10}},//B
    {{1,0},{1,1},{2,2},{2,3},{3,2}},//C
    {{1,4},{1,5},{2,0},{2,1},{4,0}},//D
    {{1,9},{1,10},{2,9},{2,10},{3,7}},//E
    {{1,7},{1,8},{2,11},{2,12},{4,10}},//F
    {{0,4},{0,5},{1,0},{1,1},{3,5}},//G
    {{1,11},{1,12},{2,0},{2,1},{4,11}} //H
    }; 
vector<vector<vector<int>>> BD = {
    {{0,11},{0,12},{3,1},{4,7},{4,8}},//A
    {{0,11},{0,12},{2,2},{2,4},{3,1}},//B
    {{2,7},{2,8},{3,9},{4,7},{4,8}},//C
    {{1,7},{1,8},{2,9},{2,10},{4,3}},//D
    {{0,0},{0,1},{1,4},{1,5},{3,2}},//E
    {{0,4},{0,5},{2,4},{2,5},{3,1}},//F
    {{0,7},{0,8},{2,0},{2,1},{4,7}},//G
    {{0,0},{0,1},{2,11},{2,12},{4,9}} //H
    }; 
vector<vector<vector<int>>> IM = {
    {{3,9},{3,10},{4,4}},//A
    {{1,7},{1,8},{3,7}},//B
    {{2,9},{2,10},{4,11}},//C
    {{1,11},{1,12},{3,2}},//D
    {{2,11},{2,12},{3,4}},//E
    {{2,9},{2,10},{4,7}},//F
    {{3,11},{3,12},{4,10}},//G
    {{2,7},{2,8},{3,10}} //H
    }; 
vector<vector<vector<int>>> KB = {
    {{3,7},{3,8},{4,11}},//A
    {{2,9},{2,10},{4,8}},//B
    {{3,10},{3,11},{4,0}},//C
    {{2,11},{2,12},{4,8}},//D
    {{0,7},{0,8},{3,11}},//E
    {{2,7},{2,8},{4,8}},//F
    {{3,9},{3,10},{4,4}},//G
    {{3,4},{3,5},{4,7}} //H 
    }; 
vector<vector<vector<int>>> MN = {
    {{2,9},{2,10},{4,12}},//A
    {{1,4},{1,5},{3}},//B
    {{0,11},{0,12},{4,9}},//C
    {{2,7},{2,8},{4,7}},//D
    {{2,4},{2,5},{3,9}},//E
    {{4,11},{2,9},{2,10}},//F
    {{2,11},{2,12},{3,8}},//G
    {{0,7},{0,8},{3,7}} //H 
    }; 
vector<vector<vector<int>>> PM = {
    {{0,11},{0,12}},//A
    {{1,11},{1,12}},//B
    }; 

void printJadwal(vector<string> &matkul, vector<vector<int>> &jadwalJadi){
    //string matkul [7] = {"", "JK", "BD", "IM", "KB", "MN", "PM"};
    matkul.insert(matkul.begin(),"");
    printf("==============================================================\n");
    printf("|      Jam      |  Senin | Selasa |  Rabu  |  Kamis |  Jumat |\n");
    printf("==============================================================\n");
    printf("| 07.00 - 07.50 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][0]].data(), matkul[jadwalJadi[1][0]].data(), matkul[jadwalJadi[2][0]].data(), matkul[jadwalJadi[3][0]].data(), matkul[jadwalJadi[4][0]].data());
    printf("| 07.50 - 08.40 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][1]].data(), matkul[jadwalJadi[1][1]].data(), matkul[jadwalJadi[2][1]].data(), matkul[jadwalJadi[3][1]].data(), matkul[jadwalJadi[4][1]].data());
    printf("| 08.45 - 09.35 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][2]].data(), matkul[jadwalJadi[1][2]].data(), matkul[jadwalJadi[2][2]].data(), matkul[jadwalJadi[3][2]].data(), matkul[jadwalJadi[4][2]].data());
    printf("| 09.35 - 10.25 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][3]].data(), matkul[jadwalJadi[1][3]].data(), matkul[jadwalJadi[2][3]].data(), matkul[jadwalJadi[3][3]].data(), matkul[jadwalJadi[4][3]].data());
    printf("| 10.30 - 11.20 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][4]].data(), matkul[jadwalJadi[1][4]].data(), matkul[jadwalJadi[2][4]].data(), matkul[jadwalJadi[3][4]].data(), matkul[jadwalJadi[4][4]].data());
    printf("| 11.20 - 12.10 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][5]].data(), matkul[jadwalJadi[1][5]].data(), matkul[jadwalJadi[2][5]].data(), matkul[jadwalJadi[3][5]].data(), matkul[jadwalJadi[4][5]].data());
    printf("|       -       |   --   |   --   |   --   |   --   |   --   |\n");
    printf("| 12.30 - 13.20 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][7]].data(), matkul[jadwalJadi[1][7]].data(), matkul[jadwalJadi[2][7]].data(), matkul[jadwalJadi[3][7]].data(), matkul[jadwalJadi[4][7]].data());
    printf("| 13.20 - 14.10 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][8]].data(), matkul[jadwalJadi[1][8]].data(), matkul[jadwalJadi[2][8]].data(), matkul[jadwalJadi[3][8]].data(), matkul[jadwalJadi[4][8]].data());
    printf("| 14.15 - 15.05 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][9]].data(), matkul[jadwalJadi[1][9]].data(), matkul[jadwalJadi[2][9]].data(), matkul[jadwalJadi[3][9]].data(), matkul[jadwalJadi[4][9]].data());
    printf("| 15.05 - 15.55 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][10]].data(), matkul[jadwalJadi[1][10]].data(), matkul[jadwalJadi[2][10]].data(), matkul[jadwalJadi[3][10]].data(), matkul[jadwalJadi[4][10]].data());
    printf("| 16.00 - 16.50 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][11]].data(), matkul[jadwalJadi[1][11]].data(), matkul[jadwalJadi[2][11]].data(), matkul[jadwalJadi[3][11]].data(), matkul[jadwalJadi[4][11]].data());
    printf("| 16.50 - 17.40 |  %4s  |  %4s  |  %4s  |  %4s  |  %4s  |\n", matkul[jadwalJadi[0][12]].data(), matkul[jadwalJadi[1][12]].data(), matkul[jadwalJadi[2][12]].data(), matkul[jadwalJadi[3][12]].data(), matkul[jadwalJadi[4][12]].data());
    printf("==============================================================\n\n");
}

bool checkAvailable(vector<vector<int>> &jadwalJadi,vector<vector<int>> &mk){
    for(int i=0;i<mk.size();i++){
        if(jadwalJadi[mk[i][0]][mk[i][1]]!=0) return false;
    }
    return true;
}

void inputToJadwal(vector<vector<int>> &jadwalJadi,vector<vector<int>> &mk, int kodeMK){
    for(int i=0;i<mk.size();i++){
        jadwalJadi[mk[i][0]][mk[i][1]] = kodeMK;
    }
}

bool checkJamKe(vector<vector<int>> &jadwalJadi){
    for(int i=0;i<5;i++){
        for(int j=0;j<13;j++){
            if(jamKe[j]==0) {
                if(jadwalJadi[i][j]!=0) return false;
            }
        }
    }
    return true;
}

bool checkHariKe(vector<vector<int>> &jadwalJadi){
    for(int i=0;i<13;i++){
        for(int j=0;j<5;j++){
            if(hariKe[j]==0) {
                if(jadwalJadi[j][i]!=0) return false;
            }
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int counter = 0;
    for(int mJK=0;mJK<JK.size();mJK++){
        for(int mBD=0;mBD<BD.size();mBD++){
            for(int mIM=0;mIM<IM.size();mIM++){
                for(int mKB=0;mKB<KB.size();mKB++){
                    for(int mMN=0;mMN<MN.size();mMN++){
                        
                            
                            vector<vector<int>> jadwalJadi = {
                               //0,1,2,3,4,5,6,7,8,9,0,1,2
                                {0,0,0,0,0,0,0,0,0,0,0,0,0},
                                {0,0,0,0,0,0,0,0,0,0,0,0,0},
                                {0,0,0,0,0,0,0,0,0,0,0,0,0},
                                {0,0,0,0,0,0,0,0,0,0,0,0,0},
                                {0,0,0,0,0,0,0,0,0,0,0,0,0}
                            };
                            vector<string> matkul;
                            
                            inputToJadwal(jadwalJadi, JK[mJK], 1);
                            //BD
                            if(!checkAvailable(jadwalJadi, BD[mBD])){
                                continue;
                            }
                            inputToJadwal(jadwalJadi, BD[mBD], 2);
                            //IM
                            if(!checkAvailable(jadwalJadi, IM[mIM])){
                                continue;
                            }
                            inputToJadwal(jadwalJadi, IM[mIM], 3);
                            //KB
                            if(!checkAvailable(jadwalJadi, KB[mKB])){
                                continue;
                            }
                            inputToJadwal(jadwalJadi, KB[mKB], 4);
                            //MN
                            if(!checkAvailable(jadwalJadi, MN[mMN])){
                                continue;
                            }
                            inputToJadwal(jadwalJadi, MN[mMN], 5);

                            if(!checkJamKe(jadwalJadi)){
                                continue;
                            }
                            // if(!checkHariKe(jadwalJadi)){
                            //     continue;
                            // }

                            matkul.push_back(tabelKelasMK[0][mJK]);
                            matkul.push_back(tabelKelasMK[1][mBD]);
                            matkul.push_back(tabelKelasMK[2][mIM]);
                            matkul.push_back(tabelKelasMK[3][mKB]);
                            matkul.push_back(tabelKelasMK[4][mMN]);
                            
                            cout << ++counter <<endl;
                            printJadwal(matkul, jadwalJadi);   

                        
                    }
                }
            }

        }
    }
    // cin.get();
    return 0;
}

