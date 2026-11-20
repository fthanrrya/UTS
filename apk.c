#include <stdio.h>

int main()
{

       char kegiatan1[50];
       char kegiatan2[50];
       char kegiatan3[50];

       int jam_mulai1, menit_mulai1, jam_selesai1, menit_selesai1;
       int jam_mulai2, menit_mulai2, jam_selesai2, menit_selesai2;
       int jam_mulai3, menit_mulai3, jam_selesai3, menit_selesai3;

       int waktu_mulai1, waktu_selesai1, durasi1;
       int waktu_mulai2, waktu_selesai2, durasi2;
       int waktu_mulai3, waktu_selesai3, durasi3;

       int jam1, menit1;
       int jam2, menit2;
       int jam3, menit3;

       printf("====================================== \n");
       printf("        APLIKASI MANAJEMEN WAKTU        \n");
       printf(" <<<<<< menata jadwal keseharian >>>>>> \n");
       printf("========================================\n");
       printf("                                         \n");
       printf("================================\n");
       printf("          TIME MANAGER          \n");
       printf("================================\n");

       // =========================
       // KEGIATAN 1
       // =========================

       printf("\n--- KEGIATAN 1 ---\n");

       printf("Nama kegiatan: ");
       scanf(" %s", kegiatan1);

       printf("Jam mulai:  ");
       scanf("%d", &jam_mulai1);

       printf("Menit mulai: ");
       scanf("%d", &menit_mulai1);

       printf("Jam selesai: ");
       scanf("%d", &jam_selesai1);

       printf("Menit selesai: ");
       scanf("%d", &menit_selesai1);

       waktu_mulai1 = jam_mulai1 * 60 + menit_mulai1;
       waktu_selesai1 = jam_selesai1 * 60 + menit_selesai1;

       durasi1 = waktu_selesai1 - waktu_mulai1;

       jam1 = durasi1 / 60;
       menit1 = durasi1 % 60;

       printf("%s berlangsung selama %d jam %d menit\n",
              kegiatan1, jam1, menit1);

       // =========================
       // KEGIATAN 2
       // =========================

       printf("\n--- KEGIATAN 2 ---\n");

       printf("Nama kegiatan: ");
       scanf(" %s", kegiatan2);

       printf("Jam mulai: ");
       scanf("%d", &jam_mulai2);

       printf("Menit mulai: ");
       scanf("%d", &menit_mulai2);

       printf("Jam selesai: ");
       scanf("%d", &jam_selesai2);

       printf("Menit selesai: ");
       scanf("%d", &menit_selesai2);

       waktu_mulai2 = jam_mulai2 * 60 + menit_mulai2;
       waktu_selesai2 = jam_selesai2 * 60 + menit_selesai2;

       durasi2 = waktu_selesai2 - waktu_mulai2;

       jam2 = durasi2 / 60;
       menit2 = durasi2 % 60;

       printf("%s berlangsung selama %d jam %d menit\n",
              kegiatan2, jam2, menit2);

       // =========================
       // KEGIATAN 3
       // =========================

       printf("\n--- KEGIATAN 3 ---\n");

       printf("Nama kegiatan: ");
       scanf("%s", kegiatan3);

       printf("Jam mulai: ");
       scanf("%d", &jam_mulai3);

       printf("Menit mulai: ");
       scanf("%d", &menit_mulai3);

       printf("Jam selesai: ");
       scanf("%d", &jam_selesai3);

       printf("Menit selesai: ");
       scanf("%d", &menit_selesai3);

       waktu_mulai3 = jam_mulai3 * 60 + menit_mulai3;
       waktu_selesai3 = jam_selesai3 * 60 + menit_selesai3;

       durasi3 = waktu_selesai3 - waktu_mulai3;

       jam3 = durasi3 / 60;
       menit3 = durasi3 % 60;

       printf("%s berlangsung selama %d jam %d menit\n",
              kegiatan3, jam3, menit3);

       // =========================
       // TOTAL
       // =========================

       int total_menit;
       int total_jam;
       int total_sisa_menit;

       total_menit = durasi1 + durasi2 + durasi3;

       total_jam = total_menit / 60;
       total_sisa_menit = total_menit % 60;

       printf("\n================================\n");
       printf("           HASIL AKHIR\n");
       printf("================================\n");

       printf("%s : %d jam %d menit\n",
              kegiatan1, jam1, menit1);

       printf("%s : %d jam %d menit\n",
              kegiatan2, jam2, menit2);

       printf("%s : %d jam %d menit\n",
              kegiatan3, jam3, menit3);

       printf("\nTOTAL SEMUA KEGIATAN:\n");
       printf("%d jam %d menit\n", total_jam, total_sisa_menit);

       return 0;
}