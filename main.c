#include <stdio.h>

int main() {
    float urun_tutari, odenen_para;
    
    printf("Urun tutarini giriniz (TL): ");
    scanf("%f", &urun_tutari);
    
    printf("Odenen parayi giriniz (TL): ");
    scanf("%f", &odenen_para);
    
    // Hassasiyet kaybını önlemek için kuruşa çevirme
    int para_ustu_kurus = (int)((odenen_para - urun_tutari) * 100 + 0.5);
    
    printf("\nToplam Para Ustu: %.2f TL (%d kurus)\n\n", (float)para_ustu_kurus / 100, para_ustu_kurus);
    
    // 200 TL (20000 kurus)
    int adet_200tl = para_ustu_kurus / 20000;
    para_ustu_kurus %= 20000;
    
    // 100 TL (10000 kurus)
    int adet_100tl = para_ustu_kurus / 10000;
    para_ustu_kurus %= 10000;
    
    // 50 TL (5000 kurus)
    int adet_50tl = para_ustu_kurus / 5000;
    para_ustu_kurus %= 5000;
    
    // 20 TL (2000 kurus)
    int adet_20tl = para_ustu_kurus / 2000;
    para_ustu_kurus %= 2000;
    
    // 10 TL (1000 kurus)
    int adet_10tl = para_ustu_kurus / 1000;
    para_ustu_kurus %= 1000;
    
    // 5 TL (500 kurus)
    int adet_5tl = para_ustu_kurus / 500;
    para_ustu_kurus %= 500;
    
    // 1 TL (100 kurus)
    int adet_1tl = para_ustu_kurus / 100;
    para_ustu_kurus %= 100;
    
    // 50 Kuruş
    int adet_50krs = para_ustu_kurus / 50;
    para_ustu_kurus %= 50;
    
    // 25 Kuruş
    int adet_25krs = para_ustu_kurus / 25;
    para_ustu_kurus %= 25;
    
    // 10 Kuruş
    int adet_10krs = para_ustu_kurus / 10;
    para_ustu_kurus %= 10;
    
    // 5 Kuruş
    int adet_5krs = para_ustu_kurus / 5;
    para_ustu_kurus %= 5;
    
    // 1 Kuruş
    int adet_1krs = para_ustu_kurus / 1;
    
    // Toplam küpür ve madeni para adedi
    int toplam_kupur_adedi = adet_200tl + adet_100tl + adet_50tl + adet_20tl + 
                             adet_10tl + adet_5tl + adet_1tl + adet_50krs + 
                             adet_25krs + adet_10krs + adet_5krs + adet_1krs;
    
    printf("Verilmesi Gereken Kupur ve Madeni Paralar:\n");
    printf("- %d adet 200 TL\n", adet_200tl);
    printf("- %d adet 100 TL\n", adet_100tl);
    printf("- %d adet 50 TL\n", adet_50tl);
    printf("- %d adet 20 TL\n", adet_20tl);
    printf("- %d adet 10 TL\n", adet_10tl);
    printf("- %d adet 5 TL\n", adet_5tl);
    printf("- %d adet 1 TL\n", adet_1tl);
    printf("- %d adet 50 kurus\n", adet_50krs);
    printf("- %d adet 25 kurus\n", adet_25krs);
    printf("- %d adet 10 kurus\n", adet_10krs);
    printf("- %d adet 5 kurus\n", adet_5krs);
    printf("- %d adet 1 kurus\n", adet_1krs);
    
    printf("\nVerilen Toplam Kupur/Madeni Para Sayisi: %d\n", toplam_kupur_adedi);
    
    return 0;
}
