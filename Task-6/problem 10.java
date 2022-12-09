class DetectSquares { 
    int[][] points_cnt ;
    List<int[]> points ;//each point is a pair of x,y
     public DetectSquares() {
        points_cnt = new int[1001][1001];
        points = new ArrayList<>();
    }
    public void add(int[] p) {
        //p[0]>>x ,p[1]>>y
        //points_cnt[x][y]++ freq array
        points_cnt[p[0]][p[1]]++;
        points.add(p);//make use of add method of ArrayList 
    }
    public int count(int[] p) {
        int x1 = p[0], y1 = p[1], res = 0;
        for (int[] pnt : points) {
            int x2 = pnt[0], y2 = pnt[1];
            if (Math.abs(x1-x2) == 0 || Math.abs(x1-x2) != Math.abs(y1-y2))
                continue; 
            res += points_cnt[x1][y2] * points_cnt[x2][y1];
        }
        return res;
    }
}