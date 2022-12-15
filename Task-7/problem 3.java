class Solution {
    public int[][] kClosest(int[][] points, int K) {
        Arrays.sort(points,new pointSort());  
        int[][] res = new int[K][2];
        for(int i = 0; i < K; i++)
         res[i] = points[i];
        return res;
    }

 public double distnceToOrigin(int[] p ) {
     return Math.sqrt(p[0]*p[0] + p[1]*p[1]);
 }
   
class pointSort implements Comparator<int[]>{
   public int compare(int[] p1, int[]p2){
        double dis1 = distnceToOrigin(p1);
        double dis2 = distnceToOrigin(p2);
        
        return dis1 > dis2 ? 1 : -1;
    }
}
}
