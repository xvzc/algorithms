class Point {
    private :
        int x;
        int y;

    public :
        Point() {
            x = 0;
            y = 0;
        }
        Point(int x_, int y_, int rank_) {
            x = x_;
            y = y_;
        }

        void set_x(int x_) {
            x = x_;
        }
        void set_y(int y_) {
            y = y_;
        }

        bool operator>(const Point& c) {
            if(x > c.x && y > c.y)
                return true;
            else 
                return false;
        }

        bool operator<(const Point& c) {
            if(x < c.x && y < c.y)
                return true;
            else 
                return false;
        }
};
