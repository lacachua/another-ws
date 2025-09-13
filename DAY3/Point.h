// Khai báo lớp
class Point
{
    // public, private, protected
    // tập tên thuộc tính
public:
    int xVal;
    int yVal;

    // tập hợp nguyên mẫu hàm thành viên
public:
    // Default Constructor
    Point();

    // Copy constructor
    Point(const Point&);

    // Constructor với tham số
    Point(const int&, const int&);

    // Destructor - hàm hủy
    ~Point();

    // Phương thức
    void TT(int);
    void show();
};
