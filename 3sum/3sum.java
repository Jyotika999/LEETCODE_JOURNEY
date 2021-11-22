class sort implements Comparator<List<Integer>>{
	public int compare(List<Integer> list1,List<Integer> list2){
		if(list1.get(0)>list2.get(0)){
			return 1;
		}
		if(list1.get(0)<list2.get(0)){
			return -1;
		}
		return 0;
	}
}
class Solution {
    public List<List<Integer>> threeSum(int[] A) {
			// add your logic here
        List<List<Integer>> list=new ArrayList<List<Integer>>();
		Arrays.sort(A);
		for(int i=0;i<A.length;i++){
			int left=i+1,right=A.length-1;
			while(left<right){
				List<Integer> subList=new ArrayList<>();
				if(A[i]+A[left]+A[right]==0){
					subList.add(A[i]);
					subList.add(A[left]);
					subList.add(A[right]);
					left++;
					right--;
					if(subList.size()>0){
						if(list.contains(subList)==false){
						    list.add(subList);
						}
					}
				}
				if(A[i]+A[left]+A[right]<0){
					left++;
				}
				if(A[i]+A[left]+A[right]>0){
					right--;
				}
			}	
			}
			Collections.sort(list, new sort());
		    return list;	
		
    }
}


