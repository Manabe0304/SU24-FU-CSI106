--Tao bang du lieu
CREATE TABLE NhanVien(
    NhanVienID integer PRIMARY key,
    Ten text,
    Ho text,
    PhongID integer,
    Luong integer
);

Create table Phong(
    PhongID integer primary key,
    TenPhong text
);
--Insert du lieu vao bang
insert into Phong(
    (1, 'Sales'),
    (2, 'Marketing'),
    (3, 'IT'),
    (4, 'HR')
);

insert into NhanVien VALUES
(1, 'An', 'Nguyen Van',1,5555),
(2, 'Binh', 'Tran Van',2,6000),
(3, 'Cong', 'Vu Van',1,4500),
(4, 'Dung', 'Hoang Thi',3,7500),
(5, 'Em', 'Phan Van',4,2000),
(6, 'Giang', 'Tran Thi',2,3000),
(7, 'Hai', 'Vu Van',3, 2600),
(8, 'Minh', 'Hoang Van',4, 9999),
(9, 'Nam', 'Nguyen Manh',1, 8888),
(10, 'Hung', 'Hoang Van',1, 7272),
