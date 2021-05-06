class basicMath {
    public:
        int round(double a) {
            if (a > ((int) a + .5)) {
                return ((int) a + 1);
            }
            return (int) a;
        }
};