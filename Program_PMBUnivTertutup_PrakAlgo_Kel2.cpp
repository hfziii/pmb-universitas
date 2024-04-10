#include <iostream>

using namespace std;

//FUNGSI GLOBAL
void garis1(){ 
    cout << "================================================================" << endl;
}

void garis2(){
    cout << "----------------------------------------------------------------" << endl;
}

void kopsurat (){
    cout << "\t \t UNIVERSITAS TERTUTUP\n";
    cout << "\t PANITIA PENERIMAAN MAHASISWA BARU\n";
    cout << "----------------------------------------------------------------" << endl;
}

int main(){
  //TIPE DATA
  string gp, nik, nama, nama_prodi, jk, ttl, agama, email, alamat, notlp, tl, as;
  int    biaya_daftar, sp_kuliah, spp_kuliah, biaya_kuliah, nilai_sikut, total_biaya, potongan;
  char   prodi, ulang, pil_daftar, ulang_form, lunas;

  int sp [5] = {12000000, 15000000, 20000000, 10000000, 8000000};
  int spp[5] = {6000000, 8000000, 10000000, 5000000, 4000000};
  biaya_daftar  = 500000;

  cout << "\t TUGAS AKHIR PROGRAM C++"                    << endl;
  cout << "\t PRAKTIKUM ALGORITMA DAN PEMROGRAMAN DASAR"  << endl;
  cout << "NAMA KELOMPOK"                                 << endl;
  cout << "MUHAMAD HAFIZI        (065122214)"             << endl;
  cout << "BAMBANG SUGIHARTO     (065122240)"             << endl;
  cout << "ALDI HIDAYAT          (065122213)"             << endl;
  cout << "AGUNG LINGA SAKTI     (065122228)"             << endl;
  cout << "FAUZAN ROMADONA       (065122229)"             << endl;
  cout << endl;

  garis1();
  cout << "\t SELAMAT DATANG DI PENERIMAAN MAHASISWA BARU"              << endl;
  cout << "\t \t UNIVERSITAS TERTUTUP"                                  << endl;
  garis2();
  cout << "Dengan Motto Diam-Diam Unggul"                               << endl;
  cout << "Universitas Tertutup adalah yang terbaik di Manchester"      << endl;
  cout << "Terdapat banyak pilihan Program Studi diluar nalar"          << endl;
  cout << "Dapatkan Potongan Biaya Pendidikan untuk Nilai Tes Terbaik!" << endl;
  cout << "SEGERA DAFTAR DI UNIVERSITAS TERTUTUP!"                      << endl;
  garis1();

  do
  {
    cout << "Ingin lihat Program Studi Universitas Tertutup? (Y/T): ";
    cin >> ulang;
    cout << endl;
  } while (ulang!= 'Y');

  //DAFTAR JURUSAN
  cout << "\t PILIHAN PROGRAM STUDI DAN BIAYA PENDIDIKAN"                  << endl;
  cout << "______________________________________________________________" << endl;
  cout << "|No|     Program Studi  |Kode|       SP      |      SPP      |" << endl;
  cout << "--------------------------------------------------------------" << endl;
  cout << "|1 | Ilmu Sihir         | A  | Rp 12.000.000 | Rp  6.000.000 |" << endl;
  cout << "|2 | Teknik Rawa Rontek | B  | Rp 15.000.000 | Rp  8.000.000 |" << endl;
  cout << "|3 | Manajemen Cuaca    | C  | Rp 20.000.000 | Rp 10.000.000 |" << endl;
  cout << "|4 | Sastra Romawi      | D  | Rp 10.000.000 | RP  5.000.000 |" << endl;
  cout << "|5 | Ilmu Parkir        | E  | Rp  8.000.000 | Rp  4.000.000 |" << endl;
  cout << "--------------------------------------------------------------" << endl;
  cout << "BIAYA PENDAFTARAN : Rp 500.000" << endl;

  //MENU DAFTAR
  garis1();
  ulang2 :
  cout << "Daftar di Universitas Tertutup? (Y/T):";
  cin  >> pil_daftar;
  if (pil_daftar == 'T')
  {
    cout << "Kuota Terbatas, Segera Daftar di Universitas Tertutup!"<< endl;
    goto ulang2;
  }

  //FORMULIR PENDAFTARAN
  ulang3:
  garis1();
  kopsurat();
  cout << "\t FORMULIR PENDAFTARAN MAHASISWA BARU" << endl;
  cout << endl;
  cout << "Gelombang Pendaftaran        :";
  cin  >> gp;
  cout << "Pilihan Program Studi (Kode) :";
  cin  >> prodi;
  cout << "Nomor Identitas (KTP)        :";
  cin  >> nik;
  cout << "Nama Lengkap                 :";
  cin  >> nama;
  cout << "Email                        :";
  cin  >> email;
  cout << "Jenis Kelamin                :";
  cin  >> jk;
  cout << "Tempat/Tanggal Lahir         :";
  cin  >> ttl;
  cout << "Agama                        :";
  cin  >> agama;
  cout << "Alamat Lengkap               :";
  cin  >> alamat;
  cout << "No Telepon                   :";
  cin  >> notlp;
  cout << "Asal Sekolah                 :";
  cin  >> as;
  cout << "Tahun Lulus                  :";
  cin  >> tl; 

  //KIRIM FORMULIR
  garis2();
  cout << "Kirim Formulir? (Y/T)?";
  cin  >> pil_daftar;
  if (pil_daftar == 'T')
  {
    cout << "Ada yang salah? Silahkan isi ulang formulir"<< endl;
    goto ulang3;
  }

  //PEMILIHAN PRODI BESERTA SP DAN SPP 
  switch ( prodi )
  {
    case 'A':
      nama_prodi   = "Ilmu Sihir";
      sp_kuliah    =  sp[0];
      spp_kuliah   =  spp[0];
      biaya_kuliah =  sp[0] + spp[0];
      break;

    case 'B':
      nama_prodi   = "Teknik Rawa Rontek";
      sp_kuliah    =  sp[1];
      spp_kuliah   =  spp[1];
      biaya_kuliah = sp[1] + spp[1];
      break;

    case 'C':
      nama_prodi   = "Manajemen Cuaca";
      sp_kuliah    =  sp[2];
      spp_kuliah   =  spp[2];
      biaya_kuliah = sp[2] + spp[2];
      break;

    case 'D':
      nama_prodi   =  "Sastra Romawi";
      sp_kuliah    =  sp[3];
      spp_kuliah   =  spp[3];
      biaya_kuliah =  sp[3] + spp[3];
      break;

    case 'E':
      nama_prodi   =  "Ilmu Parkir";
      sp_kuliah    =  sp[4];
      spp_kuliah   =  spp[4];
      biaya_kuliah =  sp[4] + spp[4];
      break;
    
    default:
      cout << "Ada kesalahan dalam formulir anda, Silahkan isi ulang formulir " << endl;
      goto ulang3;
      break;
  }

  //TAGIHAN BIAYA KULIAH
  garis1();
  kopsurat();
  cout << "\t TAGIHAN BIAYA PENDIDIKAN" << endl;
  cout << "Nama                   :" << nama         << endl;
  cout << "Pilihan Program Studi  :" << nama_prodi   << endl;
  cout << "Gelombang              :" << gp           << endl;
  cout << "Biaya Pendaftaran      : Rp " << biaya_daftar << endl;
  cout << "Sumbangan Pembangunan  : Rp " << sp_kuliah    << endl;
  cout << "SPP Semester 1         : Rp " << spp_kuliah   << endl;
  cout << "Total Biaya            : Rp " << biaya_kuliah << endl;
  cout << endl;
  cout << "Silahkan Bayar Pendaftaran untuk syarat mengikuti SIKUT" << endl;
  cout << "(Seleksi Masuk Universitas Tertutup)." << endl;
  cout << "Potongan Biaya Kuliah 25% untuk Nilai SIKUT minimal 85. " << endl;
  garis1();

  //KONFIRMASI BAYAR DAFTAR
  do
  {
    cout << "Sudah Bayar Pendaftaran? (Y/T): ";
    cin >> ulang;
    cout << endl;
  } while (ulang!= 'Y');

  //PENGISIAN SIKUT DAN HASIL NILAINYA
  ulang4:
  cout << "Silahkan Ikuti Ujian SIIKUT lewat link berikut" << endl;
  cout << "bit.ly/ujianSIKUT" << endl;
  garis2();
  cout << "Masukkan Nilai Sikut Anda (0-100): "; cin >> nilai_sikut;

  //SURAT KETERANGAN SIKUT
  garis1();
  kopsurat();
  cout << "\t SURAT SELEKSI MASUK UNIVERSITAS TERTUTUP"               << endl;
  cout << "Panitia Penerimaan Mahasiswa Baru Universitas Tertutup"    << endl;
  cout << "dengan ini menyatakan bahwa:"                              << endl;
  cout << "Nama                   :" << nama                          << endl;
  cout << "Pilihan Program Studi  :" << nama_prodi                    << endl;
  cout << "Gelombang              :" << gp                            << endl; 

  //BOOLEAN PENENTU LULUS / TIDAK LULUS SIKUT
  if ( nilai_sikut <= 75 )
  {
    cout << "Dinyatakan tidak lulus SIKUT, Silahkan ikuti SIKUT kembali"     << endl;
    garis1();
    goto ulang4;
  }
  else if ( nilai_sikut > 75)
  {
    cout << "Dinyatakan lulus SIKUT, Silahkan lunasi Pembayaran SP dan SPP." << endl;
  }

  //LANJUTAN SUKET SIKUT
  cout << "Dengan rincian sebagai berikut:" << endl;
  cout << "Sumbangan Pembangunan  : Rp " << sp_kuliah    << endl;
  cout << "SPP Semester 1         : Rp " << spp_kuliah   << endl;
  cout << "Total Biaya            : Rp " << biaya_kuliah << endl;
  
  //BOOLEAN PENENTU POTONGAN BIAYA KULIAH
   
    if(nilai_sikut >= 85) 
    { 
        cout << "Saudara/i mendapatkan potongan biaya kuliah sebesar 25%." << endl;
        potongan = biaya_kuliah * 0.25; 
        total_biaya = biaya_kuliah-potongan; 
        cout << "Total biaya yang harus dibayarkan adalah : Rp "<< total_biaya << endl;  
    } 
     
    else 
    { 
        cout << "Saudara/i tidak mendapatkankan potongan biaya kuliah."<< endl; 
        potongan = 0; 
        total_biaya = biaya_kuliah-potongan; 
        cout << "Total biaya yang harus dibayarkan adalah : Rp "<< total_biaya << endl;  
    } 
    cout << endl;
    cout << "Diharapkan Saudara/i segera melunasi pembayaran SP dan SPP." << endl;

  garis1();  

  //KONFIRMASI PEMBAYARAN SP DAN SPP
  ulang5:
  cout << "Sudah membayar SP dan SPP? (Y/T): ";
  cin  >> lunas;
  cout << endl;

  switch (lunas)
  {
  case 'Y':
    cout << "Selamat bergabung di Universitas Tertutup" << endl;
    cout << "Untuk Informasi selanjutnya akan diinformasikan lewat email" << endl;
    cout << "Terimakasih." << endl;
    break;
  case 'T':
    cout << "Diharapkan Saudara/i segera melunasi pembayaran SP dan SPP." << endl;
    goto ulang5;
    break;

  default:
    break;
  }
       
}