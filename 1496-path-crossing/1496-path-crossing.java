class Solution {
    public boolean isPathCrossing(String path) {
        Map<Character, Pair<Integer, Integer>> map = new HashMap<>();
        map.put('N', new Pair(0, 1));
        map.put('S', new Pair(0, -1));
        map.put('E', new Pair(1, 0));
        map.put('W', new Pair(-1, 0));
        Set<Pair<Integer, Integer>> vis = new HashSet<>();
        vis.add(new Pair(0, 0));
        int x = 0, y = 0;
        for(char c: path.toCharArray()){
            Pair<Integer, Integer> curr = map.get(c);
            int dx = curr.getKey();
            int dy = curr.getValue();
            x += dx;
            y += dy;
            Pair<Integer, Integer> p = new Pair(x, y);
            if(vis.contains(p)) return true;
            vis.add(p);
        }
        return false;
    }
}