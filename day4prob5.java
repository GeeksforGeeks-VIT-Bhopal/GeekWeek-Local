class SnapshotArray {
    
    private Map<Integer,Map<Integer,Integer>> snapShotLookUp;
    private int snap_id;

    public SnapshotArray(int length) {
        snapShotLookUp = new HashMap();
        snap_id = 0;
    }
    
    public void set(int index, int val) {
        Map<Integer,Integer> currentIndexSnap = snapShotLookUp.getOrDefault(index, new HashMap());
        currentIndexSnap.put(snap_id,val);
        snapShotLookUp.put(index,currentIndexSnap);
        
    }
    
    public int snap() {
        return ++snap_id-1;
    }
    
    public int get(int index, int snap_id) {
        if (snapShotLookUp.containsKey(index)) {
            Map<Integer,Integer> currentIndexSnap = snapShotLookUp.get(index);
            while (!currentIndexSnap.containsKey(snap_id) &&  snap_id > 0) {
                snap_id--;
            }
            if (!currentIndexSnap.containsKey(snap_id)) {
                return 0;
            } else {
                return currentIndexSnap.get(snap_id);
            }
        } else {
            return 0;
        }
    }
}
