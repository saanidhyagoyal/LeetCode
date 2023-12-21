// class Solution {
//     public int maxWidthOfVerticalArea(int[][] points) {
//         Arrays.sort(points, new Comparator<int[]>() {
//             public int compare(int[] point1, int[] point2) {
//                 if (point1[0] != point2[0])
//                     return point1[0] - point2[0];
//                 else
//                     return point1[1] - point2[1];
//             }
//         });
//         int maxWidth = 0;
//         int length = points.length;
//         for (int i = 1; i < length; i++) {
//             int width = points[i][0] - points[i - 1][0];
//             maxWidth = Math.max(maxWidth, width);
//         }
//         return maxWidth;
//     }
// }


class Solution {
    public int maxWidthOfVerticalArea(int[][] points) {
        Arrays.sort(points, (a, b) -> a[0] - b[0]);
        int ans = 0;
        for (int i = 0; i < points.length - 1; ++i) {
            ans = Math.max(ans, points[i + 1][0] - points[i][0]);
        }
        return ans;
    }
}