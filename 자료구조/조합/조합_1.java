package 조합;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class 조합_1 {
	// 재귀를 이용해서 조합
	static String[] 재료 = { "상추", "패티", "토마토", "치즈" };

	static int N = 4; // 전체 재료 수
	static int R = 2; // 뽑을 재료 수

	static String[] sel = new String[R]; // 내가 선택한 토핑

	static List<String[]> list = new ArrayList<>();

	public static void main(String[] args) {
		recursion(0, 0);

		// List안에 담긴 sel 배열은 static이므로 하나가 값이 바뀌면 모두 다 바뀜 => [토마토, 치즈]만 나오게 됨
//		for(String [] se : list) {
//			System.out.println(Arrays.toString(se));
//		}
	}

	// idx : 이번 깊이에서 고려할 재료
	static void recursion(int idx, int selIdx) {

		// 재료 선택 완료
		if (selIdx == R) {
			System.out.println(Arrays.toString(sel));
			// list.add(sel);
			return;
		}

		// 재료 선택이 가능한 경계값 결정
		for (int i = idx; i <= N - R + selIdx; i++) {
			sel[selIdx] = 재료[i];
			recursion(i + 1, selIdx + 1);
		}
	}

}
