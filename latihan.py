print("================================")  
print("<<< APLIKASI MANAJEMEN WAKTU >>>")
print("================================")
print()
print(" ====== TIME MANAGER ======")

# KEGIATAN 1
print("\n--- KEGIATAN 1 ---")
kegiatan1 = input("Nama kegiatan: ")

jam_mulai1 = int(input("Jam mulai: "))
menit_mulai1 = int(input("Menit mulai: "))

jam_selesai1 = int(input("Jam selesai: "))
menit_selesai1 = int(input("Menit selesai: "))

waktu_mulai1 = jam_mulai1 * 60 + menit_mulai1
waktu_selesai1 = jam_selesai1 * 60 + menit_selesai1

durasi1 = waktu_selesai1 - waktu_mulai1

jam1 = durasi1 / 60
menit1 = durasi1 % 60

print(kegiatan1, "berlangsung selama", jam1, "jam", menit1, "menit")


# KEGIATAN 2
print("\n--- KEGIATAN 2 ---")
kegiatan2 = input("Nama kegiatan: ")

jam_mulai2 = int(input("Jam mulai: "))
menit_mulai2 = int(input("Menit mulai: "))

jam_selesai2 = int(input("Jam selesai: "))
menit_selesai2 = int(input("Menit selesai: "))

waktu_mulai2 = jam_mulai2 * 60 + menit_mulai2
waktu_selesai2 = jam_selesai2 * 60 + menit_selesai2

durasi2 = waktu_selesai2 - waktu_mulai2

jam2 = durasi2 // 60
menit2 = durasi2 % 60

print(kegiatan2, "berlangsung selama", jam2, "jam", menit2, "menit")


# KEGIATAN 3
print("\n--- KEGIATAN 3 ---")
kegiatan3 = input("Nama kegiatan: ")

jam_mulai3 = int(input("Jam mulai: "))
menit_mulai3 = int(input("Menit mulai: "))

jam_selesai3 = int(input("Jam selesai: "))
menit_selesai3 = int(input("Menit selesai: "))

waktu_mulai3 = jam_mulai3 * 60 + menit_mulai3
waktu_selesai3 = jam_selesai3 * 60 + menit_selesai3

durasi3 = waktu_selesai3 - waktu_mulai3

jam3 = durasi3 // 60
menit3 = durasi3 % 60

print(kegiatan3, "berlangsung selama", jam3, "jam", menit3, "menit")


# TOTAL SEMUA KEGIATAN
total_menit = durasi1 + durasi2 + durasi3

total_jam = total_menit // 60
total_sisa_menit = total_menit % 60

print("\n================================")
print("          HASIL AKHIR")
print("================================")

print(kegiatan1, ":", jam1, "jam", menit1, "menit")
print(kegiatan2, ":", jam2, "jam", menit2, "menit")
print(kegiatan3, ":", jam3, "jam", menit3, "menit")

print("\nTOTAL SEMUA KEGIATAN:")
print(total_jam, "jam", total_sisa_menit, "menit")
