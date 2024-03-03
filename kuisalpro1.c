#include <stdio.h>

/*int main (){
    int a, b, c;
    a = 8;
    b = 9;
    c = a * b;

    printf("Nilai arus\t: %d \n", a);
    printf("Nilai tahanan\t: %d\n", b);
    printf("Nilai Tegangan ialah : %d volt",c);

    return 0;
}*/

/*float konversi_Rp_ke_$(float rupiah){
    float dollar;
    if(rupiah > 0){
        dollar = rupiah/ 15000;
    } else {
        printf("jumlah uang harus lebih dari 0.\n");
        dollar = 0;
    }
    return dollar;
}

int main(){
    float rupiah;
    printf("--------------------------------------------\n");
    printf("- Masukkan jumlah Uang dalam ruiah: ");
    scanf("%f", &rupiah);

    float dollar = konversi_Rp_ke_$(rupiah);
    if(dollar > 0) {
        printf("- uang dalam dollar\t\t: $%.2f\n", dollar);
    }
    printf("--------------------------------------------\n");
    return 0;
}*/

#define C 'C'
#define R 'R'
#define F 'F'
#define K 'K'

float Konversi_suhu(float suhu, float satuan_awal, float satuan_akhir){
    if (satuan_awal == C){
        if(satuan_akhir == F){
            return (suhu*9/4)+32;
        } else if(satuan_akhir == R){
            return (suhu*4/5);
        }else if(satuan_akhir == K){
            return (suhu+273);
        }
    } else if (satuan_awal == R){
        if(satuan_akhir == F){
            return (suhu*4/9)+32;
        } else if(satuan_akhir == C){
            return (suhu*5/4);
        }else if(satuan_akhir == K){
            return (suhu*5/4)+273;
        }
    }else if (satuan_awal == F){
        if(satuan_akhir == R){
            return (suhu-32)*5/9;
        } else if(satuan_akhir == C){
            return (suhu-32)*4/9;
        }else if(satuan_akhir == K){
            return 5/9*(suhu-32)+273;
        }
    } else if (satuan_awal == K){
        if(satuan_akhir == F){
            return 9/5*(suhu-273)+32;
        } else if(satuan_akhir == C){
            return (suhu-273);
        }else if(satuan_akhir == K){
            return 4/5*(suhu-273);
        }
    }
    printf("Satuan tidak valid\n");
    return 0;
    
}

int main(){
    float suhu;
    char satuan_awal, satuan_akhir;

    printf("Masukkan Suhu : ");
    scanf("%f", &suhu);
    printf("Dari?? (C, F, R, K) : ");
    scanf(" %c", &satuan_awal);
    printf("Ke?? (C, F, R, K) : ");
    scanf(" %c", &satuan_akhir);

    float hasil = Konversi_suhu(suhu, satuan_awal, satuan_akhir);
    if(hasil !=0){
        printf("Hasil : %.2f %c\n", hasil, satuan_akhir);
    }
    

    return 0;
}



