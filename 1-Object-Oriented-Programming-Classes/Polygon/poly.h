class Polygon {
    protected:
        int width, height;
    public:
        Polygon(int w=0, int h=0): width(w), height(h) {};

        void SetValues(int w, int h);
        virtual int CalcArea() const{
            return 0;
        }
};

class Rectangle : public Polygon {
    public:
        Rectangle(int w, int h): Polygon(w, h) {};
        int CalcArea() const {
            return width * height;
        };
};

class Triangle : public Polygon {
    public:
        Triangle(int w, int h): Polygon(w, h) {}; // class based call for constructor
        int CalcArea() const {
            return width * height/2;
        };
};

void Polygon::SetValues(int w = 0, int h = 0) {
    width = w;
    height = h;
};
