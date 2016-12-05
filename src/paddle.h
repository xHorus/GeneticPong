

#ifndef SRC_PADDLE_H_
#define SRC_PADDLE_H_

class Ball;

class Paddle {
 private:
    // Paddle position
    //int x;
    //int y;

 public:
    Paddle(int x, int y);

     // Paddle position
    int x;
    int y;

    // Paddle dimensions
    static const int HEIGHT;
    static const int WIDTH;

    static const int MAX_V;
    static const int MIN_V;

    int get_x() const;
    int get_y() const;
    void set_y(int new_y);
    void add_to_y(int new_y);
    int predict(Ball *ball); 
    void AI(Ball *ball);

    void moveGA(int move);
    int clip(int n, int lower, int upper);
};

#endif  // SRC_PADDLE_H_
