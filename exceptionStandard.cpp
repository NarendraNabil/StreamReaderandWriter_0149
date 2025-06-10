#include <iostream>
#include <exception>
// untuk objek exception yang akan digunakan
#include <array>
// untuk objek array yang akan digunakan
using namespace std;

int main(){
    cout << "Awal Program" << endl; // penanda 1...
    try{
        array<int, 3> data = {10, 20, 30};
        // pesan array integer 3 elemen
        cout << data.at(5) << endl;
        // membagi array elemen ke 5
    }
    catch(exception& e){
        // penangkapan menggunakan obyek 'exception'
        cout << e.what() << endl;
        // *akan dieksekusi karena array hanya memiliki 3 elemen*
    }
    cout << "Baris Program Yang terakhir" << endl;
    // penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*
    return 0;
}